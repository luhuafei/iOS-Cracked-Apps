//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ACDSRuntimeContext : NSObject
{
    NSMutableDictionary *_context;
}

+ (void)releaseContext;
+ (void)removeContext:(id)arg1;
+ (id)getContextValue:(id)arg1;
+ (void)putContext:(id)arg1 setResource:(id)arg2;
+ (id)sharedInstance;
+ (void)initLock;
+ (void)init;
@property(retain) NSMutableDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;

@end

