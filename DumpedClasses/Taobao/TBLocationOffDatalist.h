//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TBLocationOffDatalist : NSObject
{
    NSMutableArray *_wifiList;
    NSMutableArray *_cityCodeList;
    NSString *_strDelayTime;
    NSString *_strDataTime;
    NSString *_strStatus;
    NSString *_strTimeUnit;
    NSString *_strVersion;
}

@property(retain, nonatomic) NSString *strVersion; // @synthesize strVersion=_strVersion;
@property(retain, nonatomic) NSString *strTimeUnit; // @synthesize strTimeUnit=_strTimeUnit;
@property(retain, nonatomic) NSString *strStatus; // @synthesize strStatus=_strStatus;
@property(retain, nonatomic) NSString *strDataTime; // @synthesize strDataTime=_strDataTime;
@property(retain, nonatomic) NSString *strDelayTime; // @synthesize strDelayTime=_strDelayTime;
@property(retain, nonatomic) NSMutableArray *cityCodeList; // @synthesize cityCodeList=_cityCodeList;
@property(retain, nonatomic) NSMutableArray *wifiList; // @synthesize wifiList=_wifiList;
- (void).cxx_destruct;
- (void)unPacketOfflineData:(id)arg1;
- (id)init;

@end

