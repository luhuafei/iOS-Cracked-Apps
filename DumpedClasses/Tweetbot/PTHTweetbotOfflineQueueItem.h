//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@protocol NSCoding><NSCopying><NSObject;

@interface PTHTweetbotOfflineQueueItem : NSObject <NSCoding>
{
    SEL _action;
    Class _targetClass;
    id <NSCoding><NSCopying><NSObject> _argument;
    long long _retryCount;
}

@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) id <NSCoding><NSCopying><NSObject> argument; // @synthesize argument=_argument;
@property(nonatomic) __weak Class targetClass; // @synthesize targetClass=_targetClass;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool canRetry;
- (id)init;

@end

