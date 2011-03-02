//
//  EditBugViewController.h
//  ScaryBugs
//
//  Created by Quinn Stephens on 2/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RateView.h"

@class ScaryBugDoc;


@interface EditBugViewController : UIViewController <UITextFieldDelegate, RateViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
	ScaryBugDoc *_bugDoc;
	UITextField *_titleField;
	UIImageView *_imageView;
	RateView *_rateView;
	UIImagePickerController *_picker;
}

@property(nonatomic,retain)ScaryBugDoc *bugDoc;
@property(nonatomic,retain)IBOutlet UITextField *titleField;
@property(nonatomic,retain)IBOutlet UIImageView *imageView;
@property(retain) IBOutlet RateView *rateView;
@property(retain) UIImagePickerController *picker;

-(IBAction)titleFieldValueChanged:(id)sender;
-(IBAction)addPictureTapped:(id)sender;

@end
