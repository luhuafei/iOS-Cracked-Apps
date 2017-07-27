//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLHTMLFontLabel, QLJCEMarketingAttentPoster, QLONAPosterImageView, UIButton;

@interface QLONAMarketAttentPosterView : UIView
{
    QLONAPosterImageView *_imageContent;
    QLHTMLFontLabel *_titleLabel;
    QLHTMLFontLabel *_mediaLabel;
    UIButton *_orderBtn;
    UIButton *_checkBtn;
    UIView *_clickView;
    QLJCEMarketingAttentPoster *_attentPoster;
    long long _style;
    long long _lastActivityState;
    _Bool _isOrdered;
}

+ (int)thumbStyleWithUIType:(long long)arg1;
+ (long long)getActivityState:(id)arg1;
- (void).cxx_destruct;
- (_Bool)needUpdateButton;
- (void)reportOrderButton;
- (id)getLeftTimeString;
- (_Bool)shouldHaveCheckButton;
- (_Bool)shouldHaveOrderButton;
- (long long)getMediaLabelType;
- (void)posterClicked;
- (void)orderBtnClick;
- (void)layoutSubviews;
- (_Bool)isCurrentTimerValid;
- (void)timerUpdate;
- (void)updateLeftTimeLabel;
- (void)refreshOrderState;
- (void)flushWithPoster:(id)arg1 thumbStyle:(int)arg2;
- (void)updateCheckBtn;
- (void)updateOrderBtn;
- (void)updateMediaLabel;
- (void)updateTitleLabel;
- (void)updatePoster;
- (void)setObject:(id)arg1 withStyle:(long long)arg2;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
