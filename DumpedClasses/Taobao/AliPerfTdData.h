//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliPerfTdData : NSObject
{
    unsigned int _threadId;
    char *_tdName;
}

@property(nonatomic) unsigned int threadId; // @synthesize threadId=_threadId;
@property(nonatomic) char *tdName; // @synthesize tdName=_tdName;
- (id)threadName;
- (void)dealloc;
- (id)init;

@end

