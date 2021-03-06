//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWPageScrollDelegate-Protocol.h"
#import "GWSwipeViewDelegate-Protocol.h"
#import "SwipeViewDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBKVOController, GWIdleDispatcher, GWSwipeView, NSMutableArray, NSMutableDictionary, NSString, UIView, UIViewController;
@protocol GWPageContentDelegate, GWPageScrollViewControllerDataSource, GWPageScrollViewControllerDelegate;

@interface GWPageScrollViewController : GWBaseViewController <GWSwipeViewDelegate, SwipeViewDataSource, UIScrollViewDelegate, GWPageScrollDelegate>
{
    unsigned long long _pageType;
    unsigned long long _scrollViewStatus;
    NSMutableDictionary *_interceptorDictionary;
    unsigned long long _scrollingToIndex;
    UIView *_headerView;
    UIView *_floatingView;
    GWSwipeView *_scrollView;
    id <GWPageScrollViewControllerDelegate> _delegate;
    id <GWPageScrollViewControllerDataSource> _dataSource;
    double _topContentEdge;
    NSMutableArray *_lowLazyMethodList;
    NSMutableArray *_highLazyMethodList;
    NSMutableArray *_viewControllers;
    CDUnknownBlockType _contentOffsetDidChanged;
    CDUnknownBlockType _contentSizeDidChanged;
    CDUnknownBlockType _pageLoadCompletion;
    CDUnknownBlockType _pageFocusIndexWhenLoading;
    UIViewController<GWPageContentDelegate> *_currentController;
    FBKVOController *_kvoController;
    GWIdleDispatcher *_idleDispatcher;
}

@property(retain, nonatomic) GWIdleDispatcher *idleDispatcher; // @synthesize idleDispatcher=_idleDispatcher;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(nonatomic) __weak UIViewController<GWPageContentDelegate> *currentController; // @synthesize currentController=_currentController;
@property(copy, nonatomic) CDUnknownBlockType pageFocusIndexWhenLoading; // @synthesize pageFocusIndexWhenLoading=_pageFocusIndexWhenLoading;
@property(copy, nonatomic) CDUnknownBlockType pageLoadCompletion; // @synthesize pageLoadCompletion=_pageLoadCompletion;
@property(copy, nonatomic) CDUnknownBlockType contentSizeDidChanged; // @synthesize contentSizeDidChanged=_contentSizeDidChanged;
@property(copy, nonatomic) CDUnknownBlockType contentOffsetDidChanged; // @synthesize contentOffsetDidChanged=_contentOffsetDidChanged;
@property(readonly, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSMutableArray *highLazyMethodList; // @synthesize highLazyMethodList=_highLazyMethodList;
@property(retain, nonatomic) NSMutableArray *lowLazyMethodList; // @synthesize lowLazyMethodList=_lowLazyMethodList;
@property(nonatomic) double topContentEdge; // @synthesize topContentEdge=_topContentEdge;
@property(nonatomic) __weak id <GWPageScrollViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <GWPageScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GWSwipeView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)scrollToTopWithTabController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)swipeView:(id)arg1 scrollableTouchView:(id)arg2 translation:(struct CGPoint)arg3;
- (_Bool)swipeView:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 touchFlag:(_Bool *)arg4;
- (void)swipeViewDidEndScrollingAnimation:(id)arg1;
- (void)swipeViewDidEndDecelerating:(id)arg1;
- (void)swipeViewDidScroll:(id)arg1;
- (long long)numberOfVisibleItemsInSwipeView:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (void)pageScrollViewDidEndScrollingAnimation;
- (void)pageScrollViewDidScroll;
- (id)viewWithIndex:(unsigned long long)arg1 reuseView:(id)arg2;
- (void)clearUnUseControllers;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)controllerDidCreate:(id)arg1;
- (void)controllerWillCreate:(id)arg1;
- (void)clearContentController:(id)arg1;
- (void)clearAllViewController;
- (void)initScrollView:(id)arg1;
- (id)keyWithController:(id)arg1;
- (void)scrollViewSizeDidChanged:(id)arg1;
- (double)minScrollHeight;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)contentViewDidVisible:(id)arg1;
- (void)unuseObserverScrollView:(id)arg1 key:(id)arg2 excutedBlock:(CDUnknownBlockType)arg3;
- (void)stopIdelObserver;
- (void)runWhileIdel;
- (_Bool)isIdleDispatcherObservering;
- (_Bool)taskWillExcuteWhileIdel;
- (_Bool)lazyMethodListExcute:(id)arg1;
- (void)updatedHeaderOrFloatingViewHeightWithBlock:(CDUnknownBlockType)arg1 useAnimation:(_Bool)arg2;
- (void)updatedHeaderOrFloatingViewHeightWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 useAnimation:(_Bool)arg3;
- (void)reloadData;
- (void)clearControllerWhenReload;
- (void)setReviseOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGPoint reviseOffset;
- (void)layoutFloatingViewWithOffset:(struct CGPoint)arg1;
- (void)layoutHeaderViewWithOffset:(struct CGPoint)arg1;
- (void)resetScrollView:(id)arg1;
- (id)currentPageContentController;
- (id)pageContentControllerWithIndex:(unsigned long long)arg1;
- (id)contentControllerWithView:(id)arg1;
- (double)topHeight;
- (void)configScrollView:(id)arg1;
- (void)configHeaderFooterViewWithScrollView:(id)arg1 withContentInset:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)contentInsetWithScrollView:(id)arg1;
- (void)initCurrentScrollViewOffset;
- (void)configAllScrollView;
- (void)attachTopViewToController:(id)arg1;
- (void)attachTopViewToControllerIfNeed:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)subViewLayout;
- (void)viewDidLoad;
- (void)clearViewController;
- (_Bool)isPageScrolling;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) struct CGRect floatingReviseRect;
@property(nonatomic) unsigned long long focusIndex;
- (void)setFocusIndex:(unsigned long long)arg1 animationDuration:(double)arg2;
- (void)setFocusIndex:(unsigned long long)arg1 animation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

