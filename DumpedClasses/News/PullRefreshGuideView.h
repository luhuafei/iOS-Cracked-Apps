//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "CAAnimationDelegate.h"
#import "TTGuideProtocol.h"

@class NSString, SSThemedButton, SSThemedImageView, SSThemedLabel;

@interface PullRefreshGuideView : SSThemedView <CAAnimationDelegate, TTGuideProtocol>
{
    _Bool _hasFailedAnimation;
    SSThemedLabel *_bigCircle;
    SSThemedLabel *_smallCircle;
    SSThemedImageView *_arrowImageView;
    SSThemedImageView *_handImageView;
    SSThemedButton *_closeButton;
    SSThemedLabel *_titleLabel;
}

+ (_Bool)hasShownPullRefreshGuideView;
+ (void)savehasShownPullRefreshGuideInfo;
@property(nonatomic) _Bool hasFailedAnimation; // @synthesize hasFailedAnimation=_hasFailedAnimation;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SSThemedImageView *handImageView; // @synthesize handImageView=_handImageView;
@property(retain, nonatomic) SSThemedImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) SSThemedLabel *smallCircle; // @synthesize smallCircle=_smallCircle;
@property(retain, nonatomic) SSThemedLabel *bigCircle; // @synthesize bigCircle=_bigCircle;
- (void).cxx_destruct;
- (double)tt_length:(double)arg1;
- (void)showGuideViewWithSuperView:(id)arg1;
@property(retain, nonatomic) id context;
- (void)showWithContext:(id)arg1;
- (_Bool)shouldDisplay:(id)arg1;
- (void)closeGuidebuttonClicked:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAnimation;
- (void)initLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

