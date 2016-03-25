//
//  ImageCell.m
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import "ImageCell.h"
#import "UIImageView+Networking.h"

@interface ImageCell ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation ImageCell

- (void)awakeFromNib
{
    
}

- (void) configureCellForURL:(NSString *)imageURL
{
    [self.imageView setImage:[UIImage imageNamed:@"PlaceHolderBG"]];
    [self.imageView setImageURL:[NSURL URLWithString:imageURL]];
}
@end
