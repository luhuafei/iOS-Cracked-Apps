//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTTrialBucketModel, NSArray, NSString;

@interface DTTrialGroupModel : NSObject
{
    NSString *_name;
    NSArray *_bucketList;
    NSString *_startTime;
    NSString *_endTime;
    DTTrialBucketModel *_lastBucket;
}

@property(retain, nonatomic) DTTrialBucketModel *lastBucket; // @synthesize lastBucket=_lastBucket;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *bucketList; // @synthesize bucketList=_bucketList;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

