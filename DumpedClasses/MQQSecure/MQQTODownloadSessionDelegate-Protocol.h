//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQTODownloadSession;

@protocol MQQTODownloadSessionDelegate <NSObject>
- (void)downloadSessionDidFailed:(MQQTODownloadSession *)arg1;
- (void)downloadSessionDidFinish:(MQQTODownloadSession *)arg1;
@end

