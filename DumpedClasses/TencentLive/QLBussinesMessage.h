//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString, QLEngineBase;

@interface QLBussinesMessage : NSObject
{
    NSString *_message;
    float _timeout;
    NSMutableDictionary *_parameters;
    NSDictionary *_response;
    QLEngineBase *_executer;
    unsigned long long _busiID;
    long long _retryTimes;
    NSObject *_delegate;
    NSObject *_engineDelegate;
    unsigned long long _state;
}

+ (id)getLiveNetQueue;
+ (id)getNetQueue;
+ (id)message:(id)arg1 responder:(id)arg2 timeoutSeconds:(unsigned long long)arg3;
+ (id)message:(id)arg1 responder:(id)arg2;
@property(nonatomic) unsigned long long busiID; // @synthesize busiID=_busiID;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) QLEngineBase *executer; // @synthesize executer=_executer;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) __weak NSObject *engineDelegate; // @synthesize engineDelegate=_engineDelegate;
@property(nonatomic) __weak NSObject *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)liveMessageSend;
- (void)messageSend;
- (void)dealloc;
- (id)init;

@end

