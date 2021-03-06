//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class AllianceEntityModel, BookingCheckInformationModel, HotelLimitInformationModel, HotelOriOrderInformationModel, HotelUserInfoModel, InvoiceDetailInformationOfReadModel, NSMutableArray, NSString;

@interface HotelBookCheckRequest : CTBusinessBean
{
    _Bool _isHourRoom;
    _Bool _isCouponRefund;
    _Bool _isPreload;
    int _serviceVersion;
    int _hotelID;
    int _roomID;
    int _checkAVID;
    int _roomCount;
    int _payEType;
    int _subPayType;
    int _shadowID;
    int _controlBitMap;
    int _wolfDiscount;
    NSString *_ratePlanID;
    NSString *_traceRemark;
    NSString *_checkInDate;
    NSString *_checkOutDate;
    NSString *_supplierCtx;
    NSString *_aBDictionary;
    NSMutableArray *_roomPriceList;
    HotelLimitInformationModel *_hotelLimitInfoModel;
    NSString *_originalOrderID;
    HotelOriOrderInformationModel *_originalOrderInfoModel;
    AllianceEntityModel *_allianceInfoModel;
    InvoiceDetailInformationOfReadModel *_invoiceModel;
    HotelUserInfoModel *_hotelUserInfoModel;
    BookingCheckInformationModel *_checkInfoModel;
    long long _rewardId;
}

@property(nonatomic) int wolfDiscount; // @synthesize wolfDiscount=_wolfDiscount;
@property(nonatomic) long long rewardId; // @synthesize rewardId=_rewardId;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(retain, nonatomic) BookingCheckInformationModel *checkInfoModel; // @synthesize checkInfoModel=_checkInfoModel;
@property(retain, nonatomic) HotelUserInfoModel *hotelUserInfoModel; // @synthesize hotelUserInfoModel=_hotelUserInfoModel;
@property(retain, nonatomic) InvoiceDetailInformationOfReadModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(retain, nonatomic) AllianceEntityModel *allianceInfoModel; // @synthesize allianceInfoModel=_allianceInfoModel;
@property(nonatomic) int controlBitMap; // @synthesize controlBitMap=_controlBitMap;
@property(nonatomic) _Bool isCouponRefund; // @synthesize isCouponRefund=_isCouponRefund;
@property(retain, nonatomic) HotelOriOrderInformationModel *originalOrderInfoModel; // @synthesize originalOrderInfoModel=_originalOrderInfoModel;
@property(copy, nonatomic) NSString *originalOrderID; // @synthesize originalOrderID=_originalOrderID;
@property(retain, nonatomic) HotelLimitInformationModel *hotelLimitInfoModel; // @synthesize hotelLimitInfoModel=_hotelLimitInfoModel;
@property(retain, nonatomic) NSMutableArray *roomPriceList; // @synthesize roomPriceList=_roomPriceList;
@property(copy, nonatomic) NSString *aBDictionary; // @synthesize aBDictionary=_aBDictionary;
@property(copy, nonatomic) NSString *supplierCtx; // @synthesize supplierCtx=_supplierCtx;
@property(nonatomic) int shadowID; // @synthesize shadowID=_shadowID;
@property(nonatomic) int subPayType; // @synthesize subPayType=_subPayType;
@property(nonatomic) int payEType; // @synthesize payEType=_payEType;
@property(nonatomic) int roomCount; // @synthesize roomCount=_roomCount;
@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) _Bool isHourRoom; // @synthesize isHourRoom=_isHourRoom;
@property(copy, nonatomic) NSString *traceRemark; // @synthesize traceRemark=_traceRemark;
@property(copy, nonatomic) NSString *ratePlanID; // @synthesize ratePlanID=_ratePlanID;
@property(nonatomic) int checkAVID; // @synthesize checkAVID=_checkAVID;
@property(nonatomic) int roomID; // @synthesize roomID=_roomID;
@property(nonatomic) int hotelID; // @synthesize hotelID=_hotelID;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

