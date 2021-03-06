//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVEffectFilter.h"

@interface QQAVEffectCrosshatchFilter : QQAVEffectFilter
{
    int crossHatchSpacingUniform;
    int lineWidthUniform;
    int BlackLineThresholdUniform;
    int severcontrollineUniform;
    int servercontrolBlackUniform;
    _Bool hasOverriddenImageSizeFactor;
    double _severcontrolline;
    double _servercontrolBlack;
    double _crossHatchSpacing;
    double _lineWidth;
    double _BlackLineThreshold;
}

@property(nonatomic) double BlackLineThreshold; // @synthesize BlackLineThreshold=_BlackLineThreshold;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double crossHatchSpacing; // @synthesize crossHatchSpacing=_crossHatchSpacing;
@property(nonatomic) double servercontrolBlack; // @synthesize servercontrolBlack=_servercontrolBlack;
@property(nonatomic) double severcontrolline; // @synthesize severcontrolline=_severcontrolline;
- (void)dealloc;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;

@end

