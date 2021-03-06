//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMAvatarImageView, LOTAnimationView, UIImageView, UILabel;

@interface FMRTCFishUserInfoView : UIView
{
    FMAvatarImageView *_userAvatarImgV;
    UILabel *_userNameLbl;
    UILabel *_userTipLbl;
    UIView *_calleeAlertView;
    UIView *_defaultBackground;
    UIView *_blackMask;
    UIImageView *_blurBackground;
    LOTAnimationView *_callerAnimation;
    LOTAnimationView *_callingAnimation;
}

@property(retain, nonatomic) LOTAnimationView *callingAnimation; // @synthesize callingAnimation=_callingAnimation;
@property(retain, nonatomic) LOTAnimationView *callerAnimation; // @synthesize callerAnimation=_callerAnimation;
@property(retain, nonatomic) UIImageView *blurBackground; // @synthesize blurBackground=_blurBackground;
@property(retain, nonatomic) UIView *blackMask; // @synthesize blackMask=_blackMask;
@property(retain, nonatomic) UIView *defaultBackground; // @synthesize defaultBackground=_defaultBackground;
@property(retain, nonatomic) UIView *calleeAlertView; // @synthesize calleeAlertView=_calleeAlertView;
@property(retain, nonatomic) UILabel *userTipLbl; // @synthesize userTipLbl=_userTipLbl;
@property(retain, nonatomic) UILabel *userNameLbl; // @synthesize userNameLbl=_userNameLbl;
@property(retain, nonatomic) FMAvatarImageView *userAvatarImgV; // @synthesize userAvatarImgV=_userAvatarImgV;
- (void).cxx_destruct;
- (void)hidden;
- (void)showWithType:(int)arg1 Tip:(id)arg2;
- (void)layoutWithType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

