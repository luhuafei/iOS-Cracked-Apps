//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQReadInJoyVideoViewDelegate.h"
#import "QQTVVideoStateViewDelegate.h"

@class NSString, NSURL, QQReadInJoyVideoStateView, QQReadInJoyVideoView, UINavigationBar;

@interface QQTVVideoViewController : QQViewController <QQReadInJoyVideoViewDelegate, QQTVVideoStateViewDelegate>
{
    QQReadInJoyVideoView *_videoView;
    QQReadInJoyVideoStateView *_stateView;
    UINavigationBar *_navigationBar;
    NSURL *_videoProxyURL;
    int _playId;
    id <QQTVVideoViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <QQTVVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mediaPlayer:(id)arg1 didChangeStateTo:(int)arg2;
- (void)onPlayVideoErrorWithErrorCode:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)isSupportFullScreenLayout;
- (void)leftButtonClick:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setVideoViewMute;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)setControlViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)closeAction;
- (id)initWithProxyURL:(id)arg1;
- (id)initWithRemoteURL:(id)arg1 cookie:(id)arg2 uuid:(id)arg3 fileSize:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
