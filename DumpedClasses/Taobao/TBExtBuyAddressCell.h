//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeAddressModel, UIImageView, UILabel;

@interface TBExtBuyAddressCell : TBExtBuyBaseCell
{
    TBTradeAddressModel *_model;
    UIImageView *_locationIcon;
    UIImageView *_colorLine;
    UILabel *_fullNameLabel;
    UILabel *_phoneNumLabel;
    UILabel *_addressLabel;
    UILabel *_agencyInfoLabel;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UILabel *agencyInfoLabel; // @synthesize agencyInfoLabel=_agencyInfoLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *phoneNumLabel; // @synthesize phoneNumLabel=_phoneNumLabel;
@property(retain, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(retain, nonatomic) UIImageView *colorLine; // @synthesize colorLine=_colorLine;
@property(retain, nonatomic) UIImageView *locationIcon; // @synthesize locationIcon=_locationIcon;
@property(retain, nonatomic) TBTradeAddressModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)cellDidSelected;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end
