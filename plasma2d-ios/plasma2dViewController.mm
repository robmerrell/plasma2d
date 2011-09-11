//
//  plasma2dViewController.m
//  plasma2d
//
//  Created by Rob Merrell on 3/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

#import "plasma2dViewController.h"
#import "EAGLView.h"


@interface plasma2dViewController ()
@property (nonatomic, retain) EAGLContext *context;
@property (nonatomic, assign) CADisplayLink *displayLink;
@end

@implementation plasma2dViewController

@synthesize animating, context, displayLink;

- (void)awakeFromNib
{
    pull_all_documents = YES;
    ip_address = @"192.168.1.74";
    
    EAGLContext *aContext = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2];

    if (!aContext)
        NSLog(@"Failed to create ES context");
    else if (![EAGLContext setCurrentContext:aContext])
        NSLog(@"Failed to set ES context current");
    
	self.context = aContext;
	[aContext release];
	
    [(EAGLView *)self.view setContext:context];
    [(EAGLView *)self.view setFramebuffer];
    
    UISwipeGestureRecognizer *swipeDown = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(wasSwiped)];
    swipeDown.numberOfTouchesRequired = 1;
    swipeDown.direction = UISwipeGestureRecognizerDirectionDown;
    [self.view addGestureRecognizer:swipeDown];
    
    // delete all files in the documents directory to start with a clean slate
//    [self deleteAllDocuments];
    
    // initial seed
    engine = NULL;
    [self wasSwiped];
    
    animating = FALSE;
    animationFrameInterval = 1;
    self.displayLink = nil;
}

- (void)deleteAllDocuments {
    NSFileManager *fileMgr = [NSFileManager defaultManager];
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
	NSString *path = [paths objectAtIndex:0];
    NSError *error = nil;
    
    NSArray *directoryContents = [fileMgr contentsOfDirectoryAtPath:path error:&error];
    if (error == nil) {
        for (NSString *filepath in directoryContents) {
            NSString *fullPath = [path stringByAppendingPathComponent:filepath];
            BOOL removeSuccess = [fileMgr removeItemAtPath:fullPath error:&error];
        }
    }
}

- (void)initEngine
{
    NSString* bundlePath = [[NSBundle mainBundle] resourcePath];    
    
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
	NSString *path = [paths objectAtIndex:0];
    engine = new p2d::Engine();
    engine->initialize([bundlePath UTF8String], [path UTF8String]);
    
    engine->run();
}

- (void)dealloc
{
    // Tear down context.
    if ([EAGLContext currentContext] == context)
        [EAGLContext setCurrentContext:nil];
    
    [context release];
    
    [super dealloc];
}

-(void)wasSwiped
{    
    // get a list of changed files
    NSString *action;
    if (pull_all_documents) {
        action = @"all";
        pull_all_documents = NO;
    } else {
        action = @"changed";
    }
    
    NSString *changed_url_string = [NSString stringWithFormat:@"http://%@:4567/list/%@", ip_address, action];
    NSURL *url = [NSURL URLWithString:changed_url_string];
    ASIHTTPRequest *request = [ASIHTTPRequest requestWithURL:url];
    [request startSynchronous];
    NSError *error = [request error];
    
    if (!error) {
        NSString *response = [request responseString];
        if ([response length] > 0) {
            NSArray *filenames = [response componentsSeparatedByString:@","];
            
            for (int i = 0; i < [filenames count]; i++) {
                NSString *filename = [filenames objectAtIndex:i];
                [self downloadFile:filename];
            }
        }
    }
    
    // clear the engine
    if (engine != NULL) delete engine;
    [self initEngine];
}

-(void)downloadFile: (NSString*) filename
{
    NSString *download_url_string = [NSString stringWithFormat:@"http://%@:4567/download", ip_address];
    NSURL *url = [NSURL URLWithString:download_url_string];
    
    // create the directory if it doesn't exist
    NSString *path;
    NSString *directory_name = [filename stringByDeletingLastPathComponent];
    NSString *full_path;
	NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
	path = [[paths objectAtIndex:0] stringByAppendingPathComponent:directory_name];
    full_path = [[paths objectAtIndex:0] stringByAppendingPathComponent:filename];
	NSError *error;
	if (![[NSFileManager defaultManager] fileExistsAtPath:path])
	{
        if (![[NSFileManager defaultManager] createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:&error]) {
            NSLog(@"Create directory error: %@", error);
        }
	}
    
    // request the file
    ASIHTTPRequest *request = [ASIFormDataRequest requestWithURL:url];
    [request setPostValue:filename forKey:@"filename"];
    [request setDownloadDestinationPath:full_path];
    [request startSynchronous];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc. that aren't in use.
}

- (void)viewWillAppear:(BOOL)animated
{
    [self startAnimation];
    
    [super viewWillAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [self stopAnimation];
    
    [super viewWillDisappear:animated];
}

- (void)viewDidUnload
{
	[super viewDidUnload];

    // Tear down context.
    if ([EAGLContext currentContext] == context)
        [EAGLContext setCurrentContext:nil];
	self.context = nil;	
}

- (NSInteger)animationFrameInterval
{
    return animationFrameInterval;
}

- (void)setAnimationFrameInterval:(NSInteger)frameInterval
{
    /*
	 Frame interval defines how many display frames must pass between each time the display link fires.
	 The display link will only fire 30 times a second when the frame internal is two on a display that refreshes 60 times a second. The default frame interval setting of one will fire 60 times a second when the display refreshes at 60 times a second. A frame interval setting of less than one results in undefined behavior.
	 */
    if (frameInterval >= 1) {
        animationFrameInterval = frameInterval;
        
        if (animating) {
            [self stopAnimation];
            [self startAnimation];
        }
    }
}

- (void)startAnimation
{
    if (!animating) {
        CADisplayLink *aDisplayLink = [[UIScreen mainScreen] displayLinkWithTarget:self selector:@selector(drawFrame)];
        [aDisplayLink setFrameInterval:animationFrameInterval];
        [aDisplayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
        self.displayLink = aDisplayLink;
        last_timestamp = 0.0f;
        
        animating = TRUE;
    }
}

- (void)stopAnimation
{
    if (animating) {
        [self.displayLink invalidate];
        self.displayLink = nil;
        animating = FALSE;
    }
}

- (void)drawFrame
{
    [(EAGLView *)self.view setFramebuffer];
    
    engine->setFPS(1.0f / (self.displayLink.duration * self.displayLink.frameInterval));
    float delta_time = self.displayLink.timestamp - last_timestamp;
    last_timestamp = self.displayLink.timestamp;
    engine->tick(delta_time);
    
    [(EAGLView *)self.view presentFramebuffer];
}

- (void) touchesBegan: (NSSet*) touches withEvent: (UIEvent*) event
{
    UITouch* touch = [touches anyObject];
    CGPoint location  = [touch locationInView: self.view];
    bool res = engine->getLuaWrapper().proxyTouchesBeganOrEndedEvent("event_proxy_touches_began", location.x, location.y, [touch tapCount]);
    if (!res) engine->stopProcessing();
}

- (void) touchesEnded: (NSSet*) touches withEvent: (UIEvent*) event
{
    UITouch* touch = [touches anyObject];
    CGPoint location  = [touch locationInView: self.view];
    bool res = engine->getLuaWrapper().proxyTouchesBeganOrEndedEvent("event_proxy_touches_ended", location.x, location.y, [touch tapCount]);
    if (!res) engine->stopProcessing();
}

- (void) touchesMoved: (NSSet*) touches withEvent: (UIEvent*) event
{
    UITouch* touch = [touches anyObject];
    CGPoint previous  = [touch previousLocationInView: self.view];
    CGPoint current  = [touch locationInView: self.view];
    bool res = engine->getLuaWrapper().proxyTouchesMoved(previous.x, previous.y, current.x, current.y);
    if (!res) engine->stopProcessing();
}

@end
