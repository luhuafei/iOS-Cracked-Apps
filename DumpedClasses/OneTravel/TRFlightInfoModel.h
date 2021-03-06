//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSDate<Ignore>, NSString<Ignore>, NSString<Optional>, SAirportPoiModel<Optional>, TRAirportInfoModel<Optional>;

@interface TRFlightInfoModel : TRBaseModel
{
    NSString<Optional> *_flight_type;
    NSString<Optional> *_flight_no;
    NSString<Optional> *_status;
    SAirportPoiModel<Optional> *_special_list;
    TRAirportInfoModel<Optional> *_dep;
    TRAirportInfoModel<Optional> *_arr;
    NSDate<Ignore> *_flight_date;
    NSString<Ignore> *_flight_number;
}

@property(retain, nonatomic) NSString<Ignore> *flight_number; // @synthesize flight_number=_flight_number;
@property(retain, nonatomic) NSDate<Ignore> *flight_date; // @synthesize flight_date=_flight_date;
@property(retain, nonatomic) TRAirportInfoModel<Optional> *arr; // @synthesize arr=_arr;
@property(retain, nonatomic) TRAirportInfoModel<Optional> *dep; // @synthesize dep=_dep;
@property(retain, nonatomic) SAirportPoiModel<Optional> *special_list; // @synthesize special_list=_special_list;
@property(retain, nonatomic) NSString<Optional> *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString<Optional> *flight_no; // @synthesize flight_no=_flight_no;
@property(retain, nonatomic) NSString<Optional> *flight_type; // @synthesize flight_type=_flight_type;
- (void).cxx_destruct;

@end

