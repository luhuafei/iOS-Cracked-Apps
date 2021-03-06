//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKConfigManagerUtils : NSObject
{
}

+ (unsigned long long)reportNormalLogPeriod;
+ (_Bool)reportNormalLog;
+ (unsigned long long)normalLogCheckPeroid;
+ (unsigned long long)normalLogValidPeriod;
+ (unsigned long long)customDataValidPeriod;
+ (unsigned long long)compressLevel;
+ (unsigned long long)transportMax;
+ (unsigned long long)transportInter;
+ (unsigned long long)configValueForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
+ (_Bool)isANRModuleEnanble;
+ (_Bool)isCrashModuleEnable;
+ (_Bool)isPageTrackEnable;
+ (_Bool)isSDKEnable;
+ (_Bool)isEnableRetryCustomData;
+ (_Bool)isSocketBlenderEnable;
+ (_Bool)isTransportEnable;
+ (_Bool)isConfigEnableForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (void)load;

@end

