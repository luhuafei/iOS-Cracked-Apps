//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, TBAccsRequest;

@protocol AccsStatisticsProtocol <NSObject>
- (void)success:(NSDictionary *)arg1 accsRequest:(TBAccsRequest *)arg2;
- (void)faile:(NSDictionary *)arg1 accsRequest:(TBAccsRequest *)arg2;
- (void)startSendRequest:(NSDictionary *)arg1 accsRequest:(TBAccsRequest *)arg2;

@optional
- (void)callbackToBZ:(NSDictionary *)arg1 accsRequest:(TBAccsRequest *)arg2;
@end

