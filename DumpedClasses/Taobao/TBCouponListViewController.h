//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBCouponButtonListViewDelegate.h"
#import "TBCouponDynamictItemDateSource.h"
#import "TBModelStatusDelegate.h"

@class HUDActivityView, NSArray, NSString, TBCouponButtonListView, TBCouponCustomDeleteTableView, TBCouponEditButton, TBCouponListEditUIHandle, TBCouponListEmptyHandler, TBCouponListModel, TBCouponListVCFilter, TBCouponListViewDataSource, TBCouponListViewTableViewDelegate, TBModelStatusHandler;

@interface TBCouponListViewController : TBViewController <TBModelStatusDelegate, TBCouponButtonListViewDelegate, TBCouponDynamictItemDateSource>
{
    _Bool _startShowDetail;
    _Bool _isWave;
    _Bool _isKVORegisted;
    TBCouponButtonListView *_buttonListView;
    TBCouponCustomDeleteTableView *_tableView;
    TBCouponListModel *_listModel;
    TBCouponEditButton *_editButton;
    NSString *_titleStr;
    TBModelStatusHandler *_handler;
    TBCouponListEmptyHandler *_emptyHandler;
    NSString *_jumpUrl;
    TBCouponListViewDataSource *_dateSource;
    TBCouponListViewTableViewDelegate *_tableViewDeldegate;
    NSArray *_tabArray;
    HUDActivityView *_dataLoadingView;
    NSString *_couponTypeStr;
    TBCouponListEditUIHandle *_listEdithandel;
    long long _bizType;
    long long _source;
    long long _reloadMethod;
    NSString *_url;
    TBCouponListVCFilter *_vcFilter;
    long long _orzStatusBarStyle;
    struct CGPoint _tableViewContentOffset;
}

@property long long orzStatusBarStyle; // @synthesize orzStatusBarStyle=_orzStatusBarStyle;
@property(retain, nonatomic) TBCouponListVCFilter *vcFilter; // @synthesize vcFilter=_vcFilter;
@property(nonatomic) _Bool isKVORegisted; // @synthesize isKVORegisted=_isKVORegisted;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long reloadMethod; // @synthesize reloadMethod=_reloadMethod;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) TBCouponListEditUIHandle *listEdithandel; // @synthesize listEdithandel=_listEdithandel;
@property(copy, nonatomic) NSString *couponTypeStr; // @synthesize couponTypeStr=_couponTypeStr;
@property(retain, nonatomic) HUDActivityView *dataLoadingView; // @synthesize dataLoadingView=_dataLoadingView;
@property(nonatomic) struct CGPoint tableViewContentOffset; // @synthesize tableViewContentOffset=_tableViewContentOffset;
@property(nonatomic) _Bool isWave; // @synthesize isWave=_isWave;
@property(retain, nonatomic) NSArray *tabArray; // @synthesize tabArray=_tabArray;
@property(retain, nonatomic) TBCouponListViewTableViewDelegate *tableViewDeldegate; // @synthesize tableViewDeldegate=_tableViewDeldegate;
@property(retain, nonatomic) TBCouponListViewDataSource *dateSource; // @synthesize dateSource=_dateSource;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) TBCouponListEmptyHandler *emptyHandler; // @synthesize emptyHandler=_emptyHandler;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) TBCouponEditButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) TBCouponListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) TBCouponCustomDeleteTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBCouponButtonListView *buttonListView; // @synthesize buttonListView=_buttonListView;
@property(nonatomic) _Bool startShowDetail; // @synthesize startShowDetail=_startShowDetail;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)pageUserInfo;
- (void)loginCancel;
- (void)filterClickUserTrack:(id)arg1;
- (void)editBtClick:(id)arg1;
- (void)showErrorView:(id)arg1 actionSelector:(SEL)arg2 context:(id)arg3 error:(id)arg4;
- (id)configmodel2mutableArray:(id)arg1;
- (void)openNoResultUrl;
- (void)openURL:(id)arg1 withParam:(id)arg2;
- (void)recoveTableOffset;
- (void)itemSelectWithType:(id)arg1 text:(id)arg2 url:(id)arg3;
- (id)couponTypeStrFromData:(id)arg1;
- (void)commitFailMonitor;
- (void)commitSuccessMonitor;
- (void)clearTabUI;
- (void)emptyTabSetup;
- (void)loadDataSource;
- (void)delayShowData:(id)arg1;
- (void)delayShowDataWithModel:(id)arg1;
- (void)forceRefresh;
- (void)configPullToRefresh;
- (void)setEditTitle:(id)arg1;
- (void)setEnableEdit:(_Bool)arg1;
- (void)emptyWarning;
- (void)setupTableView;
- (id)viewForItem;
- (_Bool)isFilterTypeJump:(id)arg1;
- (void)configHintOpenUrl:(id)arg1;
- (void)setUpViews;
- (void)setTbMoreItems;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hiddenListView:(_Bool)arg1;
- (void)tableViewReloadAnimationCrossDissolve;
- (void)showLoadingView:(_Bool)arg1;
- (void)getLocation;
- (void)viewDidLoad;
- (void)decideChangeApearance4Festival;
- (void)handleFestivalSwitch:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
