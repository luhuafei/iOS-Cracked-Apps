//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQQTAdvertiseFetcherDelegate-Protocol.h"

@class MQQQTAdvertiseFetcher, NSString;

@interface MQQLaunchAdvertiseFetcher : NSObject <MQQQTAdvertiseFetcherDelegate>
{
    MQQQTAdvertiseFetcher *_adFetcher;
}

@property(retain, nonatomic) MQQQTAdvertiseFetcher *adFetcher; // @synthesize adFetcher=_adFetcher;
- (void)advertiseFetcher:(id)arg1 didFinishDownloadResult:(id)arg2;
- (void)advertiseFetcher:(id)arg1 didFinishWithResult:(id)arg2 willDownload:(_Bool)arg3;
- (void)cancel;
- (void)fetch;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

