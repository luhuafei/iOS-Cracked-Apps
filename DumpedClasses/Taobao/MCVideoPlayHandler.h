//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBMPBPlayerView;

@interface MCVideoPlayHandler : NSObject
{
    TBMPBPlayerView *_playerView;
}

@property(retain, nonatomic) TBMPBPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (void)upSetupView;
- (void)playerViewBeenTapped:(id)arg1;
- (void)playVideoWithUrlStr:(id)arg1;
- (void)showWithVideoUrl:(id)arg1 cacheToLocal:(id)arg2 cacheCallback:(CDUnknownBlockType)arg3;
- (void)showWithLocalVideoUrl:(id)arg1;

@end

