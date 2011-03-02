//
//  RootViewController.h
//  ScaryBugs
//
//  Created by Quinn Stephens on 2/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EditBugViewController;

@interface RootViewController : UITableViewController {
	NSMutableArray *_bugs;
	EditBugViewController *_editBugViewController;
}

@property(nonatomic,retain) NSMutableArray *bugs;
@property(nonatomic,retain) EditBugViewController *editBugViewController;

@end
