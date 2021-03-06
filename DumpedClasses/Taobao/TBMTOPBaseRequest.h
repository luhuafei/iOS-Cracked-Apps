//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TBHTTPURLRequestProtocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface TBMTOPBaseRequest : TBJSONModel <TBHTTPURLRequestProtocol>
{
    NSString *_HTTPMethod;
    NSURL *_URL;
    NSMutableDictionary *_parameters;
    NSString *_APIMethod;
    NSString *_APIVersion;
    _Bool _shouldEcodeSign;
    _Bool _needSession;
    _Bool _useAsync4j;
    NSString *_customHost;
    NSString *_HTTPCacheKey;
    unsigned long long _cachePolicy;
    int _sessionExpiredOption;
    _Bool _shouldMainThreadCallback;
    CDUnknownBlockType _responseModelParser;
    NSMutableDictionary *_HTTPHeaderFields;
    NSDictionary *_userInfo;
    NSArray *_blackCacheKeyParams;
    _Bool _useHTTPS;
    _Bool _isNeedWua;
}

+ (id)requestWithMethod:(id)arg1 version:(id)arg2 responseModelParser:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (CDUnknownBlockType)responseModelParser;
- (void)setResponseModelParser:(CDUnknownBlockType)arg1;
- (void)removeValueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)addHTTPHeaderFieldsFromDictionary:(id)arg1;
- (id)HTTPHeaderFields;
- (id)mutableHTTPHeaderFields;
- (void)setHTTPMethod:(id)arg1;
- (id)HTTPMethod;
- (id)bizParameters;
- (id)basicParameters;
- (void)setShouldMainThreadCallback:(_Bool)arg1;
- (_Bool)shouldMainThreadCallback;
- (void)setIsNeedWua:(_Bool)arg1;
- (_Bool)isNeedWua;
- (void)setSessionExpiredOption:(int)arg1;
- (int)sessionExpiredOption;
- (void)setCachePolicy:(unsigned long long)arg1;
- (unsigned long long)cachePolicy;
- (void)setHTTPCacheKey:(id)arg1;
- (id)HTTPCacheKey;
- (_Bool)needSession;
- (void)setBlackCacheKeyParams:(id)arg1;
- (id)blackCacheKeyParams;
- (void)setUseHTTPS:(_Bool)arg1;
- (_Bool)useHTTPS;
- (void)setCustomHost:(id)arg1;
- (id)customHost;
- (void)setUseAsync4j:(_Bool)arg1;
- (_Bool)useAsync4j;
- (_Bool)shouldEcodeSign;
- (void)setNeedSession:(_Bool)arg1;
- (void)setShouldEcodeSign:(_Bool)arg1;
- (id)APIVersion;
- (id)APIMethod;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)initWithMethod:(id)arg1 version:(id)arg2 responseModelParser:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

