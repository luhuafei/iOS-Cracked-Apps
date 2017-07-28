//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class DynamicDebugInfo, DynamicRetStatus, ForkExtraInfo, NSArray, NSData, NSString;

@interface DynamicRouteRes : JceObjectV2
{
    _Bool jcev2_p_0_r_has_route;
    int jcev2_p_4_o_saveTime;
    int jcev2_p_8_o_forkIndex;
    NSData *jcev2_p_1_r_route;
    DynamicRetStatus *jcev2_p_2_o_retStatus;
    DynamicDebugInfo *jcev2_p_3_o_debugInfo;
    NSString *jcev2_p_5_o_dynReason;
    double jcev2_p_6_o_forkX;
    double jcev2_p_7_o_forkY;
    ForkExtraInfo *jcev2_p_9_o_fork_info;
    NSArray *jcev2_p_10_o_reasons__b0x9i_VODynamicReason;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=reasons, setter=setReasons:) NSArray *jcev2_p_10_o_reasons__b0x9i_VODynamicReason; // @synthesize jcev2_p_10_o_reasons__b0x9i_VODynamicReason;
@property(retain, nonatomic, getter=fork_info, setter=setFork_info:) ForkExtraInfo *jcev2_p_9_o_fork_info; // @synthesize jcev2_p_9_o_fork_info;
@property(nonatomic, getter=forkIndex, setter=setForkIndex:) int jcev2_p_8_o_forkIndex; // @synthesize jcev2_p_8_o_forkIndex;
@property(nonatomic, getter=forkY, setter=setForkY:) double jcev2_p_7_o_forkY; // @synthesize jcev2_p_7_o_forkY;
@property(nonatomic, getter=forkX, setter=setForkX:) double jcev2_p_6_o_forkX; // @synthesize jcev2_p_6_o_forkX;
@property(retain, nonatomic, getter=dynReason, setter=setDynReason:) NSString *jcev2_p_5_o_dynReason; // @synthesize jcev2_p_5_o_dynReason;
@property(nonatomic, getter=saveTime, setter=setSaveTime:) int jcev2_p_4_o_saveTime; // @synthesize jcev2_p_4_o_saveTime;
@property(retain, nonatomic, getter=debugInfo, setter=setDebugInfo:) DynamicDebugInfo *jcev2_p_3_o_debugInfo; // @synthesize jcev2_p_3_o_debugInfo;
@property(retain, nonatomic, getter=retStatus, setter=setRetStatus:) DynamicRetStatus *jcev2_p_2_o_retStatus; // @synthesize jcev2_p_2_o_retStatus;
@property(retain, nonatomic, getter=route, setter=setRoute:) NSData *jcev2_p_1_r_route; // @synthesize jcev2_p_1_r_route;
@property(nonatomic, getter=has_route, setter=setHas_route:) _Bool jcev2_p_0_r_has_route; // @synthesize jcev2_p_0_r_has_route;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
