//
//  DataManager.h
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import <Foundation/Foundation.h>

@class App;
typedef void (^CompletionBlock)(BOOL succes, NSArray *appRecords, NSError *error) ;
typedef void (^AppDetailsCompletionBlock)(BOOL succes, App *appDetails, NSError *error) ;

@interface DataManager : NSObject
+ (id)sharedManager;
- (void)getTopPaidAppswithCompletionBlock:(CompletionBlock)block;
- (void)getDetailsForApp:(App *)app withCompletionBlock:(AppDetailsCompletionBlock)block;
@end
