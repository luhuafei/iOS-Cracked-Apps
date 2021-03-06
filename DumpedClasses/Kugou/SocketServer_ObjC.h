//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SocketServer_ObjC : NSObject
{
    NSMutableArray *mObservers;
    void *mCppSocketServer;
    void *mCppSocketServerObserverWrapper;
}

- (int)dataIn:(char *)arg1 length:(unsigned long long)arg2 fromIP:(id)arg3 fromPort:(unsigned short)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=getPort) unsigned short port;
@property(readonly, copy, nonatomic, getter=getIPAddress) NSString *IPAddress;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

