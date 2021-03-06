//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NXQueue;

@interface NXStore : NSObject
{
    NSLock *_lock;
    struct NSMutableDictionary *_serialQueues;
    struct NSMutableDictionary *_concurrentQueues;
    NXQueue *_queue;
    NSMutableArray *_apiList;
}

+ (id)store;
@property(retain, nonatomic) NSMutableArray *apiList; // @synthesize apiList=_apiList;
@property(retain, nonatomic) NXQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *concurrentQueues; // @synthesize concurrentQueues=_concurrentQueues;
@property(retain, nonatomic) NSMutableDictionary *serialQueues; // @synthesize serialQueues=_serialQueues;
- (void).cxx_destruct;
- (void)request:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRequest:(id)arg1;
- (void)dismissLoadingView;
- (void)showLoadingView;
- (_Bool)cancel:(id)arg1 onQueues:(struct NSMutableDictionary *)arg2;
- (_Bool)cancel:(id)arg1 onQueue:(id)arg2;
- (void)cancel:(id)arg1;
- (void)removeQueue:(id)arg1;
- (void)addQueue:(id)arg1;
- (void)finishRequest:(id)arg1 onQueue:(id)arg2;
- (void)request:(id)arg1 onQueue:(id)arg2;
- (id)promise:(id)arg1 onConcurrentQueue:(id)arg2;
- (id)promise:(id)arg1 onSerialQueue:(id)arg2;
- (id)promise:(id)arg1;
- (id)init;

@end

