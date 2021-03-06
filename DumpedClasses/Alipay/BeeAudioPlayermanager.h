//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APAudioPlayerDelegate.h"

@class APAudioPlayer, BeeAudioItemInfo, NSMutableArray, NSString;

@interface BeeAudioPlayermanager : NSObject <APAudioPlayerDelegate>
{
    BeeAudioItemInfo *_currentAudioItemInfo;
    NSMutableArray *_audioDetailArray;
    unsigned long long _currentAudioState;
    APAudioPlayer *_multimediaPlayer;
    id <BeeAudioPlayerDelegate> _delegate;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <BeeAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APAudioPlayer *multimediaPlayer; // @synthesize multimediaPlayer=_multimediaPlayer;
@property(nonatomic) unsigned long long currentAudioState; // @synthesize currentAudioState=_currentAudioState;
- (void).cxx_destruct;
- (void)audioViewUpdateProgress:(double)arg1;
- (void)audioViewUpdateState;
- (void)audioPlayerDidFinishToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 playedCurrentTime:(double)arg2;
- (void)postStateNotification:(unsigned long long)arg1;
- (id)currentStateInfoWithTime:(double)arg1;
- (void)audioPlayer:(id)arg1 stateChangedTo:(unsigned long long)arg2 oldStatus:(unsigned long long)arg3;
- (void)audioPlayerDidReadyToPlay:(id)arg1;
- (void)audioPlayer:(id)arg1 failedWithError:(id)arg2;
- (void)seekFinished;
- (void)seekToTime:(double)arg1;
- (void)stopAudio;
- (void)pauseAudio;
- (void)userChange:(id)arg1;
- (void)loginDidFinished:(id)arg1;
- (void)playWithIdentifier:(id)arg1 business:(id)arg2;
- (void)removeAudioDetailViews:(id)arg1;
- (void)addAudioDetailViews:(id)arg1;
- (void)setCurrentPlayingAudioItemInfo:(id)arg1;
- (id)currentPlayingAudioItemInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

