//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTFlightFilterSimpleDataModel, FlightCityModelForCityList, FlightMessageInfromationModel, NSArray, NSDictionary, NSMutableArray, NSString;

@interface CTFlightInquireCacheBean : CTCacheBean
{
    NSString *_flightAssistRnInlandCityInfoParamStr;
    NSString *_flightAssistRnIntCityInfoParamStr;
    _Bool _includingTax;
    _Bool _fromMTtoRT;
    _Bool _isHasMainActivity;
    _Bool _isHasBrithday;
    _Bool _isHasMedal;
    _Bool _hasChangedDepartCity;
    _Bool _hasChangedArriveCity;
    _Bool _refreshCRNEntrance;
    int _tripType;
    int _intlPassengerType;
    int _MessageFlag;
    int _messageAlertType;
    int _messageAlterStatus;
    int _flag;
    long long _adultsCount;
    long long _childrenCount;
    long long _babyCount;
    long long _passengerPolicyType;
    NSMutableArray *_multiTripArray;
    FlightCityModelForCityList *_departCity;
    FlightCityModelForCityList *_arriveCity;
    NSString *_departNearbyCityCode;
    NSString *_arriveNearbyCityCode;
    NSString *_departDate;
    NSString *_returnDate;
    FlightCityModelForCityList *_localCity;
    NSDictionary *_traceDictionary;
    CTFlightFilterSimpleDataModel *_filterClassSimpleModel;
    CTFlightFilterSimpleDataModel *_intFilterClassSimpleModel;
    NSArray *_lowestPriceList;
    NSArray *_intLowestPriceList;
    NSMutableArray *_flightClassList;
    NSMutableArray *_intFlightClassList;
    NSString *_promiseDetailImageUrl;
    long long _childrenBabyType;
    NSMutableArray *_searchHistoryList;
    NSMutableArray *_messageInfomationList;
}

+ (void)updateLastRecordDataWithIntentionData:(id)arg1;
+ (id)getLatestSearchIntentionData;
+ (void)saveLastClassRecord:(id)arg1 withCountryFlag:(int)arg2;
+ (int)getLastClassFromRecordWithCountryFlag:(int)arg1;
+ (id)getSaveInfo:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSMutableArray *messageInfomationList; // @synthesize messageInfomationList=_messageInfomationList;
@property(retain, nonatomic) NSMutableArray *searchHistoryList; // @synthesize searchHistoryList=_searchHistoryList;
@property(nonatomic) _Bool refreshCRNEntrance; // @synthesize refreshCRNEntrance=_refreshCRNEntrance;
@property(nonatomic) _Bool hasChangedArriveCity; // @synthesize hasChangedArriveCity=_hasChangedArriveCity;
@property(nonatomic) _Bool hasChangedDepartCity; // @synthesize hasChangedDepartCity=_hasChangedDepartCity;
@property(nonatomic) _Bool isHasMedal; // @synthesize isHasMedal=_isHasMedal;
@property(nonatomic) _Bool isHasBrithday; // @synthesize isHasBrithday=_isHasBrithday;
@property(nonatomic) _Bool isHasMainActivity; // @synthesize isHasMainActivity=_isHasMainActivity;
@property(nonatomic) long long childrenBabyType; // @synthesize childrenBabyType=_childrenBabyType;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *promiseDetailImageUrl; // @synthesize promiseDetailImageUrl=_promiseDetailImageUrl;
@property(retain, nonatomic) NSMutableArray *intFlightClassList; // @synthesize intFlightClassList=_intFlightClassList;
@property(retain, nonatomic) NSMutableArray *flightClassList; // @synthesize flightClassList=_flightClassList;
@property(retain, nonatomic) NSArray *intLowestPriceList; // @synthesize intLowestPriceList=_intLowestPriceList;
@property(retain, nonatomic) NSArray *lowestPriceList; // @synthesize lowestPriceList=_lowestPriceList;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *intFilterClassSimpleModel; // @synthesize intFilterClassSimpleModel=_intFilterClassSimpleModel;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *filterClassSimpleModel; // @synthesize filterClassSimpleModel=_filterClassSimpleModel;
@property(nonatomic) _Bool fromMTtoRT; // @synthesize fromMTtoRT=_fromMTtoRT;
@property(copy, nonatomic) NSDictionary *traceDictionary; // @synthesize traceDictionary=_traceDictionary;
@property(nonatomic) int messageAlterStatus; // @synthesize messageAlterStatus=_messageAlterStatus;
@property(nonatomic) int messageAlertType; // @synthesize messageAlertType=_messageAlertType;
@property(nonatomic) int MessageFlag; // @synthesize MessageFlag=_MessageFlag;
@property(nonatomic) _Bool includingTax; // @synthesize includingTax=_includingTax;
@property(nonatomic) int intlPassengerType; // @synthesize intlPassengerType=_intlPassengerType;
@property(retain, nonatomic) FlightCityModelForCityList *localCity; // @synthesize localCity=_localCity;
@property(copy, nonatomic) NSString *returnDate; // @synthesize returnDate=_returnDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(copy, nonatomic) NSString *arriveNearbyCityCode; // @synthesize arriveNearbyCityCode=_arriveNearbyCityCode;
@property(copy, nonatomic) NSString *departNearbyCityCode; // @synthesize departNearbyCityCode=_departNearbyCityCode;
@property(retain, nonatomic) FlightCityModelForCityList *arriveCity; // @synthesize arriveCity=_arriveCity;
@property(retain, nonatomic) FlightCityModelForCityList *departCity; // @synthesize departCity=_departCity;
@property(retain, nonatomic) NSMutableArray *multiTripArray; // @synthesize multiTripArray=_multiTripArray;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
@property(nonatomic) long long passengerPolicyType; // @synthesize passengerPolicyType=_passengerPolicyType;
@property(nonatomic) long long babyCount; // @synthesize babyCount=_babyCount;
@property(nonatomic) long long childrenCount; // @synthesize childrenCount=_childrenCount;
@property(nonatomic) long long adultsCount; // @synthesize adultsCount=_adultsCount;
- (void).cxx_destruct;
- (void)refreshHistoryList;
- (id)getFlightAssistRnCityinfoWithOrginCityinfo:(id)arg1 cityKeyWordList:(id)arg2 isInland:(_Bool)arg3;
- (id)getCityInfoListWith:(id)arg1 keywordsHeadstr:(id)arg2 keywordsBodyList:(id)arg3 isInland:(_Bool)arg4;
- (id)getFlightAssistIntCityInfoListStr;
- (id)getFlightAssistInlandCityInfoListStr;
- (id)getMsgInfoModelWithType:(int)arg1;
- (_Bool)isMultiTripHasSameCity;
@property(readonly, nonatomic) FlightMessageInfromationModel *vipInfoModel;
- (int)getMessageAlertStatus;
- (void)setWithIsHavePop:(id)arg1 value:(_Bool)arg2;
- (_Bool)getWithisHavePopWithKey:(id)arg1;
- (void)flightloopThroughWithMessageInformationList;
- (int)getMessageAlertTypeWith:(_Bool)arg1;
- (void)updateSearchdIntentionData:(_Bool)arg1;
- (void)loadIncludingTaxInfo;
- (id)getAllRecordData;
- (void)saveLastTripTypeToRecord;
- (void)saveLastPassengerTypeToRecord;
- (void)saveLastMultiTripToRecord;
- (void)saveLastSearchUpdateTimeStamp;
- (void)saveLastClassToRecord;
- (void)saveIntlFlightPassengerCountRecord;
- (void)saveLastArriveDateToRecord;
- (void)saveLastDepartDateToRecord;
- (void)saveLastArriveCityAirportToRecord;
- (void)saveLastDepartCityAirportToRecord;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;
- (void)initCache;

@end
