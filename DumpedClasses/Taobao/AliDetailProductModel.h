//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class AliDetailModel, AliDetailProductLayoutModel, NSArray<AliDetailActionModel>, NSArray<AliDetailComponentModel>, NSDictionary, NSMutableArray<AliDetailApiUnit>, NSString;

@interface AliDetailProductModel : AliDetailComponentModel
{
    _Bool _isTemplateDataSuccess;
    _Bool _mainDataSourceChanged;
    NSString *_itemId;
    NSDictionary *_productDataPool;
    NSString *_moduleUrl;
    NSArray<AliDetailComponentModel> *_productDataSource;
    NSArray<AliDetailComponentModel> *_seeMoreDataSource;
    NSMutableArray<AliDetailApiUnit> *_requestApis;
    NSArray<AliDetailActionModel> *_pageActions;
    AliDetailProductLayoutModel *_originalLayoutModel;
    AliDetailModel *_detailModel;
}

@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) AliDetailProductLayoutModel *originalLayoutModel; // @synthesize originalLayoutModel=_originalLayoutModel;
@property(retain, nonatomic) NSArray<AliDetailActionModel> *pageActions; // @synthesize pageActions=_pageActions;
@property(retain, nonatomic) NSMutableArray<AliDetailApiUnit> *requestApis; // @synthesize requestApis=_requestApis;
@property(retain, nonatomic) NSArray<AliDetailComponentModel> *seeMoreDataSource; // @synthesize seeMoreDataSource=_seeMoreDataSource;
@property(retain, nonatomic) NSArray<AliDetailComponentModel> *productDataSource; // @synthesize productDataSource=_productDataSource;
@property(retain, nonatomic) NSString *moduleUrl; // @synthesize moduleUrl=_moduleUrl;
@property(retain, nonatomic) NSDictionary *productDataPool; // @synthesize productDataPool=_productDataPool;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) _Bool mainDataSourceChanged; // @synthesize mainDataSourceChanged=_mainDataSourceChanged;
@property(nonatomic) _Bool isTemplateDataSuccess; // @synthesize isTemplateDataSuccess=_isTemplateDataSuccess;
- (void).cxx_destruct;
- (id)actions;
- (id)createDivisionModel:(id)arg1;
- (id)getDivision9Model;
- (void)setupProductMainDataSource:(id)arg1;
- (void)mergeDynamicDataToMainDataSource:(id)arg1;
- (void)parseDataFromDetailModel:(id)arg1 originalLayoutModel:(id)arg2;
- (id)initWithDetailModel:(id)arg1 layoutModel:(id)arg2;

@end

