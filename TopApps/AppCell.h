//
//  AppCell.h
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class App;
@interface AppCell : UITableViewCell
- (void)configureCellForAppRecord:(App *)app;
@end
