//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

@class UIImage, UIImageView, UIView;

@interface DetailInfoViewController : KGViewController
{
    UIView *_maskView;
    UIView *_backView;
    UIView *_animationView;
    UIImageView *_burImageView;
    UIImage *_detailImage;
}

@property(retain, nonatomic) UIImage *detailImage; // @synthesize detailImage=_detailImage;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)unShow:(CDUnknownBlockType)arg1;
- (void)showEnterShowAnimation;
- (void)didReceiveMemoryWarning;
- (void)blurBackground;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

