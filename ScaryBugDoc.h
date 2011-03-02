//
//  ScaryBugDoc.h
//  ScaryBugs
//
//  Created by Quinn Stephens on 2/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ScaryBugData;

@interface ScaryBugDoc : NSObject {
	ScaryBugData *_data;
	UIImage *_thumbImage;
	UIImage *_fullImage;
	NSString *docPath;
}

@property(nonatomic,retain)ScaryBugData *data;
@property(nonatomic,retain)UIImage *thumbImage;
@property(nonatomic,retain)UIImage *fullImage;
@property(copy)NSString *docPath;

-(id)init;
-(id)initWihDocPath:(NSString*)docPath;
-(void)saveData;
-(void)deleteDoc;
-(void)saveImages;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;   

@end
