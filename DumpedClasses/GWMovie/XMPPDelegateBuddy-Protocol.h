//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPDelegateBase-Protocol.h"

@class EMError, NSArray, NSString, XMPPBuddyData, XMPPManager;

@protocol XMPPDelegateBuddy <XMPPDelegateBase>

@optional
- (void)xmpp:(XMPPManager *)arg1 didUnblockBuddyFailure:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didUnblockBuddySucceed:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didBlockBuddyFailure:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didBlockBuddySucceed:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didFetchBlockedListFailure:(EMError *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didFetchBlockedListSucceed:(NSArray *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didChangedOnlineStatus:(_Bool)arg2 forBuddy:(XMPPBuddyData *)arg3;
- (void)xmpp:(XMPPManager *)arg1 didUpdateGroupList:(NSArray *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didUpdateBuddyList:(NSArray *)arg2 changedBuddies:(NSArray *)arg3 isAdd:(_Bool)arg4;
- (void)xmppBuddyListIsUpToData:(XMPPManager *)arg1;
- (void)xmppDidFetchedBuddyList:(XMPPManager *)arg1 buddyList:(NSArray *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didUpdateBuddy:(XMPPBuddyData *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didRemovedByBuddy:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didRejectedByBuddy:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didAcceptBuddySucceed:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didAcceptedByBuddy:(NSString *)arg2;
- (void)xmpp:(XMPPManager *)arg1 didReceiveBuddyRequest:(NSString *)arg2 message:(NSString *)arg3;
@end

