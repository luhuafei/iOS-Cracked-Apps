//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue, NSRecursiveLock;

@interface CTDestBookDownLoadManager : NSObject
{
    NSOperationQueue *_downLoadQueue;
    NSMutableArray *_taskModelPool;
    unsigned long long _backtaskIdentifier;
    NSRecursiveLock *_lock;
}

+ (id)getInstance;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned long long backtaskIdentifier; // @synthesize backtaskIdentifier=_backtaskIdentifier;
@property(retain) NSMutableArray *taskModelPool; // @synthesize taskModelPool=_taskModelPool;
@property(retain) NSOperationQueue *downLoadQueue; // @synthesize downLoadQueue=_downLoadQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)networkTypeChange;
- (void)changeStatusWhenTerminate;
- (void)resetDownLoadDelegate:(id)arg1;
- (void)downLoadOpearionCompletion;
- (_Bool)checkTaskIsExists:(id)arg1;
- (_Bool)isBookInDownLoadQueue:(id)arg1;
- (void)pauseBookDownLoad:(id)arg1;
- (void)deleteBookUpdate:(id)arg1;
- (void)cancelBookDownLoad:(id)arg1;
- (void)resumeBookUpdate:(id)arg1 netWorkType:(int)arg2 delegate:(id)arg3;
- (void)updateWith:(id)arg1 netWorkType:(int)arg2 delegate:(id)arg3;
- (void)resumeBookDownLoad:(id)arg1 netWorkType:(int)arg2 delegate:(id)arg3;
- (void)downLoadWith:(id)arg1 netWorkType:(int)arg2 delegate:(id)arg3;
- (id)init;

@end

