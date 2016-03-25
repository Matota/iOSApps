//
//  UIImageView+Networking.h
//  Top Apps
//
//  Created by A, Hitesh  on 20/11/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

// UIImageView Extentions resposipble for downloading the image from remote server.

typedef void (^DownloadCompletionBlock) (BOOL succes, UIImage *image, NSError *error);

@interface UIImageView (Networking)
@property (nonatomic) NSURL *imageURL;
@property (nonatomic) NSString *URLId;

- (void)setImageURL:(NSURL *)imageURL withCompletionBlock:(DownloadCompletionBlock)block;
@end
