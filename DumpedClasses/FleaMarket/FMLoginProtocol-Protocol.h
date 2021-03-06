//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FMLoginProtocol <NSObject>
- (NSString *)encryptUserId;
- (id)cookies;
- (NSString *)ecode;
- (NSString *)sid;
- (NSString *)nick;
- (NSString *)userId;
- (void)getCookiesWithNeedTimeCheck:(_Bool)arg1 needLoginView:(_Bool)arg2 completionHandler:(void (^)(_Bool))arg3 cancelationHander:(void (^)(void))arg4;
- (void)logout;
- (void)loginWithOption:(int)arg1 completionHandler:(void (^)(_Bool, NSDictionary *))arg2 cancelationHandler:(void (^)(void))arg3;
- (_Bool)isValidLogin;
- (void)setup:(NSString *)arg1;
@end

