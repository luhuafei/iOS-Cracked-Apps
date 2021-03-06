//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EMChatBaseBubbleView, MessageModel, UIImageView, UILabel;

@interface EMChatViewBaseCell : UITableViewCell
{
    UIImageView *_headImageView;
    UILabel *_nameLabel;
    EMChatBaseBubbleView *_bubbleView;
    double _nameLabelHeight;
    MessageModel *_messageModel;
}

+ (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 withObject:(id)arg3;
+ (id)cellIdentifierForMessageModel:(id)arg1;
@property(retain, nonatomic) EMChatBaseBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MessageModel *messageModel; // @synthesize messageModel=_messageModel;
- (void).cxx_destruct;
- (void)setupSubviewsForMessageModel:(id)arg1;
- (void)routerEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)headImagePressed:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithMessageModel:(id)arg1 reuseIdentifier:(id)arg2;

@end

