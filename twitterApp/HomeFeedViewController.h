//
//  HomeFeedViewController.h
//  twitterApp
//
//  Created by Ravi Sathyam on 11/1/14.
//  Copyright (c) 2014 SambarLabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"

@interface HomeFeedViewController : UITableViewController<UITableViewDataSource, UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *feedTableView;
@property (nonatomic, strong) NSArray* tweets;
@property (nonatomic, strong) User* user;
- (id)initWithUser:(User *)user;
@end
