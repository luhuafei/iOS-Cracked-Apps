//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer;

@interface OMGTopNavgationView : UIView
{
    UIView *_innerLeftView;
    UIView *_innerRightView;
    UIView *_innerCloseView;
    UIView *_innerTitleView;
    UIView *_innerLastTitleView;
    CALayer *_horizLineLayer;
}

+ (id)navgationView;
@property(retain, nonatomic) CALayer *horizLineLayer; // @synthesize horizLineLayer=_horizLineLayer;
@property(retain, nonatomic) UIView *innerLastTitleView; // @synthesize innerLastTitleView=_innerLastTitleView;
@property(retain, nonatomic) UIView *innerTitleView; // @synthesize innerTitleView=_innerTitleView;
@property(retain, nonatomic) UIView *innerCloseView; // @synthesize innerCloseView=_innerCloseView;
@property(retain, nonatomic) UIView *innerRightView; // @synthesize innerRightView=_innerRightView;
@property(retain, nonatomic) UIView *innerLeftView; // @synthesize innerLeftView=_innerLeftView;
- (void).cxx_destruct;
- (void)setTopNavgationFrame:(struct CGRect)arg1;
- (struct CGRect)frameForTitleView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (_Bool)isCloseViewHidden;
- (void)hideCloseView;
- (void)showCloseView;
- (void)setCloseViewAsHidden:(id)arg1;
- (void)showRightView:(_Bool)arg1;
- (void)setRightView:(id)arg1;
- (void)setLeftView:(id)arg1;
- (double)subViewTop:(double)arg1;
- (void)hiddenBottomLine:(_Bool)arg1;
- (void)setHorizLIneFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
