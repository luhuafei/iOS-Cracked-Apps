//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONECRPayVerificationBaseStore.h"

@interface ONECRPayVerificationWeChatStore : ONECRPayVerificationBaseStore
{
}

+ (id)sharedInstance;
- (_Bool)isWeChatInstalled;
- (id)payVerificationHintMsgWithStatus:(_Bool)arg1;
- (void)handleBindUrlResponse:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)additionalParams;
- (id)opType;
- (id)channelId;

@end
