//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveBaseViewController.h"

#import "TBLiveStartDelegate.h"
#import "TBShareDelegate.h"

@class NSString, TBLiveStartView, TBLiveVideoEngine, UIImageView;

@interface TBLiveStartViewController : TBLiveBaseViewController <TBLiveStartDelegate, TBShareDelegate>
{
    _Bool _isFromQRCode;
    _Bool _isLiveDetailError;
    TBLiveStartView *_startView;
    UIImageView *_backageView;
    TBLiveVideoEngine *_videoEngine;
    NSString *_szLongAndLat;
}

@property(nonatomic) _Bool isLiveDetailError; // @synthesize isLiveDetailError=_isLiveDetailError;
@property(retain, nonatomic) NSString *szLongAndLat; // @synthesize szLongAndLat=_szLongAndLat;
@property(nonatomic) _Bool isFromQRCode; // @synthesize isFromQRCode=_isFromQRCode;
@property(retain, nonatomic) TBLiveVideoEngine *videoEngine; // @synthesize videoEngine=_videoEngine;
@property(retain, nonatomic) UIImageView *backageView; // @synthesize backageView=_backageView;
@property(retain, nonatomic) TBLiveStartView *startView; // @synthesize startView=_startView;
- (void).cxx_destruct;
- (void)getCurryLocation;
- (void)uploadLiveSnapshot:(id)arg1;
- (void)onCreateLive_Snapshot;
- (void)onCreateLive_Share:(id)arg1;
- (void)onCreateLive_Close;
- (void)onCreateLive_Pre:(id)arg1 imgUrl:(id)arg2 city:(id)arg3 sourceType:(id)arg4 channelId:(id)arg5 columnId:(id)arg6 date:(id)arg7;
- (void)onCreateLive_Start:(id)arg1 imgUrl:(id)arg2 city:(id)arg3 sourceType:(id)arg4 channelId:(id)arg5 columnId:(id)arg6;
- (_Bool)onStartOkhCallBack;
- (void)onErrBtnCallBack:(id)arg1;
- (void)onStartFailed:(id)arg1;
- (void)onStartPreLiveFailedCallBack:(id)arg1;
- (void)onPublishPreOkCallBack;
- (void)publishPreLiveMtop:(id)arg1 imgUrl:(id)arg2 city:(id)arg3 sourceType:(id)arg4 channelId:(id)arg5 columnId:(id)arg6 preTime:(id)arg7;
- (void)ExitLiveRoomView;
- (void)showCreateLiveRoomView;
- (void)stopLiveStreaming;
- (void)enterStreamMainVC;
- (void)startLiveStreaming;
- (void)loadCurrentLiveStatus:(id)arg1;
- (void)setVideoEngineStatusChangedBlock;
- (void)validLogin:(CDUnknownBlockType)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

