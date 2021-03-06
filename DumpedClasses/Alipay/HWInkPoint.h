//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HWInkPoint : NSObject
{
    int _segment;
    float _pressure;
    double _time;
    struct CGPoint _point;
}

@property(readonly, nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(readonly, nonatomic) int segment; // @synthesize segment=_segment;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)toJsonString;
- (id)initWithPoint:(struct CGPoint)arg1 andSegment:(int)arg2 andTimeInt:(int)arg3;
- (id)initWithPoint:(struct CGPoint)arg1 andSegment:(int)arg2 andTime:(double)arg3;

@end

