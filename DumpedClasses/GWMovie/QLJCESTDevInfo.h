//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCESTDevInfo : JceObjectV2
{
    unsigned short jcev2_p_1_r_wDevPlatType;
    NSString *jcev2_p_2_o_pushToken;
    NSString *jcev2_p_3_o_guid;
    NSString *jcev2_p_4_o_devid;
    NSString *jcev2_p_5_o_strFromInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strFromInfo, setter=setJce_strFromInfo:) NSString *jcev2_p_5_o_strFromInfo; // @synthesize jcev2_p_5_o_strFromInfo;
@property(retain, nonatomic, getter=jce_devid, setter=setJce_devid:) NSString *jcev2_p_4_o_devid; // @synthesize jcev2_p_4_o_devid;
@property(retain, nonatomic, getter=jce_guid, setter=setJce_guid:) NSString *jcev2_p_3_o_guid; // @synthesize jcev2_p_3_o_guid;
@property(retain, nonatomic, getter=jce_pushToken, setter=setJce_pushToken:) NSString *jcev2_p_2_o_pushToken; // @synthesize jcev2_p_2_o_pushToken;
@property(nonatomic, getter=jce_wDevPlatType, setter=setJce_wDevPlatType:) unsigned short jcev2_p_1_r_wDevPlatType; // @synthesize jcev2_p_1_r_wDevPlatType;
- (void)dealloc;
- (id)init;

@end

