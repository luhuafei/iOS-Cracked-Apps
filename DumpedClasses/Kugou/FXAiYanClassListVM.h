//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FXAiYanClassListVM : NSObject
{
    _Bool _isLastPage;
    int _listType;
    int _curPage;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    NSArray *_listData;
}

@property(nonatomic) _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property(nonatomic) int curPage; // @synthesize curPage=_curPage;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (id)getCacheData;
- (void)requestNextPage;
- (void)requestFirstPage;
- (id)initWithRankType:(int)arg1;

@end

