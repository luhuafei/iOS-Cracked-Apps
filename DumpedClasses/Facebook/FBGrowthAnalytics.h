//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBGrowthAnalytics : NSObject
{
}

+ (void)logConfirmationEvent:(id)arg1 contactpoint:(id)arg2 isBlocked:(_Bool)arg3 reference:(id)arg4 submittedCode:(id)arg5 oldContactpoint:(id)arg6 newContactpoint:(id)arg7 newContactpointType:(int)arg8 errorCode:(unsigned long long)arg9;
+ (void)logConfirmationEvent:(id)arg1 contactpoint:(id)arg2 isBlocked:(_Bool)arg3 reference:(id)arg4;
+ (void)logConfirmationChangeContactpointFlowEnterWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3 newContactpointType:(int)arg4;
+ (void)logConfirmationChangeContactpointFailureWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3 newContactpoint:(id)arg4 errorCode:(long long)arg5;
+ (void)logConfirmationChangeContactpointSuccessWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3 oldContactpoint:(id)arg4;
+ (void)logConfirmationChangeContactpointAttemptWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3 newContactpoint:(id)arg4;
+ (void)logConfirmationResendCodeFailureWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3 errorCode:(long long)arg4;
+ (void)logConfirmationResendCodeSuccessWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3;
+ (void)logConfirmationResendCodeAttemptWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3;
+ (void)logConfirmationFailureWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3 errorCode:(long long)arg4 submittedConfirmationCode:(id)arg5;
+ (void)logConfirmationSuccessWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3;
+ (void)logConfirmationAttemptWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3 submittedConfirmationCode:(id)arg4;
+ (void)logConfirmationLogoutClickWithContactpoint:(id)arg1 reference:(id)arg2;
+ (void)logConfirmationCloseClickWithContactpoint:(id)arg1 reference:(id)arg2;
+ (void)logConfirmationBackPressWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3;
+ (void)logConfirmationFlowEnterWithContactpoint:(id)arg1 isBlocked:(_Bool)arg2 reference:(id)arg3;

@end

