//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KTVRechargeRecord : KTVObjectModel
{
    int _status;
    float _giveKB;
    double _totalKB;
    double _money;
    NSString *_orderIdFM;
    NSString *_payTypeName;
    NSString *_createDate;
}

@property(nonatomic) float giveKB; // @synthesize giveKB=_giveKB;
@property(retain, nonatomic) NSString *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *payTypeName; // @synthesize payTypeName=_payTypeName;
@property(retain, nonatomic) NSString *orderIdFM; // @synthesize orderIdFM=_orderIdFM;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double money; // @synthesize money=_money;
@property(nonatomic) double totalKB; // @synthesize totalKB=_totalKB;
- (void).cxx_destruct;

@end

