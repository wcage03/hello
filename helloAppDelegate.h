//
//  helloAppDelegate.h
//  hello
//
//  Created by William Cage on 2/7/11.
//  Copyright 2011 na. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface helloAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
