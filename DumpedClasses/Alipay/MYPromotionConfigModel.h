//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface MYPromotionConfigModel : NSObject <NSCopying>
{
    _Bool _continuously;
    NSString *_objectId;
    NSString *_uri;
    NSArray *_uris;
    NSString *_url;
    NSString *_type;
    double _modalThreshold;
    long long _startTime;
    long long _endTime;
    NSDictionary *_extra;
    long long _priority;
    NSString *_jsonString;
}

+ (id)modelWithConfig:(id)arg1;
+ (Class)extraElementClass;
+ (Class)urisElementClass;
@property(retain, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool continuously; // @synthesize continuously=_continuously;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)timeForString:(id)arg1;
- (id)analyseDate:(id)arg1;
- (id)init;

@end

