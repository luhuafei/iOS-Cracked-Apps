//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

#import "ITBOListModel.h"

@class NSMutableArray<TBOSearchCommunity>, NSString;

@interface TBOEditSearchCommunityResultSet : TBOBaseResponseModel <ITBOListModel>
{
    NSMutableArray<TBOSearchCommunity> *_result;
}

@property(retain, nonatomic) NSMutableArray<TBOSearchCommunity> *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)items;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

