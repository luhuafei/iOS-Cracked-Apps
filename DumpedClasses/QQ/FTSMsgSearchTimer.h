//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface FTSMsgSearchTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isNeedSearchFinish;
}

- (void).cxx_destruct;
- (void)_clearTimerTask:(_Bool)arg1;
- (void)cancelTimer;
- (void)startTimer;
- (void)resetIsNeedSearchFinish:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

