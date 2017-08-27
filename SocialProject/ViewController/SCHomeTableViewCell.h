//
//  SCHomeTableViewCell.h
//  SocialProject
//
//  Created by Sean on 8/21/17.
//  Copyright © 2017 Sean. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell

- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end

