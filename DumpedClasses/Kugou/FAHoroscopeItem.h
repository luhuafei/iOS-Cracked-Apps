//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FAHoroscopeItem : FAModel
{
    long long _type;
    NSString *_name;
    long long _plusType;
    NSString *_plusName;
}

+ (id)createItemWithType:(long long)arg1 name:(id)arg2;
@property(retain, nonatomic) NSString *plusName; // @synthesize plusName=_plusName;
@property(nonatomic) long long plusType; // @synthesize plusType=_plusType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

