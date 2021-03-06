//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GWDBProperty : NSObject
{
    _Bool _isPrimary;
    _Bool _isIgnore;
    _Bool _isUnique;
    _Bool _isNotNull;
    unsigned long long _columnStatus;
    NSString *_defaultValue;
    NSString *_checkValue;
    NSString *_propertyType;
    NSString *_columnName;
    NSString *_columnType;
}

@property(readonly, nonatomic) NSString *columnType; // @synthesize columnType=_columnType;
@property(readonly, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(readonly, nonatomic) NSString *propertyType; // @synthesize propertyType=_propertyType;
@property(retain, nonatomic) NSString *checkValue; // @synthesize checkValue=_checkValue;
@property(retain, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) unsigned long long columnStatus; // @synthesize columnStatus=_columnStatus;
@property(readonly, nonatomic) _Bool isNotNull; // @synthesize isNotNull=_isNotNull;
@property(readonly, nonatomic) _Bool isUnique; // @synthesize isUnique=_isUnique;
@property(readonly, nonatomic) _Bool isIgnore; // @synthesize isIgnore=_isIgnore;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
- (void).cxx_destruct;
- (id)initWithProperty:(struct objc_property **)arg1;
- (_Bool)propertyCanUpdate;

@end

