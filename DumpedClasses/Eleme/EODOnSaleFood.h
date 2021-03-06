//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface EODOnSaleFood : NVMModel
{
    NSString *_foodID;
    NSString *_imageHash;
    NSString *_name;
    double _price;
    double _originalPrice;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double originalPrice; // @synthesize originalPrice=_originalPrice;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(copy, nonatomic) NSString *foodID; // @synthesize foodID=_foodID;
- (void).cxx_destruct;
- (id)priceAttributedString;

@end

