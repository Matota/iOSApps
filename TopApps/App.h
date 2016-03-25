//
//  AppRecord.h
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface App : NSObject
@property (nonatomic) NSString *name;
@property (nonatomic) NSString *appId;
@property (nonatomic) NSString *iconURLString;
@property (nonatomic) NSString *sellerName;
@property (nonatomic) NSString *price;
@property (nonatomic) NSString *category;
@property (nonatomic) NSString *artist;
@property (nonatomic) NSString *version;
@property (nonatomic) NSNumber *avgRatings;
@property (nonatomic) NSString *appDescription;
@property (nonatomic) NSString *appSize;
@property (nonatomic) NSArray  *screenshotURLs;
@property (nonatomic) NSString *itunesArtWorkURL;

- (NSString *)sizeString;
@end
