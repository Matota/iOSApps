//
//  ScreenShotsCell.h
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class App;
@interface ScreenShotsCell : UITableViewCell
@property (nonatomic, weak) UIViewController *parentViewController;
- (void)configureCellForApp:(App *)app;
@end
