//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KFWebCacheUtil : NSObject
{
}

+ (id)listFilesInDirectoryAtPath:(id)arg1 deep:(_Bool)arg2;
+ (_Bool)removeCacheFolderWithUrlKey:(id)arg1;
+ (void)removeAllCacheFile;
+ (void)removeWithOutCurrentVersionCacheFile;
+ (id)getPathWithIdentifier:(id)arg1 withUrlKey:(id)arg2;
+ (id)webCacheIdentifierWithUrlKey:(id)arg1 parameterDic:(id)arg2;

@end

