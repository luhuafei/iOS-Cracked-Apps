//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class NSMutableArray, NVMCheckoutInfo, UIButton, UIImageView, UILabel, UIView;

@interface NVMCheckoutDeliveryTimeCell : NVMTableViewCell
{
    CDUnknownBlockType _didClickChooseTimeAction;
    CDUnknownBlockType _didClickOntimeAction;
    UIView *_onTimeWrapperView;
    UILabel *_timeLabel;
    UILabel *_promotionLabel;
    UIView *_timeWrapperView;
    UILabel *_ontimeStatusLabel;
    UIButton *_birdIcon;
    UIButton *_ontimeIcon;
    UIButton *_ontimeQuestionIcon;
    UIImageView *_arrowAccessory;
    NVMCheckoutInfo *_info;
    NSMutableArray *_accessibleElements;
}

+ (_Bool)shouldShowPromotionTip:(id)arg1;
+ (_Bool)shouldShowOntimeWrapper:(id)arg1;
+ (_Bool)shouldShowOntimeIcon:(id)arg1;
+ (_Bool)shouldShowFengNiaoIcon:(id)arg1;
+ (double)cellHeightWithCheckoutInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) NVMCheckoutInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIImageView *arrowAccessory; // @synthesize arrowAccessory=_arrowAccessory;
@property(retain, nonatomic) UIButton *ontimeQuestionIcon; // @synthesize ontimeQuestionIcon=_ontimeQuestionIcon;
@property(retain, nonatomic) UIButton *ontimeIcon; // @synthesize ontimeIcon=_ontimeIcon;
@property(retain, nonatomic) UIButton *birdIcon; // @synthesize birdIcon=_birdIcon;
@property(retain, nonatomic) UILabel *ontimeStatusLabel; // @synthesize ontimeStatusLabel=_ontimeStatusLabel;
@property(retain, nonatomic) UIView *timeWrapperView; // @synthesize timeWrapperView=_timeWrapperView;
@property(retain, nonatomic) UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *onTimeWrapperView; // @synthesize onTimeWrapperView=_onTimeWrapperView;
@property(copy, nonatomic) CDUnknownBlockType didClickOntimeAction; // @synthesize didClickOntimeAction=_didClickOntimeAction;
@property(copy, nonatomic) CDUnknownBlockType didClickChooseTimeAction; // @synthesize didClickChooseTimeAction=_didClickChooseTimeAction;
- (void).cxx_destruct;
- (id)timeHintWithTimeString:(id)arg1;
- (id)onTimeWrapperViewHint;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)updateAccessibilityHints;
- (void)setOntimeIconColor:(id)arg1;
- (id)delivertimeFromTabbedBookingTime:(id)arg1 withTime:(id)arg2;
- (id)delivertimeDescriptionWithCheckoutInfo:(id)arg1;
- (_Bool)deliverTimeSelectable;
- (_Bool)shouldShowPromotionTip;
- (_Bool)shouldShowOntimeWrapper;
- (_Bool)shouldShowOntimeIcon;
- (_Bool)shouldShowFengNiaoIcon;
- (void)onTimeTapped;
- (void)chooseTimeTapped;
- (id)configCellWithCheckoutInfo:(id)arg1;
- (void)resetVisibility;
- (void)updateConstraints;
- (void)loadOntimeWrapperView;
- (void)loadTimeWrapperView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)loadSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

