//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSDate, NSString, NSTimer, UIColor, UIImageView, UILabel;

@interface MBKActivityHub : UIView <CAAnimationDelegate>
{
    _Bool useAnimation;
    UILabel *label;
    _Bool _removeFromSuperViewOnHide;
    float _graceTime;
    float _opacity;
    NSString *_labelText;
    UIColor *_color;
    NSTimer *_graceTimer;
    NSTimer *_minShowTimer;
    NSDate *_showStarted;
    UIImageView *_bagkgroundImageView;
    UIImageView *_routateImageView;
    struct CGSize _size;
}

+ (id)allHUDsForView:(id)arg1;
+ (id)HUDForView:(id)arg1;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImageView *routateImageView; // @synthesize routateImageView=_routateImageView;
@property(retain, nonatomic) UIImageView *bagkgroundImageView; // @synthesize bagkgroundImageView=_bagkgroundImageView;
@property(retain) NSDate *showStarted; // @synthesize showStarted=_showStarted;
@property struct CGSize size; // @synthesize size=_size;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer=_minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer=_graceTimer;
@property(retain) UIColor *color; // @synthesize color=_color;
@property float opacity; // @synthesize opacity=_opacity;
@property float graceTime; // @synthesize graceTime=_graceTime;
@property(copy) NSString *labelText; // @synthesize labelText=_labelText;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide=_removeFromSuperViewOnHide;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideDelayed:(id)arg1;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)layoutSubviews;
- (void)updateUIForKeypath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)handleGraceTimer:(id)arg1;
- (void)updateIndicators;
- (void)setupLabel;
- (void)show:(_Bool)arg1;
- (void)done;
- (void)animatedCommit;
- (void)hide:(_Bool)arg1;
- (id)initWithWindow:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

