//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCChatPageNoticeRegisteredObjectProtocol.h"

@class MCChatPageNoticePublicModel, NSString;

@interface MCChatPageNoticeRegisteredObjectPublic : NSObject <MCChatPageNoticeRegisteredObjectProtocol>
{
    NSString *_pageName;
    MCChatPageNoticePublicModel *_chatPageNoticePublicModel;
    CDUnknownBlockType _aViewBlock;
}

@property(copy, nonatomic) CDUnknownBlockType aViewBlock; // @synthesize aViewBlock=_aViewBlock;
@property(retain, nonatomic) MCChatPageNoticePublicModel *chatPageNoticePublicModel; // @synthesize chatPageNoticePublicModel=_chatPageNoticePublicModel;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)showNotice;
- (_Bool)needShowNotice;
- (void)getView:(CDUnknownBlockType)arg1;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

