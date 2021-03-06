//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFURLSessionManager, NSDictionary, NSHashTable, NSObject<OS_dispatch_semaphore>, ONEResourceThreadSafeDict;

@interface ONEResourceDownloaderManager : NSObject
{
    ONEResourceThreadSafeDict *_downloadTasksMap;
    NSDictionary *_modelsMap;
    NSObject<OS_dispatch_semaphore> *_lock;
    ONEResourceThreadSafeDict *_taskIdentifierToModelKeyMap;
    NSHashTable *_delegates;
    AFURLSessionManager *_sessionManager;
}

+ (void)downloadWithParam:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
+ (id)downloadUrlStrWithFileName:(id)arg1 inBundle:(id)arg2;
+ (id)bundlePathByBundleName:(id)arg1;
+ (id)filePathByName:(id)arg1 inBundle:(id)arg2;
+ (id)filePathByName:(id)arg1 inBundle:(id)arg2 isLatestVersion:(_Bool)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) AFURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) ONEResourceThreadSafeDict *taskIdentifierToModelKeyMap; // @synthesize taskIdentifierToModelKeyMap=_taskIdentifierToModelKeyMap;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSDictionary *modelsMap; // @synthesize modelsMap=_modelsMap;
@property(retain, nonatomic) ONEResourceThreadSafeDict *downloadTasksMap; // @synthesize downloadTasksMap=_downloadTasksMap;
- (void).cxx_destruct;
- (void)setTaskIdentifier:(id)arg1 forDownloader:(id)arg2;
- (void)resumeDownloader:(id)arg1;
- (void)stopAllWifiTask;
- (void)stopAllTasks;
- (void)startAllTasksAccordingNetwork;
- (void)refreshNetWorkStatus;
- (long long)currentReachabilityStatus;
- (void)refreshTasks;
- (id)stringTaskKeyByTask:(id)arg1;
- (id)downloaderWithTask:(id)arg1;
- (void)cleanDiskCache;
- (unsigned long long)taskCount;
- (id)downloaderWithKey:(id)arg1;
- (void)addDowloadTaskWithKey:(id)arg1 downloader:(id)arg2;
- (void)removeAllTask;
- (void)removeTaskWithKey:(id)arg1;
- (void)postNotiWithName:(id)arg1;
- (void)networkChanage;
- (void)addNetworkChangeNotification;
- (void)removeUnUsedResumeData;
- (void)removeNotInConfigFileWithConfigPaths:(id)arg1;
- (id)addNewTaskFromConfigAndReturnFilePath;
- (void)removeTasksNotInConfig;
- (void)clearAllTasks;
- (void)removeFinishedDownloaderWithModel:(id)arg1;
- (void)addDownloadTaskByModel:(id)arg1;
- (id)currentCityId;
- (void)startDownloadWithModelsMap:(id)arg1;
- (id)currentConfigAppVersion;
- (_Bool)isValidWithFileModel:(id)arg1 filePath:(id)arg2;
- (void)notifyDelegateSuccessWithModel:(id)arg1;
- (void)notifyDelegateFailureWithModel:(id)arg1 error:(id)arg2;
- (_Bool)bindDelegate:(id)arg1;
- (id)init;
- (void)dealloc;

@end

