//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDIMDBInfo, FMDatabaseQueue, NSMutableDictionary;

@interface DDIMDatabaseManager : NSObject
{
    _Bool _isDBUpgrading;
    _Bool _isOpen;
    FMDatabaseQueue *_curDataBaseQueue;
    DDIMDBInfo *_curIMDBInfo;
    NSMutableDictionary *_dbQueueStore;
}

+ (id)dataBasePathWithUid:(id)arg1;
@property(retain) NSMutableDictionary *dbQueueStore; // @synthesize dbQueueStore=_dbQueueStore;
@property(retain) DDIMDBInfo *curIMDBInfo; // @synthesize curIMDBInfo=_curIMDBInfo;
@property(retain) FMDatabaseQueue *curDataBaseQueue; // @synthesize curDataBaseQueue=_curDataBaseQueue;
@property _Bool isOpen; // @synthesize isOpen=_isOpen;
@property _Bool isDBUpgrading; // @synthesize isDBUpgrading=_isDBUpgrading;
- (void).cxx_destruct;
- (void)upgradeDBWithDBPath:(id)arg1 withUserID:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)upgradeDBIfNeeded;
- (void)alertIMUserInfoTableV2WithDBQueue:(id)arg1;
- (void)alertIMUserInfoTableWithDBQueue:(id)arg1;
- (void)createIMDBInfoTableWithUid:(id)arg1;
- (void)createIMUserInfoTable;
- (void)dropIMMessageTableWithSessionID:(long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)createIMMessageTable:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)createIMSessionTable;
- (void)updateUserDefaultsLastMid:(long long)arg1;
- (long long)getUserDefaultsLastMid;
- (void)updateIMDBInfoWithLastMid:(long long)arg1;
- (long long)getIMDBLastMid;
- (id)getIMDBUserID;
- (void)updateIMDBInfo:(id)arg1 withQueue:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)updateIMDBInfo:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)getIMDBInfoTableWithQueue:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateUserInfo:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)getUserInfos:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)getUserInfo:(long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)insertUserInfo:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateMessage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateMessageStatusWithMessage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)executeIMDBInfoQuery:(id)arg1 WithSql:(id)arg2;
- (id)executeUserInfoQuery:(id)arg1 withSql:(id)arg2;
- (id)executeMessageQuery:(id)arg1 withSql:(id)arg2;
- (id)executeSessionQuery:(id)arg1 withSql:(id)arg2;
- (void)initializedWithSession:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateSessionReadStatusWithSid:(unsigned long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateMessageReadStatusWithSid:(unsigned long long)arg1 mids:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getPreUnreadMessageWithMessages:(id)arg1 count:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getLeastUnreadMessageWithSid:(unsigned long long)arg1 inCount:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getPostMessages:(id)arg1 count:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getPreMessages:(id)arg1 count:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getLeastMessageWithWithSessionModel:(id)arg1 count:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)getAllSessionWithCallback:(CDUnknownBlockType)arg1;
- (void)updateSession:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)deleteSession:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)insertSession:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)getSession:(long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)deleteMessage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)createIMMessageTableAndInsertMessageWithTable:(id)arg1 withMessageList:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)insertMessageList:(id)arg1 withTable:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)insertMessageList:(id)arg1 withSessionID:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)sessionName;
- (id)tableNameWithSessionId:(long long)arg1;
- (void)close;
- (void)openDBWithUid:(id)arg1;
- (id)init;

@end

