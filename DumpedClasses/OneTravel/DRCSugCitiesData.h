//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional><DRCCityModel>, NSString;

@interface DRCSugCitiesData : JSONModel
{
    NSString *_name;
    NSArray<Optional><DRCCityModel> *_rentcar_hot_cities;
    NSArray<Optional><DRCCityModel> *_cities;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<Optional><DRCCityModel> *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSArray<Optional><DRCCityModel> *rentcar_hot_cities; // @synthesize rentcar_hot_cities=_rentcar_hot_cities;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

