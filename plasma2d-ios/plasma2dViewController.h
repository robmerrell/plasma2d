//
//  plasma2dViewController.h
//  plasma2d
//
//  Created by Rob Merrell on 3/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <OpenGLES/EAGL.h>

#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

#import "asihttprequest/ASIHTTPRequest.h"
#import "asihttprequest/ASIFormDataRequest.h"

#include "plasma2d.h"

@interface plasma2dViewController : UIViewController <UIGestureRecognizerDelegate> {
@private
    EAGLContext *context;
    
    p2d::Engine* engine;
    float last_timestamp;
    NSString *ip_address;
    
    BOOL animating;
    NSInteger animationFrameInterval;
    CADisplayLink *displayLink;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) NSInteger animationFrameInterval;

- (void)startAnimation;
- (void)stopAnimation;
- (void)initEngine;
- (void)wasSwiped;
- (void)downloadFile: (NSString*) filename;

@end
