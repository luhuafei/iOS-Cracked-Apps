//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMaskView.h"

@class NSMutableArray, O2OIndexPublishView, UIImageView, UIView, UIViewController;

@interface O2OIndexPublishMaskView : O2OMaskView
{
    _Bool _isAnimating;
    UIView *_blurBackgroundView;
    UIImageView *_blurImageView;
    UIView *_contentBackgroundView;
    O2OIndexPublishView *_publishView;
    UIViewController *_viewController;
    NSMutableArray *_contentButtons;
    NSMutableArray *_contentButtonFrames;
    struct CGSize _rootSize;
}

+ (void)showAtView:(id)arg1 viewController:(id)arg2;
@property(retain, nonatomic) NSMutableArray *contentButtonFrames; // @synthesize contentButtonFrames=_contentButtonFrames;
@property(retain, nonatomic) NSMutableArray *contentButtons; // @synthesize contentButtons=_contentButtons;
@property(nonatomic) struct CGSize rootSize; // @synthesize rootSize=_rootSize;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) O2OIndexPublishView *publishView; // @synthesize publishView=_publishView;
@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)cancleBlurMaskView;
- (void)hideMaskViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showMaskView;
- (void)stopAnimation;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (id)blurImageWithView:(id)arg1;
- (void)setupBackgroundView;
- (void)setPublishViewPosition:(struct CGPoint)arg1;
- (void)updatePublishOpenState:(_Bool)arg1;
- (void)publishViewTap;
- (id)maskItems;
- (void)initFunctionUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 rootView:(id)arg2 viewController:(id)arg3;

@end
