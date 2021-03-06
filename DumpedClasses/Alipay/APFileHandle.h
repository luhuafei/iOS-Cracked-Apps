//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APResourceLoaderTask;

@interface APFileHandle : NSObject
{
    APResourceLoaderTask *_resourceLoaderTask;
    struct _opaque_pthread_mutex_t _rwLock;
}

+ (long long)fileSizeAtPath:(id)arg1;
+ (id)tempSeekDirectoryPath;
@property(nonatomic) struct _opaque_pthread_mutex_t rwLock; // @synthesize rwLock=_rwLock;
@property(readonly, nonatomic) __weak APResourceLoaderTask *resourceLoaderTask; // @synthesize resourceLoaderTask=_resourceLoaderTask;
- (void).cxx_destruct;
- (id)tempFilePath;
- (id)tempMediaInfoFromTask;
- (_Bool)saveTempFileIntoVideoCache:(id)arg1 withKey:(id)arg2 business:(id)arg3;
- (_Bool)saveTempFileIntoMediaCache:(id)arg1 withKey:(id)arg2 business:(id)arg3 extension:(id)arg4;
- (_Bool)cacheTempFileWithExtension:(id)arg1 business:(id)arg2;
- (long long)tempFileSize;
- (id)readTempFileDataWithOffset:(long long)arg1 length:(long long)arg2;
- (void)writeTempFileData:(id)arg1;
- (_Bool)tempFileExists;
- (_Bool)createTempFile;
- (_Bool)cleanTempFile;
- (void)dealloc;
- (id)initWithResourceLoaderTask:(id)arg1;

@end

