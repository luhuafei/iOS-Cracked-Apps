//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBCartQueryBonusItem : NSObject
{
    NSString *_type;
    NSString *_activityId;
    NSString *_bonusName;
    NSString *_desc;
    NSString *_discountFee;
    NSString *_validTime;
    NSString *_canApply;
    NSString *_ownNum;
}

@property(retain, nonatomic) NSString *ownNum; // @synthesize ownNum=_ownNum;
@property(retain, nonatomic) NSString *canApply; // @synthesize canApply=_canApply;
@property(retain, nonatomic) NSString *validTime; // @synthesize validTime=_validTime;
@property(retain, nonatomic) NSString *discountFee; // @synthesize discountFee=_discountFee;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *bonusName; // @synthesize bonusName=_bonusName;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

