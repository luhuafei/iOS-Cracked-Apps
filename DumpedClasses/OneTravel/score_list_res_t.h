//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface score_list_res_t : JceObjectV2
{
    NSArray *jcev2_p_0_r_friend_scores__b0x9i_VOuser_score_info_t;
    NSArray *jcev2_p_1_r_near_by_scores__b0x9i_VOuser_score_info_t;
    NSString *jcev2_p_2_r_access_token;
    NSString *jcev2_p_3_r_refresh_token;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=refresh_token, setter=setRefresh_token:) NSString *jcev2_p_3_r_refresh_token; // @synthesize jcev2_p_3_r_refresh_token;
@property(retain, nonatomic, getter=access_token, setter=setAccess_token:) NSString *jcev2_p_2_r_access_token; // @synthesize jcev2_p_2_r_access_token;
@property(retain, nonatomic, getter=near_by_scores, setter=setNear_by_scores:) NSArray *jcev2_p_1_r_near_by_scores__b0x9i_VOuser_score_info_t; // @synthesize jcev2_p_1_r_near_by_scores__b0x9i_VOuser_score_info_t;
@property(retain, nonatomic, getter=friend_scores, setter=setFriend_scores:) NSArray *jcev2_p_0_r_friend_scores__b0x9i_VOuser_score_info_t; // @synthesize jcev2_p_0_r_friend_scores__b0x9i_VOuser_score_info_t;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

