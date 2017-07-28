//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHPostModel.h"

@class XYPHPostVideoModelVideo;

@interface XYPHPostVideoModel : XYPHPostModel
{
    XYPHPostVideoModelVideo *_video;
}

@property(retain, nonatomic) XYPHPostVideoModelVideo *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endPostSession;
- (void)startPostSession;
- (id)coverImageOrImageUrl;
- (void)postToServer:(CDUnknownBlockType)arg1;
- (_Bool)canSaveToDraft:(id *)arg1;
- (_Bool)canPost:(id *)arg1;
- (_Bool)isEmpty;
- (void)postInfoToServer:(CDUnknownBlockType)arg1;
- (void)postVideoToServer:(CDUnknownBlockType)arg1;
- (void)postCoverToServer:(CDUnknownBlockType)arg1;
- (double)getProgress;
- (void)setPostStatusToSuccess:(id)arg1;
- (void)setPostStatusToFailed:(id)arg1;
- (_Bool)videoChange;
- (id)generalDisplayVideoByAsset:(id)arg1 start:(double)arg2 end:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (int)addVideoByAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 exportPorgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addVideoTimer:(id)arg1;
- (id)updateCover:(id)arg1;
- (void)setUploadVideoProgress:(double)arg1;
- (double)uploadVideoProgress;
- (id)coverTask;
- (void)setCoverTask:(id)arg1;
- (id)apiClient;
- (void)setApiClient:(id)arg1;

@end
