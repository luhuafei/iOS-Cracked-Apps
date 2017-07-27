//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString, QLJCEAction, QLJCELiveLightInfo;

@interface QLJCELivePollResponse : JceObjectV2
{
    _Bool jcev2_p_19_o_isPraiseOpen;
    _Bool jcev2_p_20_o_isGiftUse;
    int jcev2_p_0_r_errCode;
    int jcev2_p_8_o_liveStatus;
    int jcev2_p_10_o_pollTimeOut;
    int jcev2_p_16_o_liveSubStatus;
    NSString *jcev2_p_1_o_pollContext;
    NSDictionary *jcev2_p_2_o_refreshTimeOut__b0x9i_M09ONSStringONSNumber;
    NSDictionary *jcev2_p_3_o_refreshFlag__b0x9i_M09ONSStringONSNumber;
    long long jcev2_p_4_o_onlineNumber;
    long long jcev2_p_5_o_attentNumber;
    long long jcev2_p_6_o_giftCount;
    long long jcev2_p_7_o_myGiftCount;
    QLJCEAction *jcev2_p_9_o_liveEndAction;
    long long jcev2_p_11_o_serverTime;
    long long jcev2_p_12_o_liveStartTime;
    NSString *jcev2_p_13_o_streamId;
    long long jcev2_p_14_o_playCount;
    long long jcev2_p_15_o_likeNum;
    NSArray *jcev2_p_17_o_markList__b0x9i_VOQLJCECMarkInfo;
    NSString *jcev2_p_18_o_markContext;
    long long jcev2_p_21_o_popularity;
    QLJCELiveLightInfo *jcev2_p_22_o_lightInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_lightInfo, setter=setJce_lightInfo:) QLJCELiveLightInfo *jcev2_p_22_o_lightInfo; // @synthesize jcev2_p_22_o_lightInfo;
@property(nonatomic, getter=jce_popularity, setter=setJce_popularity:) long long jcev2_p_21_o_popularity; // @synthesize jcev2_p_21_o_popularity;
@property(nonatomic, getter=jce_isGiftUse, setter=setJce_isGiftUse:) _Bool jcev2_p_20_o_isGiftUse; // @synthesize jcev2_p_20_o_isGiftUse;
@property(nonatomic, getter=jce_isPraiseOpen, setter=setJce_isPraiseOpen:) _Bool jcev2_p_19_o_isPraiseOpen; // @synthesize jcev2_p_19_o_isPraiseOpen;
@property(retain, nonatomic, getter=jce_markContext, setter=setJce_markContext:) NSString *jcev2_p_18_o_markContext; // @synthesize jcev2_p_18_o_markContext;
@property(retain, nonatomic, getter=jce_markList, setter=setJce_markList:) NSArray *jcev2_p_17_o_markList__b0x9i_VOQLJCECMarkInfo; // @synthesize jcev2_p_17_o_markList__b0x9i_VOQLJCECMarkInfo;
@property(nonatomic, getter=jce_liveSubStatus, setter=setJce_liveSubStatus:) int jcev2_p_16_o_liveSubStatus; // @synthesize jcev2_p_16_o_liveSubStatus;
@property(nonatomic, getter=jce_likeNum, setter=setJce_likeNum:) long long jcev2_p_15_o_likeNum; // @synthesize jcev2_p_15_o_likeNum;
@property(nonatomic, getter=jce_playCount, setter=setJce_playCount:) long long jcev2_p_14_o_playCount; // @synthesize jcev2_p_14_o_playCount;
@property(retain, nonatomic, getter=jce_streamId, setter=setJce_streamId:) NSString *jcev2_p_13_o_streamId; // @synthesize jcev2_p_13_o_streamId;
@property(nonatomic, getter=jce_liveStartTime, setter=setJce_liveStartTime:) long long jcev2_p_12_o_liveStartTime; // @synthesize jcev2_p_12_o_liveStartTime;
@property(nonatomic, getter=jce_serverTime, setter=setJce_serverTime:) long long jcev2_p_11_o_serverTime; // @synthesize jcev2_p_11_o_serverTime;
@property(nonatomic, getter=jce_pollTimeOut, setter=setJce_pollTimeOut:) int jcev2_p_10_o_pollTimeOut; // @synthesize jcev2_p_10_o_pollTimeOut;
@property(retain, nonatomic, getter=jce_liveEndAction, setter=setJce_liveEndAction:) QLJCEAction *jcev2_p_9_o_liveEndAction; // @synthesize jcev2_p_9_o_liveEndAction;
@property(nonatomic, getter=jce_liveStatus, setter=setJce_liveStatus:) int jcev2_p_8_o_liveStatus; // @synthesize jcev2_p_8_o_liveStatus;
@property(nonatomic, getter=jce_myGiftCount, setter=setJce_myGiftCount:) long long jcev2_p_7_o_myGiftCount; // @synthesize jcev2_p_7_o_myGiftCount;
@property(nonatomic, getter=jce_giftCount, setter=setJce_giftCount:) long long jcev2_p_6_o_giftCount; // @synthesize jcev2_p_6_o_giftCount;
@property(nonatomic, getter=jce_attentNumber, setter=setJce_attentNumber:) long long jcev2_p_5_o_attentNumber; // @synthesize jcev2_p_5_o_attentNumber;
@property(nonatomic, getter=jce_onlineNumber, setter=setJce_onlineNumber:) long long jcev2_p_4_o_onlineNumber; // @synthesize jcev2_p_4_o_onlineNumber;
@property(retain, nonatomic, getter=jce_refreshFlag, setter=setJce_refreshFlag:) NSDictionary *jcev2_p_3_o_refreshFlag__b0x9i_M09ONSStringONSNumber; // @synthesize jcev2_p_3_o_refreshFlag__b0x9i_M09ONSStringONSNumber;
@property(retain, nonatomic, getter=jce_refreshTimeOut, setter=setJce_refreshTimeOut:) NSDictionary *jcev2_p_2_o_refreshTimeOut__b0x9i_M09ONSStringONSNumber; // @synthesize jcev2_p_2_o_refreshTimeOut__b0x9i_M09ONSStringONSNumber;
@property(retain, nonatomic, getter=jce_pollContext, setter=setJce_pollContext:) NSString *jcev2_p_1_o_pollContext; // @synthesize jcev2_p_1_o_pollContext;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
