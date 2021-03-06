//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQVIPFunctionComicSectionReadedInfoModel;

@interface QQVIPFunctionComicCollectionModel : NSObject
{
    NSString *_comicId;
    NSString *_comicName;
    NSString *_comicCoverUrl;
    NSString *_updateSectionId;
    QQVIPFunctionComicSectionReadedInfoModel *_lastReadSection;
    long long _readTs;
    long long _collectTs;
    int _status;
    int _opt;
    long long _maxTs;
    NSString *_sectionName;
    int _picSeq;
    int _attenctionUpdateOpt;
    int _iegComicStatus;
    long long _updateTs;
    int _typeNum;
    int _type;
    NSString *_quantifier;
    _Bool _isOfflineOp;
    int _xo;
    NSString *_pageId;
    NSString *_detailPagefrom;
    NSString *_landPageId;
    NSString *_mod;
    NSString *_objOwnerid;
}

@property(retain, nonatomic) NSString *objOwnerid; // @synthesize objOwnerid=_objOwnerid;
@property(retain, nonatomic) NSString *mod; // @synthesize mod=_mod;
@property(retain, nonatomic) NSString *landPageId; // @synthesize landPageId=_landPageId;
@property(retain, nonatomic) NSString *detailPagefrom; // @synthesize detailPagefrom=_detailPagefrom;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)compareObject:(id)arg1 andObject2:(id)arg2;
- (_Bool)collectMsgEqualTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *quantifier; // @dynamic quantifier;
@property(nonatomic) int typeNum; // @dynamic typeNum;
@property(nonatomic) int type; // @dynamic type;

// Remaining properties
@property(nonatomic) int attenctionUpdateOpt; // @dynamic attenctionUpdateOpt;
@property(nonatomic) long long collectTs; // @dynamic collectTs;
@property(retain, nonatomic) NSString *comicCoverUrl; // @dynamic comicCoverUrl;
@property(retain, nonatomic) NSString *comicId; // @dynamic comicId;
@property(retain, nonatomic) NSString *comicName; // @dynamic comicName;
@property(nonatomic) int iegComicStatus; // @dynamic iegComicStatus;
@property(nonatomic) _Bool isOfflineOp; // @dynamic isOfflineOp;
@property(retain, nonatomic) QQVIPFunctionComicSectionReadedInfoModel *lastReadSection; // @dynamic lastReadSection;
@property(nonatomic) long long maxTs; // @dynamic maxTs;
@property(nonatomic) int opt; // @dynamic opt;
@property(nonatomic) int picSeq; // @dynamic picSeq;
@property(nonatomic) long long readTs; // @dynamic readTs;
@property(retain, nonatomic) NSString *sectionName; // @dynamic sectionName;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) NSString *updateSectionId; // @dynamic updateSectionId;
@property(nonatomic) long long updateTs; // @dynamic updateTs;

@end

