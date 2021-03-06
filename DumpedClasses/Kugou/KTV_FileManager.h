//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KTV_FileManager : NSObject
{
    NSString *_recordTempFilePath;
}

+ (void)saveSearchHistory:(id)arg1;
+ (void)checkNeedGetSingerHeadImg:(id)arg1;
+ (void)saveSingerHistory:(id)arg1;
+ (void)deleteSearchHistoryWithIndex:(unsigned long long)arg1;
+ (_Bool)deleteSearchHistory;
+ (id)getSearchHistory;
+ (id)getSingerHistory;
+ (id)getHotHistory;
+ (void)removeAllHotHistory;
+ (void)removeSingleHotWithDict:(id)arg1;
+ (void)updateHotListWithSongList:(id)arg1;
+ (id)getFileDataByPath:(id)arg1;
+ (_Bool)removeFileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (id)getSoundFilePathBySound:(id)arg1;
+ (id)getSongFilePathBySong:(id)arg1;
+ (id)getLocalRecordPathByUserId:(id)arg1 recordName:(id)arg2;
+ (id)getLocalRecordPathDirectorByUserId:(id)arg1;
+ (id)getLocalRecordTempPath;
+ (_Bool)deleteDirectoryWithFullPath:(id)arg1;
+ (_Bool)isExsitFileWithPath:(id)arg1;
+ (_Bool)createFileWithPath:(id)arg1 data:(id)arg2;
+ (_Bool)createDirectoryWithPath:(id)arg1;
+ (_Bool)checkFileOutDateKrcForSong:(id)arg1;
+ (_Bool)saveKrcFileForKrcId:(id)arg1 withKtcData:(id)arg2;
+ (_Bool)delectKrcFileByKrcId:(id)arg1;
+ (_Bool)isExsitKrcFileByKrcId:(id)arg1;
+ (id)getKrcFilePathByKrcId:(id)arg1;
+ (_Bool)saveKrcFileForSong:(id)arg1 withKtcData:(id)arg2;
+ (_Bool)delectKrcFileBySong:(id)arg1;
+ (_Bool)isExsitKrcFileBySong:(id)arg1;
+ (id)getKrcFilePathBySong:(id)arg1;
+ (id)getSaveDirectory;
+ (id)getCacheDirectory;
+ (id)tmpDir;
+ (id)preferencesDir;
+ (id)libraryDir;
+ (id)homeDir;
+ (id)share;
@property(retain, nonatomic) NSString *recordTempFilePath; // @synthesize recordTempFilePath=_recordTempFilePath;
- (void).cxx_destruct;
- (void)setLocalRecordedTempFilePath:(id)arg1;
- (_Bool)copyFileToEditErea:(id)arg1;
- (id)getEditRecordedFilePathForFile:(id)arg1;
- (id)getEditRecordedTempFilePath;
- (id)getLocalRecordedTempFilePath;

@end

