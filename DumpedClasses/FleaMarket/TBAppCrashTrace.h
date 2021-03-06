//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBAppCrashTrace : NSObject
{
    _Bool _isEnable;
    _Bool _isContinuousCrash;
    _Bool _shouldCompleteClean;
    NSString *_crashTraceFilePath;
    NSString *_currentFlagKey;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool shouldCompleteClean; // @synthesize shouldCompleteClean=_shouldCompleteClean;
@property(nonatomic) _Bool isContinuousCrash; // @synthesize isContinuousCrash=_isContinuousCrash;
@property(retain, nonatomic) NSString *currentFlagKey; // @synthesize currentFlagKey=_currentFlagKey;
@property(retain, nonatomic) NSString *crashTraceFilePath; // @synthesize crashTraceFilePath=_crashTraceFilePath;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
- (void).cxx_destruct;
- (id)readFlagPlistFile;
- (void)postMonitorDataToServer;
- (void)removeFlagWhenAppBackground;
- (void)addFlagWhenAppForeground;
- (void)handleAppNotification:(id)arg1;
- (_Bool)isContinuousCrashHappen;
- (void)addFlagForAppFirstLaunch;
- (void)dealloc;
- (id)init;

@end

