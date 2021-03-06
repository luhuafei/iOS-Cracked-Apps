//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTLRQueryProtocol.h"

@class GMSx_GTLRServiceExecutionParameters, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface GMSx_GTLRBatchQuery : NSObject <GTLRQueryProtocol>
{
    NSMutableArray *_queries;
    NSMutableDictionary *_requestIDMap;
    GMSx_GTLRServiceExecutionParameters *_executionParameters;
    _Bool _shouldSkipAuthorization;
    NSDictionary *_additionalHTTPHeaders;
    NSDictionary *_additionalURLQueryParameters;
    NSString *_boundary;
    NSString *_loggingName;
}

+ (id)batchQueryWithQueries:(id)arg1;
+ (id)batchQuery;
@property(copy) NSString *loggingName; // @synthesize loggingName=_loggingName;
@property(copy) NSString *boundary; // @synthesize boundary=_boundary;
@property(copy) NSDictionary *additionalURLQueryParameters; // @synthesize additionalURLQueryParameters=_additionalURLQueryParameters;
@property(copy) NSDictionary *additionalHTTPHeaders; // @synthesize additionalHTTPHeaders=_additionalHTTPHeaders;
@property _Bool shouldSkipAuthorization; // @synthesize shouldSkipAuthorization=_shouldSkipAuthorization;
- (void).cxx_destruct;
- (_Bool)hasExecutionParameters;
@property(retain) GMSx_GTLRServiceExecutionParameters *executionParameters;
- (void)addQuery:(id)arg1;
@property(retain) NSArray *queries;
- (id)queryForRequestID:(id)arg1;
- (void)invalidateQuery;
- (id)uploadParameters;
- (_Bool)isBatchQuery;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

