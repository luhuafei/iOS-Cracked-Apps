//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FireflyDescription, FireflyHotelInfo, FireflyRedPacketInfo;

@interface FireflyInfo : CTBusinessBean
{
    FireflyHotelInfo *_hotelInfo;
    FireflyRedPacketInfo *_redPacketInfo;
    FireflyDescription *_redPacketDesp;
}

@property(retain, nonatomic) FireflyDescription *redPacketDesp; // @synthesize redPacketDesp=_redPacketDesp;
@property(retain, nonatomic) FireflyRedPacketInfo *redPacketInfo; // @synthesize redPacketInfo=_redPacketInfo;
@property(retain, nonatomic) FireflyHotelInfo *hotelInfo; // @synthesize hotelInfo=_hotelInfo;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
