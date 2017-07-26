//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFCBaseRespVO.h"

@class LFCLiveShowDetailInfo, NSArray, NSDictionary, NSString;

@interface LFCEnterLiveShowRespVO : LFCBaseRespVO
{
    _Bool _publishable;
    _Bool _chatFlowSwitch;
    LFCLiveShowDetailInfo *_liveShowDetail;
    NSString *_status;
    NSString *_descriptionUrl;
    NSArray *_discountInfo;
    long long _serverTime;
    NSString *_tips;
    NSString *_theme;
    NSString *_addressName;
    NSString *_icon;
    NSDictionary *_extend;
}

+ (Class)extendElementClass;
+ (Class)discountInfoElementClass;
@property(retain, nonatomic) NSDictionary *extend; // @synthesize extend=_extend;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *addressName; // @synthesize addressName=_addressName;
@property(retain, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) long long serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSArray *discountInfo; // @synthesize discountInfo=_discountInfo;
@property(nonatomic) _Bool chatFlowSwitch; // @synthesize chatFlowSwitch=_chatFlowSwitch;
@property(retain, nonatomic) NSString *descriptionUrl; // @synthesize descriptionUrl=_descriptionUrl;
@property(nonatomic) _Bool publishable; // @synthesize publishable=_publishable;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) LFCLiveShowDetailInfo *liveShowDetail; // @synthesize liveShowDetail=_liveShowDetail;
- (void).cxx_destruct;

@end
