//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveHPBaseCardView.h"

@class TBLiveCPVideoModel, TBLiveHomePageLivingInfoView, UIView;

@interface TBLiveHPSimpleCardView : TBLiveHPBaseCardView
{
    _Bool _onlooker;
    UIView *_bottomMaskView;
    TBLiveHomePageLivingInfoView *_liveInfoView;
    TBLiveCPVideoModel *_videoModel;
}

@property(nonatomic) _Bool onlooker; // @synthesize onlooker=_onlooker;
@property(retain, nonatomic) TBLiveCPVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) TBLiveHomePageLivingInfoView *liveInfoView; // @synthesize liveInfoView=_liveInfoView;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
- (void).cxx_destruct;
- (void)jumpToLivingRoom;
- (void)didTapView;
- (void)refreshWithModel:(id)arg1 isOnLooker:(_Bool)arg2;
- (void)setupSubViews;

@end
