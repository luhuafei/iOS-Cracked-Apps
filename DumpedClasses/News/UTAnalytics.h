//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UTSelfStaticsManager, UTTracker;

@interface UTAnalytics : NSObject
{
    UTTracker *mDefaultTracker;
    NSMutableDictionary *mTrackers;
    UTSelfStaticsManager *mSelfStaticsManager;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (void).cxx_destruct;
- (void)setCrashCaughtListener:(id)arg1;
- (void)turnOffCrashHandler;
- (void)turnOnDebug;
- (void)setRequestAuthentication:(id)arg1;
- (id)getTracker:(id)arg1;
- (id)getDefaultTracker;
- (void)updateSessionProperties:(id)arg1;
- (void)userRegister:(id)arg1;
- (void)updateUserAccount:(id)arg1 userid:(id)arg2;
- (void)setChannel:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
