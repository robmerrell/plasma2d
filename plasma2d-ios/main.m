//
//  main.m
//  plasma2d
//
//  Created by Rob Merrell on 3/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define REDIRECT_STDOUT_TO_FILE 0

int main(int argc, char *argv[])
{
#if REDIRECT_STDOUT_TO_FILE //## redirect stdout to "log-out.txt"
    freopen("/tmp/log-out.txt", "w", stdout);
#endif  //  REDIRECT_STDOUT_TO_FILE
    
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    int retVal = UIApplicationMain(argc, argv, nil, nil);
    [pool release];
    
#if REDIRECT_STDOUT_TO_FILE //## redirect stdout to "log-out.txt"
    fflush(stdout);
    fclose(stdout);
#endif  //  REDIRECT_STDOUT_TO_FILE

    return retVal;
}
