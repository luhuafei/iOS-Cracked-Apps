//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, TBSNSNetServiceContainer;

@interface TBSNSRedPoint : NSObject
{
    _Bool _redPointLogicStarted;
    TBSNSNetServiceContainer *_subservices;
    NSTimer *_feedCountTimer;
    unsigned long long _requestDegreeState;
    unsigned long long _countDegreeState;
}

+ (void)setTimestamp:(unsigned long long)arg1 key:(id)arg2;
+ (unsigned long long)getTimestampWithKey:(id)arg1;
+ (long long)getNumber;
+ (void)setNumber:(long long)arg1;
+ (void)setHiAccountId:(id)arg1;
+ (id)getHiAccountId;
+ (void)setIconType:(unsigned long long)arg1;
+ (unsigned long long)getIconType;
+ (void)countRedPointWithMonitorPoint:(id)arg1;
+ (void)showIconByType:(unsigned long long)arg1;
+ (void)removeIcon:(_Bool)arg1;
+ (void)removeIconAndUpdateTimestamp;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long countDegreeState; // @synthesize countDegreeState=_countDegreeState;
@property(nonatomic) unsigned long long requestDegreeState; // @synthesize requestDegreeState=_requestDegreeState;
@property(nonatomic) _Bool redPointLogicStarted; // @synthesize redPointLogicStarted=_redPointLogicStarted;
@property(retain, nonatomic) NSTimer *feedCountTimer; // @synthesize feedCountTimer=_feedCountTimer;
@property(retain, nonatomic) TBSNSNetServiceContainer *subservices; // @synthesize subservices=_subservices;
- (void).cxx_destruct;
- (void)onFollowHi:(id)arg1;
- (void)onOrangeChanged:(id)arg1;
- (void)result:(_Bool)arg1 markT:(int)arg2 withData:(id)arg3;
- (void)sendRequest:(_Bool)arg1;
- (void)checkDate;
- (void)initRedPoint;
- (void)timerHandler:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)onAppActive;
- (void)startRedPointLogic;
- (void)onUserLoggedOut:(id)arg1;
- (void)onUserLoggedIn:(id)arg1;
- (void)dealloc;
- (id)init;

@end

