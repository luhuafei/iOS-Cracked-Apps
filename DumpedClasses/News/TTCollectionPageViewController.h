//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, SSThemedView, UICollectionView;

@interface TTCollectionPageViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    unsigned long long _tabType;
    double _topInset;
    double _bottomInset;
    NSArray *_pageCategories;
    long long _currentPage;
    id <TTCollectionPageViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    long long _targetIndex;
    SSThemedView *_backgroundView;
    long long _dragBeginPage;
    NSString *_cellClassString;
}

@property(copy, nonatomic) NSString *cellClassString; // @synthesize cellClassString=_cellClassString;
@property(nonatomic) long long dragBeginPage; // @synthesize dragBeginPage=_dragBeginPage;
@property(retain, nonatomic) SSThemedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long targetIndex; // @synthesize targetIndex=_targetIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <TTCollectionPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSArray *pageCategories; // @synthesize pageCategories=_pageCategories;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (void).cxx_destruct;
- (void)leaveCategory;
- (void)enterCategory;
- (void)setCurrentPage:(long long)arg1 scrollToPositionCenteredAnimated:(_Bool)arg2;
- (id)pageCellAtIndex:(long long)arg1;
- (id)currentCollectionPageCell;
- (void)reloadPages;
- (void)reloadCurrentPage;
- (double)scrollPercent:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTopInset:(double)arg1 bottomInset:(double)arg2 fromTab:(unsigned long long)arg3 cellClass:(id)arg4;
- (id)initWithTabType:(unsigned long long)arg1 cellClass:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
