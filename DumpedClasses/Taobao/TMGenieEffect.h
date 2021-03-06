//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TMGenieEffect : UIView
{
}

- (struct CATransform3D)transformRect:(struct CGRect)arg1 toTrapezoid:(union TMGenieEffecTrapezoid)arg2;
- (id)transformationsForSlices:(id)arg1 edge:(unsigned long long)arg2 startPosition:(double)arg3 totalSize:(double)arg4 firstBezier:(struct TMGenieEffecSegment)arg5 secondBezier:(struct TMGenieEffecSegment)arg6 finalRectDepth:(double)arg7;
- (id)sliceImage:(id)arg1 toLayersAlongAxis:(long long)arg2;
- (id)renderSnapshotWithMarginForAxis:(long long)arg1;
- (void)genieTransitionWithDuration:(double)arg1 edge:(unsigned long long)arg2 destinationRect:(struct CGRect)arg3 reverse:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)genieOutTransitionWithDuration:(double)arg1 startRect:(struct CGRect)arg2 startEdge:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)genieInTransitionWithDuration:(double)arg1 destinationRect:(struct CGRect)arg2 destinationEdge:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

