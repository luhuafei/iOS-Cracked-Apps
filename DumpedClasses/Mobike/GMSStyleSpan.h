//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSStrokeStyle;

@interface GMSStyleSpan : NSObject
{
    GMSStrokeStyle *_style;
    double _segments;
}

+ (id)spanWithStyle:(id)arg1 segments:(double)arg2;
+ (id)spanWithStyle:(id)arg1;
+ (id)spanWithColor:(id)arg1 segments:(double)arg2;
+ (id)spanWithColor:(id)arg1;
@property(nonatomic) double segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) GMSStrokeStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)initWithStyle:(id)arg1 segments:(double)arg2;
- (id)init;

@end

