//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NetworkCheckerDelegate.h"

@class NSArray, NSString, QLGetMarketAttentionListTask, QLMarketAttentionOperateTaskQueue;

@interface QLMarketAttentionManager : NSObject <NetworkCheckerDelegate>
{
    QLMarketAttentionOperateTaskQueue *_attentOperateQueue;
    QLGetMarketAttentionListTask *_attentListTask;
    NSArray *_aryAttentionList;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSArray *aryAttentionList; // @synthesize aryAttentionList=_aryAttentionList;
- (void).cxx_destruct;
- (void)reachabilityChanged;
- (void)loginOuted;
- (void)loginSuccessed;
- (void)appTerminated:(id)arg1;
- (void)scheduleAllTasks;
- (void)addListObj:(id)arg1 list:(id)arg2;
- (void)removeListObj:(id)arg1 list:(id)arg2;
- (void)updateLocalList;
- (_Bool)isAttentItem:(id)arg1 inArray:(id)arg2;
- (_Bool)isEqualAttentItem:(id)arg1 item2:(id)arg2;
- (void)removeOprateTask:(id)arg1;
- (_Bool)isAttentionedByItem:(id)arg1;
- (void)deleteBatchAttentionItem:(id)arg1;
- (void)deleteAttentionItem:(id)arg1;
- (void)addAttentionItem:(id)arg1;
- (void)updateAll:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

