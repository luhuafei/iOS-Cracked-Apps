//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMCollectionViewCell.h"

@class ESPEntryFood, NVMAsyncDisplayLabel, UIImageView, UITextView;

@interface ESPFoodTemplateCollectionViewCell : NVMCollectionViewCell
{
    UIImageView *_foodImageView;
    NVMAsyncDisplayLabel *_foodNameLabel;
    UITextView *_priceTextView;
    UIImageView *_discountImageView;
    NVMAsyncDisplayLabel *_discountLabel;
    ESPEntryFood *_food;
}

+ (double)cellHeight;
@property(retain, nonatomic) ESPEntryFood *food; // @synthesize food=_food;
@property(retain, nonatomic) NVMAsyncDisplayLabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UIImageView *discountImageView; // @synthesize discountImageView=_discountImageView;
@property(retain, nonatomic) UITextView *priceTextView; // @synthesize priceTextView=_priceTextView;
@property(retain, nonatomic) NVMAsyncDisplayLabel *foodNameLabel; // @synthesize foodNameLabel=_foodNameLabel;
@property(retain, nonatomic) UIImageView *foodImageView; // @synthesize foodImageView=_foodImageView;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateWithFood:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

