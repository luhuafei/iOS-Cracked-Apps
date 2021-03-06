//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QFTSBaseEngine.h"

#import "IFTSFileEngine.h"

@class FTSFileSearchFilter, NSString;

@interface QFTSFileEngine : QFTSBaseEngine <IFTSFileEngine>
{
    FTSFileSearchFilter *_fileFilter;
    _Bool _isWorking;
    NSString *_KeyWord;
}

+ (id)GetInstance;
@property _Bool isWorking; // @synthesize isWorking=_isWorking;
@property(copy) NSString *KeyWord; // @synthesize KeyWord=_KeyWord;
- (void).cxx_destruct;
- (_Bool)ftsPauseFileSearch;
- (_Bool)ftsCancelFileSearch;
- (void)ftsFileDoSearch:(id)arg1;
- (void)ftsGetMoreResultsWithSearchKeyword:(id)arg1;
- (void)ftsGetResultsWithSearchKeyword:(id)arg1;
- (void)ftsDestructFTSEngine;
- (void)ftsConstructFTSEngine;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

