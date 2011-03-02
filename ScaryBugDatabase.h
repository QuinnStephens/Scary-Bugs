//
//  ScaryBugDatabase.h
//  ScaryBugs
//
//  Created by Quinn Stephens on 3/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ScaryBugDatabase : NSObject {

}

+(NSMutableArray*)loadScaryBugDocs;
+(NSString*)nextScaryBugDocPath;

@end
