//
//  PostContentTableViewCell.h
//  zSMTH
//
//  Created by Zhengfa DANG on 2015-3-22.
//  Copyright (c) 2015 Zhengfa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContentLabel.h"
#import "SMTHPost.h"

@interface PostContentTableViewCell : UITableViewCell
{
    long imageHeights;
}

@property (weak, nonatomic) IBOutlet UIImageView *imageAvatar;
@property (weak, nonatomic) IBOutlet UILabel *postTime;
@property (weak, nonatomic) IBOutlet UILabel *postIndex;
@property (weak, nonatomic) IBOutlet UILabel *postAuthor;
@property (weak, nonatomic) IBOutlet ContentLabel *postContent;
@property (weak, nonatomic) IBOutlet UIView *cellView;

-(void) setCellContent:(SMTHPost*)post;
-(CGFloat) getCellHeight;
@end
