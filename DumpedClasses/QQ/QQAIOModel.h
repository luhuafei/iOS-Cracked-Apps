//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class EmotionParseResult, NSMutableDictionary, NSString, QQMessageModel;

@interface QQAIOModel : QQModel
{
    QQMessageModel *_msgModel;
    _Bool _bSel;
    _Bool _highlighted;
    NSString *_uin;
    double _maxContentWidth;
    long long _splitPosition;
    _Bool _canMultiMsgForward;
    _Bool _canMultiMsgDelete;
    _Bool _bAnimation;
    _Bool _bAnimationStart;
    double _animationoffset;
    int _xo;
    _Bool _isShowAtBottom;
    NSString *_quoteTitle;
    EmotionParseResult *_quoteTitleResult;
    NSString *_quoteMsg;
    EmotionParseResult *_quoteMsgResult;
    long long _maxRequestCompleteQuoteMsgTime;
    NSMutableDictionary *_shareLinkParams;
}

+ (id)modelWithMessageModel:(id)arg1;
+ (id)createAIOModelWithMessageModel:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *shareLinkParams; // @synthesize shareLinkParams=_shareLinkParams;
@property(nonatomic) _Bool isShowAtBottom; // @synthesize isShowAtBottom=_isShowAtBottom;
@property(nonatomic) long long maxRequestCompleteQuoteMsgTime; // @synthesize maxRequestCompleteQuoteMsgTime=_maxRequestCompleteQuoteMsgTime;
@property(retain, nonatomic) EmotionParseResult *quoteMsgResult; // @synthesize quoteMsgResult=_quoteMsgResult;
@property(retain, nonatomic) NSString *quoteMsg; // @synthesize quoteMsg=_quoteMsg;
@property(retain, nonatomic) EmotionParseResult *quoteTitleResult; // @synthesize quoteTitleResult=_quoteTitleResult;
@property(retain, nonatomic) NSString *quoteTitle; // @synthesize quoteTitle=_quoteTitle;
- (void).cxx_destruct;
- (_Bool)compareMsg:(id)arg1;
- (_Bool)shouldShowTimeline;
- (id)cellDataForRow:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (double)cellHeight;
- (id)eventHandleClassName;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;
- (id)initWithMessageModel:(id)arg1;

// Remaining properties
@property(nonatomic) double animationoffset; // @dynamic animationoffset;
@property(nonatomic) _Bool bAnimation; // @dynamic bAnimation;
@property(nonatomic) _Bool bAnimationStart; // @dynamic bAnimationStart;
@property(nonatomic) _Bool bSel; // @dynamic bSel;
@property(nonatomic) _Bool canMultiMsgDelete; // @dynamic canMultiMsgDelete;
@property(nonatomic) _Bool canMultiMsgForward; // @dynamic canMultiMsgForward;
@property(nonatomic) _Bool highlighted; // @dynamic highlighted;
@property(nonatomic) double maxContentWidth; // @dynamic maxContentWidth;
@property(retain, nonatomic) QQMessageModel *msgModel; // @dynamic msgModel;
@property(nonatomic) long long splitPosition; // @dynamic splitPosition;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

