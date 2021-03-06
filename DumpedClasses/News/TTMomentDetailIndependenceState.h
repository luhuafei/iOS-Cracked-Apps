//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "State.h"

@class Comment, DetailActionRequestManager, NSArray, NSIndexPath, NSMutableArray, NSString, TTCommentDetailModel, TTCommentDetailReplyCommentModel;

@interface TTMomentDetailIndependenceState : State
{
    _Bool _hasMoreStickComment;
    _Bool _hasMoreComment;
    _Bool _isLoadingComment;
    _Bool _isFailedLoadComment;
    _Bool _needShowNetworkErrorPage;
    NSString *_commentID;
    NSString *_stickID;
    NSString *_uniqueID;
    Comment *_commentDBModel;
    TTCommentDetailModel *_detailModel;
    id <TTCommentModelProtocol> _commentModel;
    NSMutableArray *_hotCommentLayouts;
    NSMutableArray *_allCommentLayouts;
    NSMutableArray *_stickCommentLayouts;
    NSMutableArray *_hotComments;
    NSMutableArray *_allComments;
    NSMutableArray *_stickComments;
    NSArray *_totalComments;
    NSArray *_totalCommentLayouts;
    NSArray *_stashStickComments;
    DetailActionRequestManager *_commentActionManager;
    TTCommentDetailReplyCommentModel *_defaultRelyModel;
    NSIndexPath *_needMarkedIndexPath;
    long long _offset;
    long long _cellWidth;
    unsigned long long _from;
}

@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(nonatomic) long long cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSIndexPath *needMarkedIndexPath; // @synthesize needMarkedIndexPath=_needMarkedIndexPath;
@property(retain, nonatomic) TTCommentDetailReplyCommentModel *defaultRelyModel; // @synthesize defaultRelyModel=_defaultRelyModel;
@property(nonatomic) _Bool needShowNetworkErrorPage; // @synthesize needShowNetworkErrorPage=_needShowNetworkErrorPage;
@property(nonatomic) _Bool isFailedLoadComment; // @synthesize isFailedLoadComment=_isFailedLoadComment;
@property(nonatomic) _Bool isLoadingComment; // @synthesize isLoadingComment=_isLoadingComment;
@property(nonatomic) _Bool hasMoreComment; // @synthesize hasMoreComment=_hasMoreComment;
@property(nonatomic) _Bool hasMoreStickComment; // @synthesize hasMoreStickComment=_hasMoreStickComment;
@property(retain, nonatomic) DetailActionRequestManager *commentActionManager; // @synthesize commentActionManager=_commentActionManager;
@property(retain, nonatomic) NSArray *stashStickComments; // @synthesize stashStickComments=_stashStickComments;
@property(retain, nonatomic) NSArray *totalCommentLayouts; // @synthesize totalCommentLayouts=_totalCommentLayouts;
@property(retain, nonatomic) NSArray *totalComments; // @synthesize totalComments=_totalComments;
@property(retain, nonatomic) NSMutableArray *stickComments; // @synthesize stickComments=_stickComments;
@property(retain, nonatomic) NSMutableArray *allComments; // @synthesize allComments=_allComments;
@property(retain, nonatomic) NSMutableArray *hotComments; // @synthesize hotComments=_hotComments;
@property(retain, nonatomic) NSMutableArray *stickCommentLayouts; // @synthesize stickCommentLayouts=_stickCommentLayouts;
@property(retain, nonatomic) NSMutableArray *allCommentLayouts; // @synthesize allCommentLayouts=_allCommentLayouts;
@property(retain, nonatomic) NSMutableArray *hotCommentLayouts; // @synthesize hotCommentLayouts=_hotCommentLayouts;
@property(retain, nonatomic) id <TTCommentModelProtocol> commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) TTCommentDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) Comment *commentDBModel; // @synthesize commentDBModel=_commentDBModel;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *stickID; // @synthesize stickID=_stickID;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
- (id)init;

@end

