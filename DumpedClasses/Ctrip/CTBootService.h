//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class NSString;

@interface CTBootService : CTRootViewController
{
    NSString *_timeMutexToken;
}

+ (void)releaseInstance;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *timeMutexToken; // @synthesize timeMutexToken=_timeMutexToken;
- (void).cxx_destruct;
- (void)cancelTimeService;
- (void)startTimeService;

@end
