//
//  ScaryBugsAppDelegate.h
//  ScaryBugs
//
//  Created by Quinn Stephens on 2/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScaryBugsAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (retain) IBOutlet UIWindow *window;
@property (retain) IBOutlet UINavigationController *navigationController;

@end

