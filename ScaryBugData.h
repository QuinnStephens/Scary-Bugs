//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Quinn Stephens on 2/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ScaryBugData : NSObject {
	NSString *_title;
	float _rating;
}

@property(nonatomic,copy) NSString *title;
@property(nonatomic) float rating;

-(id)initWithTitle:(NSString*)title rating:(float)rating;

@end
