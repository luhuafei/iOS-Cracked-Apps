//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQPayHelper : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

+ (_Bool)isSupport;
+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)QQPayResultBackWithUrl:(id)arg1;
- (void)sendPayWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)whenFailurePay;
- (void)whenSuccessPay;

@end

