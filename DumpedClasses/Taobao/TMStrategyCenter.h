//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TMStrategyRecords;

@interface TMStrategyCenter : NSObject
{
    TMStrategyRecords *_strategyRecord;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addSystemObserver;
- (void)handleNotification:(id)arg1;
- (void)performAction:(id)arg1 command:(id)arg2 params:(id)arg3;
- (void)publishEvent:(id)arg1;
- (id)init;

@end

