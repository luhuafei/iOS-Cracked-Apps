//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBaseModel.h"

@class NSString, TGCommentInteractCountStatus;

@interface TGDetailCommentsList : TGBaseModel
{
    long long _commentId;
    long long _type;
    NSString *_content;
    long long _commenterId;
    NSString *_commenterNick;
    NSString *_commenterHeadPic;
    NSString *_commenterNickType;
    long long _ID;
    long long _timestamp;
    long long _status;
    long long _targetType;
    long long _subType;
    long long _targetId;
    long long _accountId;
    NSString *_targetCover;
    long long _paId;
    long long _paType;
    long long _paCommenterId;
    long long _innerFloor;
    long long _admin;
    TGCommentInteractCountStatus *_interactCountStatus;
}

@property(retain, nonatomic) TGCommentInteractCountStatus *interactCountStatus; // @synthesize interactCountStatus=_interactCountStatus;
@property(nonatomic) long long admin; // @synthesize admin=_admin;
@property(nonatomic) long long innerFloor; // @synthesize innerFloor=_innerFloor;
@property(nonatomic) long long paCommenterId; // @synthesize paCommenterId=_paCommenterId;
@property(nonatomic) long long paType; // @synthesize paType=_paType;
@property(nonatomic) long long paId; // @synthesize paId=_paId;
@property(copy, nonatomic) NSString *targetCover; // @synthesize targetCover=_targetCover;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) long long targetId; // @synthesize targetId=_targetId;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *commenterNickType; // @synthesize commenterNickType=_commenterNickType;
@property(copy, nonatomic) NSString *commenterHeadPic; // @synthesize commenterHeadPic=_commenterHeadPic;
@property(copy, nonatomic) NSString *commenterNick; // @synthesize commenterNick=_commenterNick;
@property(nonatomic) long long commenterId; // @synthesize commenterId=_commenterId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end
