//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"

@class NSLock, NSMutableArray, NSNetService, NSObject<OS_dispatch_queue>, NSString, QBAsyncSocket;

@interface QBHTTPServer : NSObject <NSNetServiceDelegate>
{
    QBAsyncSocket *asyncSocket;
    NSObject<OS_dispatch_queue> *serverQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
    void *IsOnServerQueueKey;
    void *IsOnConnectionQueueKey;
    NSString *documentRoot;
    Class connectionClass;
    NSString *interface;
    unsigned short port;
    NSNetService *netService;
    NSString *domain;
    NSString *type;
    NSString *name;
    NSMutableArray *connections;
    NSLock *connectionsLock;
    _Bool isRunning;
    unsigned long long _backgroundTask;
}

- (void).cxx_destruct;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_endBackgroundTask;
- (void)_startBackgroundTask;
- (void)connectionDidDie:(id)arg1;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (_Bool)isRunning;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (_Bool)start:(id *)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)setName:(id)arg1;
- (id)name;
- (id)domain;
- (void)setPort:(unsigned short)arg1;
- (unsigned short)listeningPort;
- (unsigned short)port;
- (id)interface;
- (void)setConnectionClass:(Class)arg1;
- (Class)connectionClass;
- (id)documentRoot;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

