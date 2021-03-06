//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class NSArray, NSMutableDictionary;

@interface MQQFeatureReportRequest : MQQSharkBaseRequest
{
    double _uploadStarTime;
    NSArray *_features;
    NSMutableDictionary *_beaconDict;
}

@property(retain, nonatomic) NSMutableDictionary *beaconDict; // @synthesize beaconDict=_beaconDict;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
- (void)didSharkDataFailInAccessLayer;
- (void)didSharkDataFail:(const vector_aa1d262e *)arg1 errCode:(long long)arg2;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)checkReportFeatureDuration:(_Bool)arg1;
- (void)report;
- (void)dealloc;

@end

