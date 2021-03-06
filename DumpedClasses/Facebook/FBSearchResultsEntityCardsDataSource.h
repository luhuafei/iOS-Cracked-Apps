//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBEntityCardsDataSource-Protocol.h"
#import "FBSearchResultsDownloaderDelegate-Protocol.h"

@class FBEntityFetcher, FBGraphSearchResultsDownloader, FBSearchComponentModel, FBUserSession, NSArray, NSMutableDictionary, NSString;

@interface FBSearchResultsEntityCardsDataSource : NSObject <FBSearchResultsDownloaderDelegate, FBEntityCardsDataSource>
{
    FBUserSession *_session;
    NSMutableDictionary *_modelsMap;
    NSArray *_initialModels;
    NSArray *_initialEntities;
    FBSearchComponentModel *_selectedModel;
    struct _NSRange _loadedInitialEntityRange;
    _Bool _isRequestSent;
    FBEntityFetcher *_fetcher;
    FBGraphSearchResultsDownloader *_downloader;
    CDUnknownBlockType _loadBlock;
    _Bool _hasHeadLoaded;
    unsigned long long _totalEntities;
}

- (void).cxx_destruct;
- (unsigned long long)_initialEntityIndex;
- (unsigned long long)_loadedIntitialEntitiesCount;
- (unsigned long long)_loadedInitialEntitiesLeftIndex;
- (unsigned long long)_loadedInitialEntitiesRightIndex;
- (void)_handleRightScrollDirectionWithPageSize:(unsigned long long)arg1 contextItemCount:(unsigned long long)arg2 loadBlock:(CDUnknownBlockType)arg3;
- (void)_handleLeftScrollDirectionWithPageSize:(unsigned long long)arg1 contextItemCount:(unsigned long long)arg2 loadBlock:(CDUnknownBlockType)arg3;
- (void)_fetchEntityResultsWithEntities:(id)arg1 contextItemCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (void)downloader:(id)arg1 didLoadConnection:(id)arg2 requestStatus:(id)arg3 isCachedResponse:(_Bool)arg4 isHeadRequest:(_Bool)arg5;
- (void)entityCardsViewController:(id)arg1 loadEntitiesInScrollDirection:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 contextItemCount:(unsigned long long)arg4 loadBlock:(CDUnknownBlockType)arg5;
- (_Bool)entityCardsViewController:(id)arg1 canLoadEntitiesInScrollDirection:(unsigned long long)arg2 pageSize:(unsigned long long *)arg3;
- (void)updatePageSize:(unsigned long long *)arg1 forScrollDirection:(unsigned long long)arg2;
- (void)entityCardsViewController:(id)arg1 loadInitialEntitiesWithContextItems:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 batchLoadBlock:(CDUnknownBlockType)arg4;
- (id)initialEntityIDsForPageSize:(unsigned long long *)arg1;
- (id)initialEntitiesForPageSize:(unsigned long long *)arg1;
@property(copy, nonatomic) NSString *displaySurfaceSourceId;
@property(copy, nonatomic) NSString *displaySurface;
@property(readonly, nonatomic) unsigned long long initialEntityIndex;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithSession:(id)arg1 initialModels:(id)arg2 selectedModel:(id)arg3 serpConfig:(id)arg4 scenePath:(id)arg5 startCursor:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

