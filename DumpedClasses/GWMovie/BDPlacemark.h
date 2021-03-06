//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BDPlacemark : NSObject
{
    NSString *_formatted_address;
    NSString *_city;
    NSString *_district;
    NSString *_province;
    NSString *_street;
    NSString *_street_number;
    double _lat;
    double _lng;
}

@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *street_number; // @synthesize street_number=_street_number;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *formatted_address; // @synthesize formatted_address=_formatted_address;
- (void).cxx_destruct;
- (id)addressWithoutCity;

@end

