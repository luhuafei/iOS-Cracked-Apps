//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDATBaseModel.h"

@class NSString;

@interface TDATBaseStation : TDATBaseModel
{
    NSString *_type;
    NSString *_mcc;
    NSString *_mnc;
    NSString *_operator;
}

@property(retain, nonatomic) NSString *operator; // @synthesize operator=_operator;
@property(retain, nonatomic) NSString *mnc; // @synthesize mnc=_mnc;
@property(retain, nonatomic) NSString *mcc; // @synthesize mcc=_mcc;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end

