//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet;
@protocol MQQPHCFilterTaskDelegate;

@interface MQQPHCFilterTask : NSObject
{
    long long _status;
    id <MQQPHCFilterTaskDelegate> _delegate;
    NSArray *_assetArray;
    NSMutableArray *_filteredAssetArray;
    NSMutableArray *_filteredItemArray;
    NSSet *_cachedCompressedAssetUUIDList;
    NSDictionary *_cachedFilteredItemList;
    NSMutableArray *_uncachedFilteredItemList;
}

@property(readonly, retain, nonatomic) NSArray *filteredItemArray;
@property(readonly, retain, nonatomic) NSArray *filteredAssetArray;
@property(readonly, retain, nonatomic) NSArray *assetArray;
@property(nonatomic) id <MQQPHCFilterTaskDelegate> delegate;
@property(readonly, nonatomic) long long status;
- (void)updateUncachedFilteredItemsToCacheAsynchronously;
- (id)supportedFileTypes;
- (id)filteredItemWithAsset:(id)arg1;
- (void)_start;
- (void)didFinish;
- (void)didFilterPhoto:(id)arg1 resultItem:(id)arg2;
- (void)cancel;
- (void)start;
- (long long)version;
- (void)dealloc;
- (id)initWithAssets:(id)arg1;

@end

