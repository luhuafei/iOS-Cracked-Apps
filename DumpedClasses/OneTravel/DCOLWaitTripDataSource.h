//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCOrderlistDataSourceCom.h"

@class DCOLWaitTripBusinessModel, DCRouteOrderList, NSArray;

@interface DCOLWaitTripDataSource : DCOrderlistDataSourceCom
{
    _Bool _isDataEmpty;
    DCOLWaitTripBusinessModel *_businessModel;
    DCRouteOrderList *_apiModel;
    NSArray *_viewModels;
}

@property(readonly, nonatomic) _Bool isDataEmpty; // @synthesize isDataEmpty=_isDataEmpty;
@property(copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(copy, nonatomic) DCRouteOrderList *apiModel; // @synthesize apiModel=_apiModel;
@property(copy, nonatomic) DCOLWaitTripBusinessModel *businessModel; // @synthesize businessModel=_businessModel;
- (void).cxx_destruct;
- (int)pageType;
- (id)has_inviteStr;
- (id)filterBarTitle;
- (id)filterTagList;
- (id)filterSortsList;
- (_Bool)shouldShowSortFilter;
- (void)gotoPackageDetail:(id)arg1;
- (void)addActionsToPkgCell:(id)arg1 model:(id)arg2;
- (void)OMGDidClickIMButtonWithModel:(id)arg1;
- (void)OMGDidClickAvatarWithModel:(id)arg1;
- (void)OMGClickCellShowDetailWithModel:(id)arg1 clickFrom:(id)arg2;
- (id)pickerParentView;
- (void)IMButtonAction:(id)arg1 im_srt:(id)arg2;
- (void)checkIMForlist:(id)arg1;
- (void)routeToOrderDetailWithCellViewModel:(id)arg1;
- (void)routeToAcceptInvite:(id)arg1;
- (void)routeToDetailWithModel:(id)arg1;
- (void)routeToUserPageWithModel:(id)arg1;
- (void)tappedFooterWithCellModel:(id)arg1;
- (id)cellWithMaker:(id)arg1 indexPath:(id)arg2;
- (double)cellHeightWithIndexPath:(id)arg1;
- (Class)cellClass;
- (id)sectionModel;
- (_Bool)hasStationMode;
- (_Bool)isExpire;
- (long long)cellCount;
- (void)cleanData;
- (_Bool)hasMoreData;
- (id)requestPathName;
- (Class)requestBaseModelClass;
- (void)setupViewModels;
- (void)setupDataList;
- (void)setupLoadMoreWithApiModel:(id)arg1;
- (void)setupRefreshWithApiModel:(id)arg1;
- (void)setupWithModel:(id)arg1 isLoadMore:(_Bool)arg2;
- (id)offset;
- (id)requestParamsWithIsLoadMore:(_Bool)arg1;

@end

