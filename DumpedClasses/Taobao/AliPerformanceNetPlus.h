//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "AliPerformanceLifeCycleProtocol.h"

@class NSMutableArray, NSString;

@interface AliPerformanceNetPlus : NSURLProtocol <AliPerformanceLifeCycleProtocol>
{
    NSMutableArray *_requestArray;
}

+ (void)aliPerformanceNetPlusRegisterClass:(Class)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)shareInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)swizzledNSURLProtocol;
+ (void)load;
@property(retain, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
- (void).cxx_destruct;
- (_Bool)checkConfigVaildByPlusName:(id)arg1;
- (id)init;
- (void)homePageDidFinishLaunchingWithConfiguration:(id)arg1;
- (void)userEvent;
- (void)startNetCostAnalysis;
- (id)tmpPath;
- (void)writeToFile;
- (void)addRequestURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

