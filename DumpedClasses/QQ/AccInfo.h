//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface AccInfo : JceObjectV2
{
    short jcev2_p_4_o_language;
    long long jcev2_p_0_r_accType;
    NSString *jcev2_p_1_r_acc;
    NSString *jcev2_p_2_r_loginKey;
    NSString *jcev2_p_3_r_LC;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_language, setter=setJce_language:) short jcev2_p_4_o_language; // @synthesize jcev2_p_4_o_language;
@property(retain, nonatomic, getter=jce_LC, setter=setJce_LC:) NSString *jcev2_p_3_r_LC; // @synthesize jcev2_p_3_r_LC;
@property(retain, nonatomic, getter=jce_loginKey, setter=setJce_loginKey:) NSString *jcev2_p_2_r_loginKey; // @synthesize jcev2_p_2_r_loginKey;
@property(retain, nonatomic, getter=jce_acc, setter=setJce_acc:) NSString *jcev2_p_1_r_acc; // @synthesize jcev2_p_1_r_acc;
@property(nonatomic, getter=jce_accType, setter=setJce_accType:) long long jcev2_p_0_r_accType; // @synthesize jcev2_p_0_r_accType;
- (void)dealloc;
- (id)init;

@end

