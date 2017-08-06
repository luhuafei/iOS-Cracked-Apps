//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

#import "KTVSystemMsgLbsInviteDelegate.h"
#import "OHAttributedLabelDelegate.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KTVMessageBodyBase, KTVSystemMsgLbsInviteView, NSString, OHAttributedLabel, UIImageView, UIView;

@interface KTVMyMessageSystemCell : KFCommedTableViewCell <KTVSystemMsgLbsInviteDelegate, OHAttributedLabelDelegate>
{
    long long _myIndex;
    long long _myPlayerId;
    long long _opusId;
    long long _type;
    KTVMessageBodyBase *_item;
    _Bool _isNew;
    id <KTVSystemMsgCellProtocol> _delegate;
    UIView *_notifyBg;
    OHAttributedLabel *_notifyLabel;
    KGThemeLabel *_dateLabel;
    KGThemeImageView *_bommonLine;
    KGThemeButton *_bommonBtn;
    UIImageView *_noticeImgView;
    KTVSystemMsgLbsInviteView *_lbsView;
}

@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) KTVSystemMsgLbsInviteView *lbsView; // @synthesize lbsView=_lbsView;
@property(retain, nonatomic) UIImageView *noticeImgView; // @synthesize noticeImgView=_noticeImgView;
@property(retain, nonatomic) KGThemeButton *bommonBtn; // @synthesize bommonBtn=_bommonBtn;
@property(retain, nonatomic) KGThemeImageView *bommonLine; // @synthesize bommonLine=_bommonLine;
@property(retain, nonatomic) KGThemeLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) OHAttributedLabel *notifyLabel; // @synthesize notifyLabel=_notifyLabel;
@property(retain, nonatomic) UIView *notifyBg; // @synthesize notifyBg=_notifyBg;
@property(nonatomic) __weak id <KTVSystemMsgCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goToH5PageWithSendUrl:(id)arg1;
- (void)goToListenWorkWithOpusId:(long long)arg1;
- (void)jumpWithType:(long long)arg1;
- (void)goLookWithOpusId:(long long)arg1;
- (void)goToUserSpace:(long long)arg1;
- (void)goNearInvitePage;
- (void)cellLongPress:(id)arg1;
- (void)updateCellWithData:(id)arg1 index:(long long)arg2 oldReadTime:(long long)arg3 lbsList:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
