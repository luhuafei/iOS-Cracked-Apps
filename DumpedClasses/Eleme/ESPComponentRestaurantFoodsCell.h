//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPComponentFoodsCollectionView, ESPComponentPromotionView, ESPComponentRestaurantWithFoodItems, ESPRestaurantLogoView, NVMAsyncDisplayLabel, NVMSeparatorView, UIImageView, UIView;

@interface ESPComponentRestaurantFoodsCell : UICollectionViewCell
{
    _Bool _isTopShop;
    ESPRestaurantLogoView *_logoView;
    NVMAsyncDisplayLabel *_nameLabel;
    NVMAsyncDisplayLabel *_ratingLabel;
    ESPComponentPromotionView *_promotionView;
    ESPComponentFoodsCollectionView *_foodView;
    NVMSeparatorView *_separatorView;
    UIImageView *_recommentImageView;
    NVMAsyncDisplayLabel *_recommendLabel;
    UIView *_cellSeparatorView;
    ESPComponentRestaurantWithFoodItems *_item;
}

+ (double)heightWithViewModel:(id)arg1;
@property(retain, nonatomic) ESPComponentRestaurantWithFoodItems *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *cellSeparatorView; // @synthesize cellSeparatorView=_cellSeparatorView;
@property(retain, nonatomic) NVMAsyncDisplayLabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIImageView *recommentImageView; // @synthesize recommentImageView=_recommentImageView;
@property(retain, nonatomic) NVMSeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) ESPComponentFoodsCollectionView *foodView; // @synthesize foodView=_foodView;
@property(retain, nonatomic) ESPComponentPromotionView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) NVMAsyncDisplayLabel *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(retain, nonatomic) NVMAsyncDisplayLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) ESPRestaurantLogoView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) _Bool isTopShop; // @synthesize isTopShop=_isTopShop;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

