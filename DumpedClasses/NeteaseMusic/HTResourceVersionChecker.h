//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface HTResourceVersionChecker : NSObject
{
    NSString *_host;
    NSDictionary *_HTTPAdditionalHeaders;
    NSString *_userAdditionalData;
}

@property(retain, nonatomic) NSString *userAdditionalData; // @synthesize userAdditionalData=_userAdditionalData;
@property(retain, nonatomic) NSDictionary *HTTPAdditionalHeaders; // @synthesize HTTPAdditionalHeaders=_HTTPAdditionalHeaders;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)checkVersionWithType:(long long)arg1 resInfos:(id)arg2 checkCompletionHandler:(CDUnknownBlockType)arg3;
- (void)checkVersionWithType:(long long)arg1 appId:(id)arg2 appVersion:(id)arg3 resInfos:(id)arg4 isDiff:(_Bool)arg5 isAutoFill:(_Bool)arg6 checkCompletionHandler:(CDUnknownBlockType)arg7;
- (id)initWithHost:(id)arg1;

@end

