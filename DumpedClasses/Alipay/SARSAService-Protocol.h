//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class NSString, SARSAKeyResult;

@protocol SARSAService <DTService>
- (void)clearRSA;
- (void)RSAEncryptAsync:(NSString *)arg1 needTS:(_Bool)arg2 onComplete:(void (^)(NSString *))arg3;
- (NSString *)RSAEncryptSync:(NSString *)arg1 needTS:(_Bool)arg2;
- (NSString *)RSAEncrypt:(NSString *)arg1 needTS:(_Bool)arg2;
- (void)getRsaAsync:(void (^)(SARSAKeyResult *))arg1;
- (SARSAKeyResult *)getRsaSync;
- (SARSAKeyResult *)RSA;
@end

