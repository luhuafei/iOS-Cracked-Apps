//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSearchDelegateWaterfallLayout.h"
#import "TBSearchExpandOrContractScrollViewDelegate.h"
#import "TBXSearchPromotionBannerComponentDelegate.h"
#import "UICollectionViewDataSource.h"

@class NSMutableArray, NSString, TBScrollViewCompensator, TBSearchRelatedRecommendViewModel, TBSearchWaterfallLayout, TBXSearchCellFactory, TBXSearchPromotionBannerComponent, TBXSearchService, UICollectionView;

@interface TBXSearchCollectionViewComponent : NSObject <TBSearchDelegateWaterfallLayout, UICollectionViewDataSource, TBSearchExpandOrContractScrollViewDelegate, TBXSearchPromotionBannerComponentDelegate>
{
    _Bool _loadMoreFailed;
    _Bool _isLoadingMore;
    _Bool _isIOS7;
    int _layoutStyle;
    TBXSearchService *_itemSearchService;
    UICollectionView *_collectionView;
    id <TBXSearchCollectionViewComponentDelegate> _delegate;
    id <TBSearchBaseCellContainer> _container;
    TBXSearchPromotionBannerComponent *_promotionBannerComponent;
    TBSearchWaterfallLayout *_collectionViewLayout;
    TBScrollViewCompensator *_expandOrContractScrollViewDelegateObject;
    TBXSearchCellFactory *_cellFactory;
    NSObject *_itemHeader;
    NSMutableArray *_itemList;
    NSObject *_itemFooter;
    TBSearchRelatedRecommendViewModel *_relatedRecommendViewMoel;
}

@property(retain, nonatomic) TBSearchRelatedRecommendViewModel *relatedRecommendViewMoel; // @synthesize relatedRecommendViewMoel=_relatedRecommendViewMoel;
@property(retain, nonatomic) NSObject *itemFooter; // @synthesize itemFooter=_itemFooter;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSObject *itemHeader; // @synthesize itemHeader=_itemHeader;
@property(nonatomic) _Bool isIOS7; // @synthesize isIOS7=_isIOS7;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool loadMoreFailed; // @synthesize loadMoreFailed=_loadMoreFailed;
@property(retain, nonatomic) TBXSearchCellFactory *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(retain, nonatomic) TBScrollViewCompensator *expandOrContractScrollViewDelegateObject; // @synthesize expandOrContractScrollViewDelegateObject=_expandOrContractScrollViewDelegateObject;
@property(retain, nonatomic) TBSearchWaterfallLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) TBXSearchPromotionBannerComponent *promotionBannerComponent; // @synthesize promotionBannerComponent=_promotionBannerComponent;
@property(nonatomic) __weak id <TBSearchBaseCellContainer> container; // @synthesize container=_container;
@property(nonatomic) __weak id <TBXSearchCollectionViewComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TBXSearchService *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
- (void).cxx_destruct;
- (void)closePromotionBanner;
- (_Bool)checkPromotionBannerShow;
- (void)scrollToTop;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewShouldContact:(id)arg1;
- (void)scrollViewShouldExpand:(id)arg1;
- (void)disableCollectionViewAccessibility;
- (void)loadMoreDataFailed:(id)arg1;
- (void)moreDataLoaded;
- (void)loadMoreData;
- (void)loadMoreDataFromCell:(id)arg1;
- (_Bool)enablePreLoad;
- (void)preLoadMoreDataAtIndex:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)hasMore;
- (void)reloadCollectionView;
- (void)reloadData;
- (void)turnStyle:(int)arg1;
- (void)clearView;
- (void)setData;
- (void)clearData;
- (void)setCollectionViewLayoutProperty:(int)arg1;
- (void)disableScroll;
- (void)initCollectionView:(struct CGRect)arg1;
- (void)initCollectionView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSearchService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

