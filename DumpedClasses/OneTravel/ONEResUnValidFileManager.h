//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ONEResUnValidFileManager : NSObject
{
    NSMutableArray *_models;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (_Bool)saveUnValidFileModel:(id)arg1;
- (_Bool)saveUnValidModelsToFiles:(id)arg1;
- (id)configPath;
- (void)clearOldData;
- (id)init;
- (void)dealloc;

@end
