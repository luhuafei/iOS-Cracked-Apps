//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImage3x3TextureSamplingFilter.h"

@interface VSImageThresholdedNonMaximumSuppressionFilter : VSImage3x3TextureSamplingFilter
{
    int thresholdUniform;
    double _threshold;
}

@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (id)initWithPackedColorspace:(_Bool)arg1;
- (id)init;

@end

