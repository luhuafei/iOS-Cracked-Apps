//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class BasicCoordinateModel, NSMutableArray, NSString, PromotionInformationModel;

@interface CtsHotelCardInformationModel : CTBusinessBean
{
    _Bool _isDisplayDatesOnCard;
    _Bool _isOverseasOfGS;
    int _cityId;
    int _checkInVoucherFlag;
    int _orderStatusStyle;
    long long _orderId;
    NSString *_orderStatusName;
    long long _hotelId;
    NSString *_hotelName;
    NSString *_hotelNameEN;
    NSString *_hotelPhoneNumber;
    NSString *_checkInDate;
    NSString *_checkOutDate;
    NSString *_latestCheckInTimeLabel;
    NSString *_latestCheckOutTimeLabel;
    NSString *_cityName;
    NSString *_cityTimeZone;
    long long _districtId;
    NSString *_hotelAddress;
    BasicCoordinateModel *_locationModel;
    NSString *_mapImage;
    NSString *_roomName;
    NSString *_roomCount;
    NSString *_guests;
    PromotionInformationModel *_promotionModel;
    NSMutableArray *_bookingRouteList;
    NSString *_checkInVoucherUrl;
    NSString *_hotelDetailUrl;
    NSString *_orderDetailUrl;
    NSString *_orderModifyUrl;
    NSString *_orderContinueUrl;
    NSString *_roomChosenUrl;
}

@property(nonatomic) int orderStatusStyle; // @synthesize orderStatusStyle=_orderStatusStyle;
@property(copy, nonatomic) NSString *roomChosenUrl; // @synthesize roomChosenUrl=_roomChosenUrl;
@property(copy, nonatomic) NSString *orderContinueUrl; // @synthesize orderContinueUrl=_orderContinueUrl;
@property(copy, nonatomic) NSString *orderModifyUrl; // @synthesize orderModifyUrl=_orderModifyUrl;
@property(copy, nonatomic) NSString *orderDetailUrl; // @synthesize orderDetailUrl=_orderDetailUrl;
@property(copy, nonatomic) NSString *hotelDetailUrl; // @synthesize hotelDetailUrl=_hotelDetailUrl;
@property(copy, nonatomic) NSString *checkInVoucherUrl; // @synthesize checkInVoucherUrl=_checkInVoucherUrl;
@property(nonatomic) int checkInVoucherFlag; // @synthesize checkInVoucherFlag=_checkInVoucherFlag;
@property(retain, nonatomic) NSMutableArray *bookingRouteList; // @synthesize bookingRouteList=_bookingRouteList;
@property(retain, nonatomic) PromotionInformationModel *promotionModel; // @synthesize promotionModel=_promotionModel;
@property(copy, nonatomic) NSString *guests; // @synthesize guests=_guests;
@property(copy, nonatomic) NSString *roomCount; // @synthesize roomCount=_roomCount;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *mapImage; // @synthesize mapImage=_mapImage;
@property(nonatomic) _Bool isOverseasOfGS; // @synthesize isOverseasOfGS=_isOverseasOfGS;
@property(retain, nonatomic) BasicCoordinateModel *locationModel; // @synthesize locationModel=_locationModel;
@property(copy, nonatomic) NSString *hotelAddress; // @synthesize hotelAddress=_hotelAddress;
@property(nonatomic) long long districtId; // @synthesize districtId=_districtId;
@property(copy, nonatomic) NSString *cityTimeZone; // @synthesize cityTimeZone=_cityTimeZone;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(nonatomic) _Bool isDisplayDatesOnCard; // @synthesize isDisplayDatesOnCard=_isDisplayDatesOnCard;
@property(copy, nonatomic) NSString *latestCheckOutTimeLabel; // @synthesize latestCheckOutTimeLabel=_latestCheckOutTimeLabel;
@property(copy, nonatomic) NSString *latestCheckInTimeLabel; // @synthesize latestCheckInTimeLabel=_latestCheckInTimeLabel;
@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(copy, nonatomic) NSString *hotelPhoneNumber; // @synthesize hotelPhoneNumber=_hotelPhoneNumber;
@property(copy, nonatomic) NSString *hotelNameEN; // @synthesize hotelNameEN=_hotelNameEN;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(nonatomic) long long hotelId; // @synthesize hotelId=_hotelId;
@property(copy, nonatomic) NSString *orderStatusName; // @synthesize orderStatusName=_orderStatusName;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

