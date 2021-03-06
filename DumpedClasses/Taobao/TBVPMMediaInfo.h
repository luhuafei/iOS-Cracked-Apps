//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMediaBaseInfo.h"

@class NSString;

@interface TBVPMMediaInfo : TBMediaBaseInfo
{
    unsigned long long videoCode;
    unsigned long long videoWidth;
    unsigned long long videoHeight;
    double screenSize;
    NSString *beforeDurationAdtype;
    NSString *playType;
    NSString *playWay;
    NSString *videoProtocol;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *videoProtocol; // @synthesize videoProtocol;
@property(copy, nonatomic) NSString *playWay; // @synthesize playWay;
@property(copy, nonatomic) NSString *playType; // @synthesize playType;
@property(copy, nonatomic) NSString *beforeDurationAdtype; // @synthesize beforeDurationAdtype;
@property(nonatomic) double screenSize; // @synthesize screenSize;
@property(nonatomic) unsigned long long videoHeight; // @synthesize videoHeight;
@property(nonatomic) unsigned long long videoWidth; // @synthesize videoWidth;
@property(nonatomic) unsigned long long videoCode; // @synthesize videoCode;
- (void).cxx_destruct;
- (id)toDictionary;

@end

