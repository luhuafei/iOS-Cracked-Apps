//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager;

@interface AwarenessDirectionTrigger : NSObject
{
    CMMotionManager *cmMotionManager;
    _Bool _isListening;
    long long _direction;
}

+ (id)shareInstance;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
- (void).cxx_destruct;
- (void)orientationChanged:(id)arg1;
- (void)stopMonitors;
- (_Bool)startMonitors;
- (id)init;

@end

