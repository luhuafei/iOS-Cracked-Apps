//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class REFrostedContainerViewController, UIColor, UIImage, UIImageView, UIPanGestureRecognizer;

@interface REFrostedViewController : UIViewController
{
    _Bool _panGestureEnabled;
    _Bool _limitMenuViewSize;
    _Bool _liveBlur;
    _Bool _visible;
    _Bool _automaticSize;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _direction;
    double _backgroundFadeAmount;
    UIColor *_bgViewbackgroundColor;
    UIColor *_blurTintColor;
    double _blurRadius;
    double _blurSaturationDeltaFactor;
    double _animationDuration;
    long long _liveBlurBackgroundStyle;
    id <REFrostedViewControllerDelegate> _delegate;
    UIViewController *_contentViewController;
    UIViewController *_menuViewController;
    double _imageViewWidth;
    UIImage *_image;
    UIImageView *_imageView;
    REFrostedContainerViewController *_containerViewController;
    struct CGSize _menuViewSize;
    struct CGSize _calculatedMenuViewSize;
}

@property(nonatomic) struct CGSize calculatedMenuViewSize; // @synthesize calculatedMenuViewSize=_calculatedMenuViewSize;
@property(nonatomic) _Bool automaticSize; // @synthesize automaticSize=_automaticSize;
@property(retain, nonatomic) REFrostedContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double imageViewWidth; // @synthesize imageViewWidth=_imageViewWidth;
@property(retain, nonatomic) UIViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <REFrostedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long liveBlurBackgroundStyle; // @synthesize liveBlurBackgroundStyle=_liveBlurBackgroundStyle;
@property(nonatomic) _Bool liveBlur; // @synthesize liveBlur=_liveBlur;
@property(nonatomic) struct CGSize menuViewSize; // @synthesize menuViewSize=_menuViewSize;
@property(nonatomic) _Bool limitMenuViewSize; // @synthesize limitMenuViewSize=_limitMenuViewSize;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double blurSaturationDeltaFactor; // @synthesize blurSaturationDeltaFactor=_blurSaturationDeltaFactor;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(retain, nonatomic) UIColor *blurTintColor; // @synthesize blurTintColor=_blurTintColor;
@property(retain, nonatomic) UIColor *bgViewbackgroundColor; // @synthesize bgViewbackgroundColor=_bgViewbackgroundColor;
@property(nonatomic) double backgroundFadeAmount; // @synthesize backgroundFadeAmount=_backgroundFadeAmount;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool panGestureEnabled; // @synthesize panGestureEnabled=_panGestureEnabled;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (void)panGestureRecognized:(id)arg1;
- (void)hideMenuViewController;
- (void)resizeMenuViewControllerToSize:(struct CGSize)arg1;
- (void)hideMenuViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentMenuViewControllerWithAnimatedApperance:(_Bool)arg1;
- (void)presentMenuViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)arg1 menuViewController:(id)arg2;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

