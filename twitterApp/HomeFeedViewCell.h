//
//  HomeFeedViewCell.h
//  twitterApp
//
//  Created by Ravi Sathyam on 11/1/14.
//  Copyright (c) 2014 SambarLabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"

@interface HomeFeedViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *tweetTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *tweetTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *tweetUsernameLabel;
@property (weak, nonatomic) IBOutlet UILabel *tweetNameLabel;
@property (weak, nonatomic) IBOutlet UIImageView *tweetProfilePictureLabel;
@property (nonatomic, strong) Tweet* tweet;
@property (nonatomic, strong) UINavigationController* navController;
@property (weak, nonatomic) IBOutlet UIButton *retweetButton;
@property (weak, nonatomic) IBOutlet UIButton *favoriteButton;
- (IBAction)onReplyClicked:(id)sender;
- (IBAction)onRetweetClicked:(id)sender;
- (IBAction)onFavoriteClicked:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *imageButton;
- (IBAction)onImageButtonClicked:(id)sender;
@end
