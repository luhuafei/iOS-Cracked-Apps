//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, NSArray, UIColor;

@interface PTHGradientView : UIView
{
    NSArray *_backgroundColors;
    CALayer *_topLineLayer;
    CALayer *_bottomLineLayer;
    _Bool _animationMode;
    CAGradientLayer *_gradientLayer;
    UIColor *_topBorderColor;
    UIColor *_bottomBorderColor;
}

+ (Class)layerClass;
+ (id)newBottomShadowView;
+ (id)newTopShadowView;
+ (id)newShadow:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
@property(retain, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(retain, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
@property(copy, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSubviews;

@end

