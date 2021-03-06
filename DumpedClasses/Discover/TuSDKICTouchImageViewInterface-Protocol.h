//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIImageView;

@protocol TuSDKICTouchImageViewInterface <NSObject>
@property(readonly, nonatomic) double zoomScale;
@property(readonly, nonatomic) long long imageOrientation;
@property(nonatomic) double regionRatio;
@property(readonly, nonatomic) _Bool isInAniming;
@property(readonly, nonatomic) UIImageView *imageView;
@property(nonatomic) id <TuSDKICTouchImageViewDelegate> delegate;
- (void)restoreWithZoomRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (_Bool)inActioning;
- (struct CGRect)countImageCutRect;
- (void)changeRegionRatio:(double)arg1;
- (void)changeImage:(long long)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)needUpdateLayout;
@end

