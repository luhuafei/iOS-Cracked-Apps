//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface IntlFlightAddValueProductInformationModel : CTBusinessBean
{
    NSString *title;
    NSString *subTitle;
    NSString *unitValue;
    PriceType *price;
    NSString *productDesc;
    NSString *submitData;
}

@property(copy, nonatomic) NSString *submitData; // @synthesize submitData;
@property(copy, nonatomic) NSString *productDesc; // @synthesize productDesc;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(copy, nonatomic) NSString *unitValue; // @synthesize unitValue;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

