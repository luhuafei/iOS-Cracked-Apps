//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQYoutuTaskManager, NSArray, NSError;

@protocol MQQYoutuTaskDelegate <NSObject>
- (void)youtuTask:(MQQYoutuTaskManager *)arg1 willResumeFilterWithOptions:(unsigned long long)arg2 progress:(double)arg3;
- (void)youtuTask:(MQQYoutuTaskManager *)arg1 willFilterWithOptions:(unsigned long long)arg2 totalCount:(unsigned long long)arg3;
- (void)youtuTask:(MQQYoutuTaskManager *)arg1 didCompleteWithRemainingData:(NSArray *)arg2 taskState:(unsigned long long)arg3 error:(NSError *)arg4;
- (void)youtuTask:(MQQYoutuTaskManager *)arg1 didFilterWithOptions:(unsigned long long)arg2 progress:(double)arg3 count:(unsigned long long)arg4;
@end

