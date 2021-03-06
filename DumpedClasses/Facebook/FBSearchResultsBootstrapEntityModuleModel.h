//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMemGraphSearchQuery, FBMemSearchCombinedResultsEdge, FBUserSession, NSArray, NSDictionary, NSString, UIImage;

@interface FBSearchResultsBootstrapEntityModuleModel : NSObject
{
    FBMemSearchCombinedResultsEdge *_serverModuleEdge;
    NSArray *_mergedEntities;
    FBMemGraphSearchQuery *_seeMoreQuery;
    unsigned long long _mergeState;
    NSArray *_simpleSearchSuggestions;
    NSString *_title;
    UIImage *_icon;
    NSString *_clientLoggingUnitId;
    NSDictionary *_clientResultLoggingUnitIds;
    NSString *_keyword;
    FBUserSession *_session;
}

+ (id)_iconFromSuggestions:(id)arg1;
+ (id)_titleFromSuggestions:(id)arg1;
+ (unsigned long long *)_unifiedResultTypeForSuggestions:(id)arg1;
+ (id)_filterSuggestionsToSingleResultType:(id)arg1;
+ (id)_mergeInResultEdges:(id)arg1 toSuggestions:(id)arg2;
+ (id)mergeInModuleEdge:(id)arg1 toModel:(id)arg2;
+ (id)mergedForNativeTemplatesFromModel:(id)arg1;
+ (id)finalizedModelFromModel:(id)arg1;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(readonly, copy, nonatomic) NSDictionary *clientResultLoggingUnitIds; // @synthesize clientResultLoggingUnitIds=_clientResultLoggingUnitIds;
@property(readonly, copy, nonatomic) NSString *clientLoggingUnitId; // @synthesize clientLoggingUnitId=_clientLoggingUnitId;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *simpleSearchSuggestions; // @synthesize simpleSearchSuggestions=_simpleSearchSuggestions;
@property(readonly, nonatomic) unsigned long long mergeState; // @synthesize mergeState=_mergeState;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long resultType;
- (_Bool)supportsMerging;
- (id)roleForLogging;
@property(readonly, nonatomic) FBMemSearchCombinedResultsEdge *serverModuleEdge;
@property(readonly, nonatomic) FBMemGraphSearchQuery *seeMoreQuery;
@property(readonly, copy, nonatomic) NSArray *mergedEntities;
- (id)initWithSimpleSearchSuggestions:(id)arg1 supportMerging:(_Bool)arg2 keyword:(id)arg3 session:(id)arg4;
- (id)initWithSimpleSearchSuggestions:(id)arg1 mergedEntities:(id)arg2 seeMoreQuery:(id)arg3 serverModuleEdge:(id)arg4 mergeState:(unsigned long long)arg5 keyword:(id)arg6 session:(id)arg7 clientLoggingUnitId:(id)arg8 clientResultsLoggingUnitIds:(id)arg9;

@end

