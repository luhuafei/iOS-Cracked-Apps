//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FAMobileLiveStarLightListItem : FAModel
{
    _Bool _isFollow;
    long long _fansCount;
    long long _followersCount;
    NSString *_nickname;
    long long _starsCount;
    long long _userFxId;
    long long _userKugouId;
    NSString *_userLogo;
    long long _richLevel;
    long long _starLevel;
}

@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) long long starLevel; // @synthesize starLevel=_starLevel;
@property(nonatomic) long long richLevel; // @synthesize richLevel=_richLevel;
@property(retain, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(nonatomic) long long userKugouId; // @synthesize userKugouId=_userKugouId;
@property(nonatomic) long long userFxId; // @synthesize userFxId=_userFxId;
@property(nonatomic) long long starsCount; // @synthesize starsCount=_starsCount;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long followersCount; // @synthesize followersCount=_followersCount;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
- (void).cxx_destruct;

@end

