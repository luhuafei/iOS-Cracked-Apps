//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPHomeComposedEntriesCollectionViewCellLargeEntryView, NSArray;

@interface ESPHomeComposedEntriesCollectionViewCell : UICollectionViewCell
{
    ESPHomeComposedEntriesCollectionViewCellLargeEntryView *_largeEntryView;
    NSArray *_mediumEntryViews;
    NSArray *_smallEntryViews;
}

+ (struct CGSize)sizeWithEntryCount:(unsigned long long)arg1;
@property(copy, nonatomic) NSArray *smallEntryViews; // @synthesize smallEntryViews=_smallEntryViews;
@property(copy, nonatomic) NSArray *mediumEntryViews; // @synthesize mediumEntryViews=_mediumEntryViews;
@property(retain, nonatomic) ESPHomeComposedEntriesCollectionViewCellLargeEntryView *largeEntryView; // @synthesize largeEntryView=_largeEntryView;
- (void).cxx_destruct;
- (void)_layoutViewsWithEntryCount:(long long)arg1;
- (void)_updateTrackIndexsWithEntryCount:(long long)arg1;
- (void)_showOrHideViewsWithEntryCount:(long long)arg1;
- (void)_updateSmallViewsWithEntries:(id)arg1;
- (void)_updateMediumViewsWithEntries:(id)arg1;
- (void)_updateLargeViewWithEntry:(id)arg1;
- (void)_loadSmallEntryViewsIfNeeded;
- (void)_loadMediumEntryViewsIfNeeded;
- (void)_loadLargeEntryViewIfNeeded;
- (void)updateWithEntries:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

