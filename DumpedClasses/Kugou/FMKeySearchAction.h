//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface FMKeySearchAction : UserActionRecord
{
    NSString *_searchContent;
    unsigned long long _hasSearchResult;
}

@property(nonatomic) unsigned long long hasSearchResult; // @synthesize hasSearchResult=_hasSearchResult;
@property(copy, nonatomic) NSString *searchContent; // @synthesize searchContent=_searchContent;
- (void)coding;
- (void)dealloc;

@end

