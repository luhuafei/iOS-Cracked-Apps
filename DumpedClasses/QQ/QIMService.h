//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IIMService.h"
#import "IQQMessageProcessor.h"

@class NSMutableArray, NSRecursiveLock, NSString;

@interface QIMService : NSObject <IIMService, IQQMessageProcessor>
{
    NSMutableArray *_registerNoticationArray;
    NSRecursiveLock *_luck;
    NSMutableArray *_tmpRegisterNoticationArray;
}

+ (id)getInstance;
- (void)removeNotificationObserver;
- (void)postAllRegisterNotification;
- (unsigned long long)notificationCount;
- (void)postRegisteNotification:(id)arg1 Object:(id)arg2 userInfo:(id)arg3 priority:(_Bool)arg4;
- (void)postRegisteNotification:(id)arg1 Object:(id)arg2 userInfo:(id)arg3;
- (_Bool)hasRegisterNotification;
- (id)getRegisterNotification;
- (_Bool)registerNotification:(id)arg1;
- (id)getIMEI;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9 previewImageURL:(id)arg10 isPushInViewController:(_Bool)arg11;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9 previewImageURL:(id)arg10;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9 previewImageURL:(id)arg10 isStructMsg:(_Bool)arg11 structMsgParam:(id)arg12 isPushInViewController:(_Bool)arg13;
- (unsigned int)getGroupSendMessageRandom;
- (void)updateMultiAudioNetFlowOnMainThread:(id)arg1;
- (void)updateMultiAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateVideoNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateAudioNetFlowOnMainThread:(id)arg1;
- (void)updateVideoNetFlowOnMainThread:(id)arg1;
- (void)synEnterChatListController;
- (_Bool)synInsertMsgToDB:(id)arg1;
- (_Bool)synInsertMsgToDBInMicroMute:(id)arg1;
- (_Bool)synInsertMsgToDBWithoutNotification:(id)arg1;
- (id)processMsgEncapsulation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

