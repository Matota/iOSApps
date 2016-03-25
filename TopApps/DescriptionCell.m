//
//  DescriptionCell.m
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import "DescriptionCell.h"
#import "App.h"

@interface DescriptionCell ()
@property (nonatomic, weak) IBOutlet UILabel *descriptionlabel;
@end

@implementation DescriptionCell

- (void)configureCellForApp:(App *)app
{
    self.descriptionlabel.text = app.appDescription;
}

@end
