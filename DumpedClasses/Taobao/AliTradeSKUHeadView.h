//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AliDetailMultimediaBrowserDelegate.h"

@class AliDetailModel, AliDetailMultimediaBrowserViewControl, AliDetailMultimediaBrowserViewController, AliTradeSkuSizeChartSelectControl, NSMutableArray, NSString, UIButton, UIImageView, UILabel;

@interface AliTradeSKUHeadView : UIView <AliDetailMultimediaBrowserDelegate>
{
    _Bool isYuShou;
    _Bool hasSKUStore;
    _Bool isBig;
    _Bool _hidePrice;
    UIButton *_headerImageBtn;
    UIImageView *_headImgView;
    UIButton *_closeBtn;
    UIButton *_entireBtn;
    UILabel *_mainPriceLabel;
    UILabel *_subPriceLabel;
    UILabel *_descriptionLabel;
    UILabel *_storeCountLabel;
    UILabel *_headerSelectSKUStatusLabel;
    UIView *_contentView;
    UIView *_divisionLine;
    NSString *_eventToken;
    NSString *_highLevelPrice;
    AliDetailModel *_detailModel;
    UIImageView *_headMaskView;
    NSMutableArray *_skuImageURLs;
    NSMutableArray *_skuPicNames;
    AliTradeSkuSizeChartSelectControl *_sizeChartControl;
    AliDetailMultimediaBrowserViewController *_bigBrowserVC;
    AliDetailMultimediaBrowserViewControl *_browserViewModel;
    UIView *_rootView;
}

@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewControl *browserViewModel; // @synthesize browserViewModel=_browserViewModel;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewController *bigBrowserVC; // @synthesize bigBrowserVC=_bigBrowserVC;
@property(retain, nonatomic) AliTradeSkuSizeChartSelectControl *sizeChartControl; // @synthesize sizeChartControl=_sizeChartControl;
@property(retain, nonatomic) NSMutableArray *skuPicNames; // @synthesize skuPicNames=_skuPicNames;
@property(retain, nonatomic) NSMutableArray *skuImageURLs; // @synthesize skuImageURLs=_skuImageURLs;
@property(retain, nonatomic) UIImageView *headMaskView; // @synthesize headMaskView=_headMaskView;
@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) NSString *highLevelPrice; // @synthesize highLevelPrice=_highLevelPrice;
@property(nonatomic) _Bool hidePrice; // @synthesize hidePrice=_hidePrice;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) UIView *divisionLine; // @synthesize divisionLine=_divisionLine;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *headerSelectSKUStatusLabel; // @synthesize headerSelectSKUStatusLabel=_headerSelectSKUStatusLabel;
@property(retain, nonatomic) UILabel *storeCountLabel; // @synthesize storeCountLabel=_storeCountLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subPriceLabel; // @synthesize subPriceLabel=_subPriceLabel;
@property(retain, nonatomic) UILabel *mainPriceLabel; // @synthesize mainPriceLabel=_mainPriceLabel;
@property(retain, nonatomic) UIButton *entireBtn; // @synthesize entireBtn=_entireBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIButton *headerImageBtn; // @synthesize headerImageBtn=_headerImageBtn;
- (void).cxx_destruct;
- (id)photoBrowser:(id)arg1 captionForIndex:(unsigned long long)arg2;
- (void)photoBrowserWillDismiss:(id)arg1 imageInfo:(id)arg2;
- (id)getMaskImageView;
- (void)setupBigPhotoBrowser;
- (void)headerImageBtnClick:(id)arg1;
- (_Bool)showSizeChartEntry:(id)arg1;
- (long long)currentChooseIndex;
- (void)shrinkHeader;
- (void)magnifyHeader;
- (void)configSkuImageInfo;
- (void)setHeaderImageStyle:(struct CGSize)arg1;
- (void)setSKUStatusText:(_Bool)arg1;
- (void)setSkuStoreCount:(id)arg1;
- (void)setSkuSizeChart:(id)arg1;
- (void)setSkuPrice:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)initHeaderViewData:(id)arg1;
- (void)updateHeaderViewWithSku:(id)arg1 SKUInfo:(id)arg2;
- (void)adjustSkuHeaderLabelPos;
- (double)caculateSkuStatusHeight:(double)arg1 startX:(double)arg2;
- (double)caclulatePriceHeight:(double)arg1 startX:(double)arg2;
- (double)getTipAreaHeight:(id)arg1;
- (void)zoomSkuHead:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

