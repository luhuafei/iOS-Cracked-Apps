//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QQAsset;

@protocol QZPhotoGifRecommendCellDelegate <NSObject>

@optional
- (void)didSelectGifView:(NSArray *)arg1 gifFromType:(long long)arg2;
- (void)transformToContinuousGifSuccess:(QQAsset *)arg1 images:(NSArray *)arg2;
@end

