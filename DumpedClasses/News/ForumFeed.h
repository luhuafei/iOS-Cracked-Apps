//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTApi.h"

@class NSArray<TTForumModel>;

@interface ForumFeed : TTApi
{
    long long _followed_count;
    long long _followed_has_more;
    NSArray<TTForumModel> *_followed;
    NSArray<TTForumModel> *_interested;
}

@property(retain, nonatomic) NSArray<TTForumModel> *interested; // @synthesize interested=_interested;
@property(retain, nonatomic) NSArray<TTForumModel> *followed; // @synthesize followed=_followed;
@property(nonatomic) long long followed_has_more; // @synthesize followed_has_more=_followed_has_more;
@property(nonatomic) long long followed_count; // @synthesize followed_count=_followed_count;
- (void).cxx_destruct;

@end
