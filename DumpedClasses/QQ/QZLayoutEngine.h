//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QZLayoutEngine : NSObject
{
    NSMutableDictionary *_layoutQueueDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)layoutFeedWithFeedModelList:(id)arg1 params:(id)arg2 type:(long long)arg3 finish:(CDUnknownBlockType)arg4;
- (void)layoutFeedWithFeedModelListInSubThread:(id)arg1;
- (void)layoutFeedWithFeedModelList:(id)arg1 type:(long long)arg2 finish:(CDUnknownBlockType)arg3;
- (void)cancelLayoutFeed;
- (id)init;

@end
