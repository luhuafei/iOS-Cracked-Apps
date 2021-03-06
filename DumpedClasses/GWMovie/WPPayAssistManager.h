//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSMutableArray, NSString, WPBankActivityModel, WPBenefitModel, WPCouponModel, WPPayChannelModel, WPPointCardModel, WPRightsModel, WPSnackModel, WPTicketModel, WPVCardModel;

@interface WPPayAssistManager : NSObject <NSCopying>
{
    _Bool _hadShowAllAvlidPayChannel;
    _Bool _hadSubmitOrderUseGWDiscount;
    _Bool _isSurplusRedBouns;
    _Bool _hadRecommend;
    WPTicketModel *_ticketModel;
    WPBenefitModel *_bonusModel;
    NSMutableArray *_platfromArray;
    NSString *_unionPayText;
    NSMutableArray *_redBonusArray;
    NSMutableArray *_presellArray;
    NSMutableArray *_voucherArray;
    NSMutableArray *_vCardArray;
    WPPointCardModel *_pointCard;
    WPCouponModel *_selectedRedBonusModel;
    NSMutableArray *_selectedPresellArray;
    NSMutableArray *_selectedVoucherArray;
    WPBenefitModel *_selectedBonusModel;
    WPBankActivityModel *_selectedPayChannelDiscountModel;
    WPPointCardModel *_selectedPointCardModel;
    WPVCardModel *_selectedVCardModel;
    NSMutableArray *_allPayChannelArray;
    WPPayChannelModel *_selectedPayChannel;
    CDUnknownBlockType _vCardTipBlock;
    NSString *_phoneNumString;
    NSDate *_invalidDate;
    WPSnackModel *_selectedSnackModel;
    WPRightsModel *_selectedRightsModel;
}

+ (id)mj_ignoredCodingPropertyNames;
@property(nonatomic) _Bool hadRecommend; // @synthesize hadRecommend=_hadRecommend;
@property(retain, nonatomic) WPRightsModel *selectedRightsModel; // @synthesize selectedRightsModel=_selectedRightsModel;
@property(retain, nonatomic) WPSnackModel *selectedSnackModel; // @synthesize selectedSnackModel=_selectedSnackModel;
@property(retain, nonatomic) NSDate *invalidDate; // @synthesize invalidDate=_invalidDate;
@property(retain, nonatomic) NSString *phoneNumString; // @synthesize phoneNumString=_phoneNumString;
@property(nonatomic) _Bool isSurplusRedBouns; // @synthesize isSurplusRedBouns=_isSurplusRedBouns;
@property(nonatomic) _Bool hadSubmitOrderUseGWDiscount; // @synthesize hadSubmitOrderUseGWDiscount=_hadSubmitOrderUseGWDiscount;
@property(nonatomic) _Bool hadShowAllAvlidPayChannel; // @synthesize hadShowAllAvlidPayChannel=_hadShowAllAvlidPayChannel;
@property(copy, nonatomic) CDUnknownBlockType vCardTipBlock; // @synthesize vCardTipBlock=_vCardTipBlock;
@property(retain, nonatomic) WPPayChannelModel *selectedPayChannel; // @synthesize selectedPayChannel=_selectedPayChannel;
@property(retain, nonatomic) NSMutableArray *allPayChannelArray; // @synthesize allPayChannelArray=_allPayChannelArray;
@property(retain, nonatomic) WPVCardModel *selectedVCardModel; // @synthesize selectedVCardModel=_selectedVCardModel;
@property(retain, nonatomic) WPPointCardModel *selectedPointCardModel; // @synthesize selectedPointCardModel=_selectedPointCardModel;
@property(retain, nonatomic) WPBankActivityModel *selectedPayChannelDiscountModel; // @synthesize selectedPayChannelDiscountModel=_selectedPayChannelDiscountModel;
@property(retain, nonatomic) WPBenefitModel *selectedBonusModel; // @synthesize selectedBonusModel=_selectedBonusModel;
@property(retain, nonatomic) NSMutableArray *selectedVoucherArray; // @synthesize selectedVoucherArray=_selectedVoucherArray;
@property(retain, nonatomic) NSMutableArray *selectedPresellArray; // @synthesize selectedPresellArray=_selectedPresellArray;
@property(retain, nonatomic) WPCouponModel *selectedRedBonusModel; // @synthesize selectedRedBonusModel=_selectedRedBonusModel;
@property(retain, nonatomic) WPPointCardModel *pointCard; // @synthesize pointCard=_pointCard;
@property(retain, nonatomic) NSMutableArray *vCardArray; // @synthesize vCardArray=_vCardArray;
@property(retain, nonatomic) NSMutableArray *voucherArray; // @synthesize voucherArray=_voucherArray;
@property(retain, nonatomic) NSMutableArray *presellArray; // @synthesize presellArray=_presellArray;
@property(retain, nonatomic) NSMutableArray *redBonusArray; // @synthesize redBonusArray=_redBonusArray;
@property(retain, nonatomic) NSString *unionPayText; // @synthesize unionPayText=_unionPayText;
@property(retain, nonatomic) NSMutableArray *platfromArray; // @synthesize platfromArray=_platfromArray;
@property(retain, nonatomic) WPBenefitModel *bonusModel; // @synthesize bonusModel=_bonusModel;
@property(retain, nonatomic) WPTicketModel *ticketModel; // @synthesize ticketModel=_ticketModel;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)numOfValidPayChannelDiscount;
- (long long)numOfValidDiscount;
- (id)canUsePayMethodString;
- (_Bool)hasQualifiedCode;
- (id)canUsePayChannelArray;
- (_Bool)haveValidDiscount;
- (_Bool)hadSelectedCardBinDiscount;
- (_Bool)hadSelectedQualifiedCode;
- (_Bool)needTipCannotChangeOrder;
- (void)resetSelectedDiscount;
- (double)discountOfQualifiedCode;
- (_Bool)shouldShowFullDiscountPriceWithNum:(long long)arg1;
- (double)discountOfBonus;
- (double)discountOfVoucher:(id)arg1;
- (double)discountOfPresell:(id)arg1;
- (double)discountOfAllVoucher;
- (double)discountOfAllPresell;
- (double)discountOfPayChannelDiscount;
- (double)discountOfPointCard;
- (double)discountOfRedBonus;
- (double)discountOfVCard;
- (double)discountOfDiscountCard;
- (double)unitDiscountOfDiscountCard;
- (double)actualPrice;
- (double)totalPrice;
- (double)rightsActualPrice;
- (double)rightsOriginalPrice;
- (double)rightsUnitPrice;
- (double)snackActualPrice;
- (double)snackOriginalPrice;
- (double)snackUnitPrice;
- (double)movieActualPrice;
- (double)movieDiscountCardPrice;
- (double)movieOriginalPrice;
- (double)movieUnitPrice;

@end

