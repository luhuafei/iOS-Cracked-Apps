//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FALCBottomMenuView;

@interface FALiveBottomView : UIView
{
    _Bool _outOfStarTipViewIsShowing;
    id <FALiveBottomViewDelegate> _delegate;
    FALCBottomMenuView *_bottomMenuView;
    UIView *_outOfStarTipView;
}

@property(nonatomic) _Bool outOfStarTipViewIsShowing; // @synthesize outOfStarTipViewIsShowing=_outOfStarTipViewIsShowing;
@property(retain, nonatomic) UIView *outOfStarTipView; // @synthesize outOfStarTipView=_outOfStarTipView;
@property(retain, nonatomic) FALCBottomMenuView *bottomMenuView; // @synthesize bottomMenuView=_bottomMenuView;
@property(nonatomic) __weak id <FALiveBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissOutOfStarTip;
- (void)bottomViewShowOutOfStarTip;
- (void)resetViewGameInfo;
- (void)updateMoreItemRedDotShow:(_Bool)arg1;
- (void)resetView;
- (void)updatePrivateNum:(unsigned long long)arg1;
- (id)bottomViewTabBarItemWithTag:(long long)arg1;
- (void)updateBottomViewTabBarItem:(id)arg1;
- (void)setupBottomMenuView;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

