//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DRDownloadManager : NSObject
{
    _Bool _maasChannel;
    id _tag;
}

- (void).cxx_destruct;
- (void)sendConnectionAsyncWithRequest:(CDUnknownBlockType)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailed:(CDUnknownBlockType)arg3 timeoutInterval:(double)arg4;
- (void)sendConnectionSyncWithRequest:(CDUnknownBlockType)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailed:(CDUnknownBlockType)arg3;
- (void)cancel;

@end

