//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBMagicCubeLifeCycleProtocol.h"

@class AliDetailDataEngine, AliDetailDataSouceModel, AliDetailModel, AliDetailProductModel, NSMutableDictionary, NSString, TBDetailDataSourceModel, TBDetailHomeViewControl, TBDetailNavigationBarViewControl, TBDetailPreloadItem, TBTradeDetailViewController;

@interface TBTradeDetailVCDataSource : NSObject <TBMagicCubeLifeCycleProtocol>
{
    _Bool _isSeckill;
    _Bool _needH5Jump;
    _Bool _lastStateIsError;
    _Bool _handleEventEnd;
    TBTradeDetailViewController *_detailVC;
    NSString *_queryUrl;
    NSString *_itemId;
    NSString *_juId;
    NSString *_skuId;
    NSString *_quantity;
    NSString *_divisionId;
    NSString *_isvStr;
    NSString *_weitaoUserId;
    NSMutableDictionary *_queryParams;
    AliDetailDataEngine *_dataEngine;
    TBDetailPreloadItem *_preloadItem;
    AliDetailModel *_detailModel;
    AliDetailProductModel *_productModel;
    AliDetailDataSouceModel *_dataSourceModel;
    TBDetailHomeViewControl *_detailHomeViewControl;
    TBDetailNavigationBarViewControl *_navigationViewControl;
    TBDetailDataSourceModel *_sourceModel;
}

@property(retain, nonatomic) TBDetailDataSourceModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(retain, nonatomic) TBDetailNavigationBarViewControl *navigationViewControl; // @synthesize navigationViewControl=_navigationViewControl;
@property(retain, nonatomic) TBDetailHomeViewControl *detailHomeViewControl; // @synthesize detailHomeViewControl=_detailHomeViewControl;
@property(nonatomic) __weak AliDetailDataSouceModel *dataSourceModel; // @synthesize dataSourceModel=_dataSourceModel;
@property(retain, nonatomic) AliDetailProductModel *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) TBDetailPreloadItem *preloadItem; // @synthesize preloadItem=_preloadItem;
@property(retain, nonatomic) AliDetailDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) NSMutableDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(retain, nonatomic) NSString *weitaoUserId; // @synthesize weitaoUserId=_weitaoUserId;
@property(retain, nonatomic) NSString *isvStr; // @synthesize isvStr=_isvStr;
@property(retain, nonatomic) NSString *divisionId; // @synthesize divisionId=_divisionId;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *juId; // @synthesize juId=_juId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *queryUrl; // @synthesize queryUrl=_queryUrl;
@property(nonatomic) _Bool handleEventEnd; // @synthesize handleEventEnd=_handleEventEnd;
@property(nonatomic) _Bool lastStateIsError; // @synthesize lastStateIsError=_lastStateIsError;
@property(nonatomic) _Bool needH5Jump; // @synthesize needH5Jump=_needH5Jump;
@property(nonatomic) _Bool isSeckill; // @synthesize isSeckill=_isSeckill;
@property(nonatomic) __weak TBTradeDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
- (void).cxx_destruct;
- (void)loadDetailInfoHandler:(id)arg1 error:(id)arg2;
- (_Bool)checkIfSourceModelIsValid;
- (void)setDetailBasicInfoSource;
- (void)resetDatasource:(id)arg1;
- (void)loadDetailInfoSuccessHandler:(id)arg1;
- (void)loadDetailInfoErrorHandler:(id)arg1;
- (void)loadDetailInfo;
- (void)createInitialPirce:(id)arg1;
- (void)initializeDetailModelFromURL:(_Bool)arg1;
- (void)preloadWithQuery:(id)arg1;
- (_Bool)needPreload;
- (void)parseQuery:(id)arg1;
- (void)getCurrentLocationFromSDK;
- (void)addCountryCode;
- (void)addLocationInfo;
- (id)getCurrentPlatform;
- (id)detailBuilder;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad:(_Bool)arg1;
- (id)getComponentView;
- (void)bindData:(id)arg1;
- (void)setUpCartCallback;
- (_Bool)needDegradedDetail;
- (void)initFromQueryParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

