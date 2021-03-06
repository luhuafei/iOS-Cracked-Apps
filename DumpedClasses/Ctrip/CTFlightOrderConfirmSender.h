//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@class NSMutableArray, NSString;

@interface CTFlightOrderConfirmSender : CTSender
{
    NSMutableArray *flightCProductList;
    NSString *flightSegmentInfoStr;
    NSMutableArray *flightSpecialPackageList;
    NSString *flightDepartAirport;
    NSString *lastPolicyID;
    NSMutableArray *availableXCouponList;
}

+ (id)getOrederConfirmFlightDeliveryInformationModelToJsonWithCacheBean:(id)arg1;
+ (id)getFlightInvoiceInformationModelToJsonWithCacheBean:(id)arg1;
+ (id)getflightPayOrderInfoModelToJsonWithCacheBean:(id)arg1 totalPrice:(id)arg2;
+ (id)flightModelToJsonCreatPackageListWithCacheBean:(id)arg1;
+ (id)flightModeToJsonCreatValetDriverInforListWith:(id)arg1;
+ (id)flightModelToJSonCreateSegmentList:(id)arg1;
+ (id)flightModelToJsonCreatePromotionList:(id)arg1;
+ (id)creatFlightOrderModifyModelToJsonCacheBean:(id)arg1 totalPrice:(id)arg2 uuid:(id)arg3 messageToken:(id)arg4;
+ (id)getInstance;
- (void).cxx_destruct;
- (id)genRequestWithDic:(id)arg1;
- (id)sendFlightGetUseCarPriceListWithDic:(id)arg1 withCacheBean:(id)arg2;
- (id)sendFlightUseCarAddressSearchWithDic:(id)arg1 withCacheBean:(id)arg2;
- (_Bool)checkHasSelectedUseCarInfo;
- (void)cleanUpFlightUserCarHistory;
- (void)setViewModelWithNotelist:(id)arg1 withCacheBean:(id)arg2;
- (void)saveHistoryDeliveryOpenInfo:(id)arg1;
- (void)readHistoryDeliveryOpenInfo:(id)arg1 xproductSelected:(_Bool)arg2;
- (int)getUseBuyCouponCount;
- (void)getAvailableXcouponList:(id)arg1;
- (_Bool)checkThisCoupon:(id)arg1 couponCode:(id)arg2;
- (_Bool)checkReplaceCouponCodeInCouponCodeList;
- (_Bool)checkCabinForUseCarPrice:(id)arg1;
- (void)readHistoryUsecarBuyInfomation:(id)arg1;
- (void)saveHistoryUsecarBuyInfomation:(id)arg1;
- (void)setSendAddressModel:(id)arg1 PostAddressModel:(id)arg2;
- (id)getFlightDeliveryInformationModelWithCacheBean:(id)arg1;
- (id)getFlightInvoiceInformationModelWithCacheBean:(id)arg1;
- (id)getflightPayOrderInfoModelWithCacheBean:(id)arg1 totalPrice:(id)arg2;
- (id)creatPackageListWithCacheBean:(id)arg1;
- (id)creatValetDriverInforListWith:(id)arg1;
- (id)createSegmentList:(id)arg1;
- (id)createPromotionList:(id)arg1;
- (void)creatFlightOrderModifyRequest:(id)arg1 CacheBean:(id)arg2 totalPrice:(id)arg3 uuid:(id)arg4 messageToken:(id)arg5;
- (id)createSenderCallBack4CreateOrder:(id)arg1;
- (void)cleanHistoryUseCarContactList;
- (void)saveHistoryUseCarContactModel:(id)arg1;
- (id)loadHistoryUseCarContactList;
- (void)cleanHistoryUseCarAddressList;
- (void)saveHistoryUseCarAddressModel:(id)arg1;
- (id)loadHistoryUseCarAddressList;
- (id)sendCheckAdditionalCoupon:(id)arg1 withCouponModel:(id)arg2 index:(int)arg3 uuid:(id)arg4;
- (id)sendGetAdditionalCouponListSearch:(id)arg1 uuid:(id)arg2;
- (id)modifyFlightOrderWithCacheBean:(id)arg1 orderTotalPrice:(id)arg2 uuid:(id)arg3 messageToken:(id)arg4;
- (id)getFlightCarInfoModelWithDetailViewModel:(id)arg1 flightSegmentViewModel:(id)arg2 tripIndex:(int)arg3 departCityModel:(id)arg4 arriveCityModel:(id)arg5;
- (id)getInputSearchInfoWithSelectedAddressModel:(id)arg1;
- (id)getUseCarPassengerListWithOrderPersonList:(id)arg1;
- (id)getFlightStytleBAreasetingListWithXproductList:(id)arg1;
- (id)getFlightConfirmXproductListWithResponse:(id)arg1 cacheBean:(id)arg2 departCity:(id)arg3 arriveCity:(id)arg4;
- (void)setOrderConfirmCachenBeanWith:(id)arg1 response:(id)arg2 departTime:(id)arg3 departCity:(id)arg4 arriveCity:(id)arg5;
- (id)sendFlightUseCarAddressSearchWithSegmentModel:(id)arg1 airportCode:(id)arg2 andKeyword:(id)arg3 uuid:(id)arg4;
- (id)sendFlightGetUseCarPriceListWithCacheBean:(id)arg1 segmentModelList:(id)arg2 uuid:(id)arg3;
- (void)setDataFromResponse:(id)arg1 withSegmentModel:(id)arg2;
- (void)setIntRequestWithBean:(id)arg1 useCarSegmentModel:(id)arg2 uuid:(id)arg3 request:(id)arg4;
- (id)requestWithBean:(id)arg1 useCarSegmentModel:(id)arg2 uuid:(id)arg3;
- (id)sendFlightGetUseCarPriceListWithCacheBean:(id)arg1 segmentModel:(id)arg2 uuid:(id)arg3;
- (id)getFlightExternModelListWithCacheBean:(id)arg1;
- (id)sendFlightOrderConfirmProductConfigWithCacheBean:(id)arg1 xproductJosn:(id)arg2 uuid:(id)arg3 departTime:(id)arg4 departCity:(id)arg5 arriveCity:(id)arg6;
- (id)init;

@end

