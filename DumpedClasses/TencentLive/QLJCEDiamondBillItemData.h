//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEDiamondBillItemData : JceObjectV2
{
    NSString *jcev2_p_0_r_date;
    NSString *jcev2_p_1_r_consumeDesc;
    NSString *jcev2_p_2_r_consumeDescColor;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_consumeDescColor, setter=setJce_consumeDescColor:) NSString *jcev2_p_2_r_consumeDescColor; // @synthesize jcev2_p_2_r_consumeDescColor;
@property(retain, nonatomic, getter=jce_consumeDesc, setter=setJce_consumeDesc:) NSString *jcev2_p_1_r_consumeDesc; // @synthesize jcev2_p_1_r_consumeDesc;
@property(retain, nonatomic, getter=jce_date, setter=setJce_date:) NSString *jcev2_p_0_r_date; // @synthesize jcev2_p_0_r_date;
- (void).cxx_destruct;
- (id)init;

@end

