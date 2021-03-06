//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HTSFirstRewardView, NSString, UIButton, UILabel;

@interface HTSLiveGiftBottomView : UIView
{
    id <GiftDispalyBottomViewDelegate> _delegate;
    NSString *_roomID;
    UILabel *_accountBalanceLabel;
    UIButton *_sendButton;
    HTSFirstRewardView *_firstChargeReward;
}

@property(nonatomic) __weak HTSFirstRewardView *firstChargeReward; // @synthesize firstChargeReward=_firstChargeReward;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *accountBalanceLabel; // @synthesize accountBalanceLabel=_accountBalanceLabel;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) __weak id <GiftDispalyBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shouldDisplaySendButton:(_Bool)arg1;
- (void)refreshFirstChargeView;
- (void)refreshLeftCountLabel:(unsigned long long)arg1;
- (void)sendButtonTouchupInside:(id)arg1;
- (void)rechargeAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

