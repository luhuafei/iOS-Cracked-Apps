//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

@class FALiveDynamicListView, FALiveFansListView, FALiveNormalRoomInfo, FALiveWeekDynamicController, NSArray, UISegmentedControl, UIView;

@interface FALiveFullContributionView : FAView
{
    _Bool _isFollow;
    _Bool _loaded;
    _Bool _isShow;
    _Bool _firstTabFirstLoad;
    _Bool _secondTabFirstLoad;
    long long _roomId;
    FALiveNormalRoomInfo *_normalRoomInfo;
    CDUnknownBlockType _showViewHandler;
    CDUnknownBlockType _segmentValueChangedHandler;
    UIView *_contentView;
    UIView *_maskView;
    UISegmentedControl *_segment;
    FALiveFansListView *_fansView;
    FALiveDynamicListView *_dynamicView;
    FALiveWeekDynamicController *_weekDynamicVC;
    NSArray *_arrItems;
    UIView *_viewSegmentBG;
}

@property(nonatomic) _Bool secondTabFirstLoad; // @synthesize secondTabFirstLoad=_secondTabFirstLoad;
@property(nonatomic) _Bool firstTabFirstLoad; // @synthesize firstTabFirstLoad=_firstTabFirstLoad;
@property(retain, nonatomic) UIView *viewSegmentBG; // @synthesize viewSegmentBG=_viewSegmentBG;
@property(retain, nonatomic) NSArray *arrItems; // @synthesize arrItems=_arrItems;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) FALiveWeekDynamicController *weekDynamicVC; // @synthesize weekDynamicVC=_weekDynamicVC;
@property(retain, nonatomic) FALiveDynamicListView *dynamicView; // @synthesize dynamicView=_dynamicView;
@property(retain, nonatomic) FALiveFansListView *fansView; // @synthesize fansView=_fansView;
@property(retain, nonatomic) UISegmentedControl *segment; // @synthesize segment=_segment;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType segmentValueChangedHandler; // @synthesize segmentValueChangedHandler=_segmentValueChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType showViewHandler; // @synthesize showViewHandler=_showViewHandler;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(retain, nonatomic) FALiveNormalRoomInfo *normalRoomInfo; // @synthesize normalRoomInfo=_normalRoomInfo;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)show;
- (void)hidden;
- (void)updateContributionList:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)segmentValueChanged;
- (void)configMainView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
