//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface QueryDisGroupStatusResult : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasIsHot; // @dynamic hasIsHot;
@property(readonly) _Bool hasIsSuccess; // @dynamic hasIsSuccess;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasResultStatus; // @dynamic hasResultStatus;
@property(nonatomic) int isHot; // @dynamic isHot;
@property(nonatomic) _Bool isSuccess; // @dynamic isSuccess;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(nonatomic) int resultStatus; // @dynamic resultStatus;

@end
