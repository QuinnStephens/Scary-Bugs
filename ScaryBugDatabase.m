//
//  ScaryBugDatabase.m
//  ScaryBugs
//
//  Created by Quinn Stephens on 3/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ScaryBugDatabase.h"
#import "ScaryBugDoc.h"

@implementation ScaryBugDatabase

+(NSString*)getPrivateDocsDir{
	NSArray *paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask,YES);
	NSString *documentsDirectory = [paths objectAtIndex:0];
	documentsDirectory = [documentsDirectory stringByAppendingPathComponent:@"Private Documents"];
	
	NSError *error;
	[[NSFileManager defaultManager] createDirectoryAtPath:documentsDirectory withIntermediateDirectories:YES attributes:nil error:&error];
	
	return documentsDirectory;
}
	  
+(NSMutableArray *)loadScaryBugDocs{
	//Get private docs dir
	NSString *documentsDirectory = [ScaryBugDatabase getPrivateDocsDir];
	NSLog(@"Loading bugs from %@",documentsDirectory);
	
	//Get contents of documents directory
	NSError *error;
	NSArray *files = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:documentsDirectory error:&error];
	if(files == nil){
		NSLog(@"Error reading contents of documents directory: %@", [error localizedDescription]);
		return nil;
	}
			  
	//Create ScaryBugDoc for each file
	NSMutableArray *retval = [NSMutableArray arrayWithCapacity:files.count];
	for(NSString *file in files){
		if ([file.pathExtension compare:@"scarybug" options:NSCaseInsensitiveSearch] == NSOrderedSame) {
			NSString *fullPath = [documentsDirectory stringByAppendingPathComponent:file];
			ScaryBugDoc *doc = [[[ScaryBugDoc alloc] initWithDocPath:fullPath] autorelease];
			[retval addObject:doc];
		}
	}
	return retval;
}
			  
+(NSString*)nextScaryBugDocPath{
	//Get private docs dir
	NSString *documentsDirectory = [ScaryBugDatabase getPrivateDocsDir];
	
	//Get contents of documents directory
	NSError *error;
	NSArray *files = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:documentsDirectory error:&error];
	if(files == nil){
		NSLog(@"Error reading contents of documents directory: %@", [error localizedDescription]);
		return nil;
	}
	
	//Search for an available name
	int maxNumber = 0;
	for(NSString *file in files){
		if ([file.pathExtension compare:@"scarybug" options:NSCaseInsensitiveSearch] == NSOrderedSame) {
			NSString *fileName = [file stringByDeletingPathExtension];
			maxNumber = MAX(maxNumber, fileName.intValue);
		}
	}
			  
	//Get available name
	NSString *availableName = [NSString stringWithFormat:@"%d.scarybug", maxNumber+1];
	return [documentsDirectory stringByAppendingPathComponent:availableName];
}

@end
