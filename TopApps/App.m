//
//  AppRecord.m
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import "App.h"

@implementation App


- (NSString *)sizeString
{
    NSInteger size = self.appSize.doubleValue;
    NSString *sizeString = nil;
    NSInteger count = 0;
    while ((size / 1024) >= 1024)
    {
        count++;
        size = size / 1024;
    }
    float sizeWdecimal = size / 1024.0;
    
    switch (count)
    {
        case 0:
            sizeString = [NSString stringWithFormat:@"%.2f KB", (float)sizeWdecimal];
            break;
        case 1:
            sizeString = [NSString stringWithFormat:@"%.2f MB", (float)sizeWdecimal];
            break;
        case 2:
            sizeString = [NSString stringWithFormat:@"%.2f GB", (float)sizeWdecimal];
            break;
    }
    
    return sizeString;
}
@end
