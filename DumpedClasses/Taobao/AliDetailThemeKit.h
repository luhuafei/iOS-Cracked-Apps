//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface AliDetailThemeKit : NSObject
{
    NSDictionary *_moduleArray;
}

+ (_Bool)isTesting;
+ (id)getThemeAliasDic;
+ (id)getStyleKitContext;
+ (id)getThemeStyleDic;
+ (id)registerThemeContext;
+ (id)searchThemeStyle:(id)arg1 group:(id)arg2;
+ (id)getGroupId:(id)arg1;
+ (id)getCid:(id)arg1 vid:(id)arg2;
+ (id)searchThemeStyle:(id)arg1 vid:(id)arg2 group:(id)arg3;
+ (id)setupStyles:(id)arg1 style:(id)arg2 vid:(id)arg3 group:(id)arg4;
+ (void)setDefaultThemeGroup:(id)arg1;
@property(retain, nonatomic) NSDictionary *moduleArray; // @synthesize moduleArray=_moduleArray;
- (void).cxx_destruct;

@end
