//
//  InformationCell.h
//  TopApps
//
//  Created by A, Hitesh Kumar on 12/29/15.
//  Copyright (c) 2015 A, Hitesh. All rights reserved.
//

#import <UIKit/UIKit.h>
@class App;
@interface InformationCell : UITableViewCell

- (void)configureCellForApp:(App *)app;
@end
