//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICacheFormater.h"

@class NSString;

@interface StandardCacheFormtater : NSObject <ICacheFormater>
{
}

- (id)cacheAttributes:(id)arg1 forKey:(id)arg2;
- (void)removeFromPath:(id)arg1 forKey:(id)arg2;
- (id)objectFromPath:(id)arg1 forKey:(id)arg2;
- (void)saveObject:(id)arg1 toPath:(id)arg2 forKey:(id)arg3;
- (id)key:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

