//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@protocol AdhocTracker <NSObject>
- (void)track:(NSString *)arg1 value:(NSNumber *)arg2 attribute:(NSDictionary *)arg3;
- (void)asynchronousGetFlag:(NSString *)arg1 defaultValue:(id)arg2 timeoutInterval:(double)arg3 completionHandler:(void (^)(id, NSError *))arg4;
- (id)getFlag:(NSString *)arg1 defaultValue:(id)arg2;

@optional
- (void)forceToQuitExperimentsFinished:(void (^)(_Bool, NSError *))arg1;
- (void)forceToEnterExperiment:(NSString *)arg1 finished:(void (^)(_Bool))arg2;
@end

