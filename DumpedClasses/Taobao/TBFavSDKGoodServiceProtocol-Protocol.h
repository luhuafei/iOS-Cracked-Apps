//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol TBFavSDKGoodServiceProtocol <NSObject>
- (void)removeFavoriteWithItemId:(NSString *)arg1;
- (void)addFavoriteWithItemId:(NSString *)arg1;
- (void)isFavoriteItem:(NSString *)arg1 completion:(void (^)(_Bool, TBFavSDKError *))arg2;
- (void)addItemId:(NSString *)arg1 completion:(void (^)(_Bool, TBFavSDKError *))arg2;
- (void)deleteItemIds:(NSArray *)arg1 completion:(void (^)(_Bool, TBFavSDKError *))arg2;
- (void)deleteItemId:(NSString *)arg1 completion:(void (^)(_Bool, TBFavSDKError *))arg2;
@end

