//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CacheDBManager : NSObject
{
}

+ (id)cacheMusicPathLikeName:(id)arg1;
+ (id)allCacheMusicSortByTime;
+ (_Bool)deleteAllCacheMusicRecord;
+ (_Bool)deleteCacheMusicRecord:(id)arg1;
+ (_Bool)updateCacheMusic:(id)arg1 withCacheTime:(double)arg2;
+ (_Bool)addCacheMusicPath:(id)arg1 musicName:(id)arg2 cacheTime:(double)arg3;
+ (_Bool)isCacheMusicExist:(id)arg1;
+ (_Bool)createCacheMusicTable;
+ (id)cacheMusicTableName;

@end

