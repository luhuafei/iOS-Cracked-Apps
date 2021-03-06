//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LDNetConnect : NSObject
{
    _Bool _isExistSuccess;
    int _connectCount;
    int tcpPort;
    NSString *_hostAddress;
    _Bool _isIPV6;
    NSString *_resultLog;
    long long _sumTime;
    struct __CFSocket *_socket;
    long long _startTime;
    id <LDNetConnectDelegate> _delegate;
}

@property(nonatomic) __weak id <LDNetConnectDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long _startTime; // @synthesize _startTime;
- (void).cxx_destruct;
- (void)readStream:(_Bool)arg1;
- (void)connectWithAddress:(id)arg1;
- (void)connect;
- (void)runWithHostAddress:(id)arg1 port:(int)arg2;
- (void)stopConnect;

@end

