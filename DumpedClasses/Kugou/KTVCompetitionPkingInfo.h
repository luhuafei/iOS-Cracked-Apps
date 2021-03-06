//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSMutableArray<KTVPlayerBaseInfo>, NSString;

@interface KTVCompetitionPkingInfo : KTVObjectModel
{
    KTVPlayerBaseInfo *_myInfo;
    KTVPlayerBaseInfo *_opponentInfo;
    long long _myOpusId;
    long long _opponentOpusId;
    long long _judgeNum;
    NSString *_myScore;
    NSString *_opponentScore;
    long long _pkId;
    NSMutableArray<KTVPlayerBaseInfo> *_judgeList;
    NSString *_opusHash1;
    NSString *_opusHash2;
    double _voteRate1;
    double _voteRate2;
    NSString *_hashKey;
    NSString *_songName;
    long long _songId;
    NSString *_singerName;
    NSString *_songHash;
    long long _playTime;
}

@property(nonatomic) long long playTime; // @synthesize playTime=_playTime;
@property(retain, nonatomic) NSString *songHash; // @synthesize songHash=_songHash;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(nonatomic) long long songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(nonatomic) double voteRate2; // @synthesize voteRate2=_voteRate2;
@property(nonatomic) double voteRate1; // @synthesize voteRate1=_voteRate1;
@property(retain, nonatomic) NSString *opusHash2; // @synthesize opusHash2=_opusHash2;
@property(retain, nonatomic) NSString *opusHash1; // @synthesize opusHash1=_opusHash1;
@property(retain, nonatomic) NSMutableArray<KTVPlayerBaseInfo> *judgeList; // @synthesize judgeList=_judgeList;
@property(nonatomic) long long pkId; // @synthesize pkId=_pkId;
@property(retain, nonatomic) NSString *opponentScore; // @synthesize opponentScore=_opponentScore;
@property(retain, nonatomic) NSString *myScore; // @synthesize myScore=_myScore;
@property(nonatomic) long long judgeNum; // @synthesize judgeNum=_judgeNum;
@property(nonatomic) long long opponentOpusId; // @synthesize opponentOpusId=_opponentOpusId;
@property(nonatomic) long long myOpusId; // @synthesize myOpusId=_myOpusId;
@property(retain, nonatomic) KTVPlayerBaseInfo *opponentInfo; // @synthesize opponentInfo=_opponentInfo;
@property(retain, nonatomic) KTVPlayerBaseInfo *myInfo; // @synthesize myInfo=_myInfo;
- (void).cxx_destruct;
- (id)cacheOtherKey;
- (id)cacheKey;

@end

