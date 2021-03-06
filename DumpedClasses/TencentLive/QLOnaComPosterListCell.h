//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"
#import "UIScrollViewDelegate.h"

@class GMGridView, NSMutableArray, NSString, QLHTMLFontLabel, QLJCEONAPosterList;

@interface QLOnaComPosterListCell : QLBaseTabelViewCell <GMGridViewDataSource, GMGridViewActionDelegate, UIScrollViewDelegate>
{
    GMGridView *_gridView;
    QLJCEONAPosterList *_posterList;
    QLHTMLFontLabel *_titleLabel;
    NSMutableArray *_aryReportCellIndexes;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (int)thumbStyleWithUIType:(int)arg1;
+ (struct CGSize)posterSizeWithUiType:(int)arg1;
@property(retain, nonatomic) NSMutableArray *aryReportCellIndexes; // @synthesize aryReportCellIndexes=_aryReportCellIndexes;
@property(retain, nonatomic) QLJCEONAPosterList *posterList; // @synthesize posterList=_posterList;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldReportHorizontalExpourse;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isCellNewlyExpourse:(id)arg1;
- (void)reportCell:(id)arg1;
- (void)reportCellItems:(id)arg1;
- (void)reportShowUp;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (id)horizontalGridView;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

