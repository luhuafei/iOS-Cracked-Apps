//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class GTXMutableDictionary, NSCache, NSString;

@interface GTXLruCache : NSObject <NSCacheDelegate>
{
    long long _countLimit;
    NSCache *_cache;
    GTXMutableDictionary *_dictionary;
}

@property(retain, nonatomic) GTXMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) long long countLimit; // @synthesize countLimit=_countLimit;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)values;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
