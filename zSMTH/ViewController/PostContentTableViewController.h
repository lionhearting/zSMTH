//
//  PostContentTableViewController.h
//  zSMTH
//
//  Created by Zhengfa DANG on 2015-3-22.
//  Copyright (c) 2015 Zhengfa. All rights reserved.
//

#import "ExtendedTableViewController.h"

@interface PostContentTableViewController : ExtendedTableViewController

@property (strong, nonatomic) NSString *boardName;
@property (nonatomic) long postID;


- (IBAction)return:(id)sender;

@end
