//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class APCommonGuideContext, NSString;

@protocol AuthStatusService <DTService>
- (long long)typeForAuthCode:(NSString *)arg1;
- (NSString *)authCodeForType:(long long)arg1;
- (void)recordGuideHistory:(APCommonGuideContext *)arg1;
- (APCommonGuideContext *)requestGuideContext:(NSString *)arg1 withAuthType:(long long)arg2;
@end

