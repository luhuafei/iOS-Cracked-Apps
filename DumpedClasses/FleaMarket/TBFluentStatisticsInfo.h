//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TBFluentStatisticsInfo : NSObject
{
    double playFluentSlices;
    double playSlices;
    NSMutableDictionary *extStatisticsData;
}

@property(retain, nonatomic) NSMutableDictionary *extStatisticsData; // @synthesize extStatisticsData;
@property(nonatomic) double playSlices; // @synthesize playSlices;
@property(nonatomic) double playFluentSlices; // @synthesize playFluentSlices;
- (void).cxx_destruct;
- (id)toMeasureValueSet;
- (id)toDictionary;

@end

