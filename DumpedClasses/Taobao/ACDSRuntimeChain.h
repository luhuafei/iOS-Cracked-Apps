//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ACDSRuntimeChain : NSObject
{
}

+ (void)finishStartInitExecuting:(id)arg1;
+ (void)executeACDSInitTask:(id)arg1;
+ (void)processInit:(id)arg1;
+ (void)processACDSBusinessTask:(id)arg1;
+ (void)T:(id)arg1;
+ (void)startService:(id)arg1;
+ (void)startACDSLifecycleService;
+ (void)basicInitProcess;
+ (void)threadSetup;
+ (void)monitorSetup;
+ (void)prepareRuntime;
+ (void)initUserCenter;
+ (void)prepare;
+ (void)notifyOnlineEnvironmentOK;
+ (void)notifyLocalEnvironmentOK;
+ (void)markUserTaskSuccess:(id)arg1;
+ (void)markUserTasking:(id)arg1;
+ (void)markUserTaskStatusFailed:(id)arg1;
+ (void)startService;
+ (void)setupAppLocalEnvironment;
+ (_Bool)ready;

@end

