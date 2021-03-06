//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseAutoPlayImageView.h"

@class NSString, UIImageView, UIView;

@interface QZAutoPlayGifView : QZBaseAutoPlayImageView
{
    _Bool _isPaused;
    double _playedAccumulateTime;
    id _imageData;
    _Bool _shouldAutoPlay;
    long long _dataType;
    _Bool _isForwardPlay;
    UIImageView *_displayView;
    struct CGSize _gifSize;
    _Bool _shouldCleanCache;
    _Bool _lazyLoad;
    _Bool _skipCheckRectCanPlay;
    _Bool _isControlledByGyro;
    _Bool _forbidPlay;
    long long _state;
    NSString *_gifURL;
    NSString *_gifURLKey;
    long long _autoPlayAnimationCount;
    id _dataSource;
    id <QZAutoPlayGifViewDelegate> _delegate;
    UIView *_gifPositionView;
    long long _playedTimes;
}

@property(nonatomic) long long playedTimes; // @synthesize playedTimes=_playedTimes;
@property(nonatomic) _Bool forbidPlay; // @synthesize forbidPlay=_forbidPlay;
@property(nonatomic) _Bool isControlledByGyro; // @synthesize isControlledByGyro=_isControlledByGyro;
@property(nonatomic) _Bool skipCheckRectCanPlay; // @synthesize skipCheckRectCanPlay=_skipCheckRectCanPlay;
@property(nonatomic) __weak UIView *gifPositionView; // @synthesize gifPositionView=_gifPositionView;
@property(nonatomic) __weak id <QZAutoPlayGifViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property long long autoPlayAnimationCount; // @synthesize autoPlayAnimationCount=_autoPlayAnimationCount;
@property(retain, nonatomic) UIImageView *displayView; // @synthesize displayView=_displayView;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSString *gifURLKey; // @synthesize gifURLKey=_gifURLKey;
@property(retain, nonatomic) NSString *gifURL; // @synthesize gifURL=_gifURL;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool lazyLoad; // @synthesize lazyLoad=_lazyLoad;
- (void).cxx_destruct;
- (void)setFirstFrameWithUrl:(id)arg1;
- (void)setGifFrameDuration:(double)arg1 playDirection:(long long)arg2;
- (void)play;
- (void)checkToPlay;
- (_Bool)checkRectCanPlay;
- (void)playGifToEnd:(id)arg1;
- (void)setCurrentImage:(id)arg1;
- (void)playImage:(id)arg1;
- (void)ensureDisplayView:(struct CGSize)arg1;
- (struct CGRect)calcDisplayViewFrame:(struct CGSize)arg1;
- (_Bool)unuseCrop;
- (_Bool)isImageDataAvailable;
- (void)recycleResource;
- (void)cleanCacheForUrl:(id)arg1;
- (void)stop;
- (void)startGifAutoPlay;
- (void)startLoadGif;
- (void)requestImage;
- (void)dataSource:(id)arg1 shouldCleanCache:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

