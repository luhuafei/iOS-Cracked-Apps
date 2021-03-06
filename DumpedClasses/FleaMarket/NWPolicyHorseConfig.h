//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NWCoding.h"

#import "NSCopying.h"

@class NSString;

@interface NWPolicyHorseConfig : NWCoding <NSCopying>
{
    int _hrIntervalTime;
    int _parallelConNum;
    int _hrNum;
    NSString *_hrStrategy;
    NSString *_hrUrlPath;
    long long _lastHRTime;
}

@property(nonatomic) long long lastHRTime; // @synthesize lastHRTime=_lastHRTime;
@property(nonatomic) int hrNum; // @synthesize hrNum=_hrNum;
@property(nonatomic) int parallelConNum; // @synthesize parallelConNum=_parallelConNum;
@property(retain, nonatomic) NSString *hrUrlPath; // @synthesize hrUrlPath=_hrUrlPath;
@property(nonatomic) int hrIntervalTime; // @synthesize hrIntervalTime=_hrIntervalTime;
@property(retain, nonatomic) NSString *hrStrategy; // @synthesize hrStrategy=_hrStrategy;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStrategy:(id)arg1 intervalTime:(int)arg2 urlPath:(id)arg3 parallelConNum:(int)arg4 hrNum:(int)arg5;

@end

