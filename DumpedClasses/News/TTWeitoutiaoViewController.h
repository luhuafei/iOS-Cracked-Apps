//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "ExploreMixedListBaseViewDelegate.h"
#import "TTInteractExitProtocol.h"

@class ExploreMixedListBaseView, NSString, SSThemedLabel, TTAlphaThemedButton, TTWeitoutiaoHeaderContainerScrollView, TTWeitoutiaoPostUGCTopEntranceView, TTWeitoutiaoViewModel, TTWriteButton;

@interface TTWeitoutiaoViewController : SSViewControllerBase <ExploreMixedListBaseViewDelegate, TTInteractExitProtocol>
{
    _Bool _hasLoadLocalData;
    SSThemedLabel *_titleLabel;
    TTAlphaThemedButton *_rightButton;
    TTWeitoutiaoHeaderContainerScrollView *_headerContainerScrollView;
    TTWeitoutiaoPostUGCTopEntranceView *_postUGCTopEntranceView;
    ExploreMixedListBaseView *_mixedListView;
    TTWriteButton *_postWeitoutiaoButton;
    TTWeitoutiaoViewModel *_viewModel;
}

@property(retain, nonatomic) TTWeitoutiaoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool hasLoadLocalData; // @synthesize hasLoadLocalData=_hasLoadLocalData;
@property(retain, nonatomic) TTWriteButton *postWeitoutiaoButton; // @synthesize postWeitoutiaoButton=_postWeitoutiaoButton;
@property(retain, nonatomic) ExploreMixedListBaseView *mixedListView; // @synthesize mixedListView=_mixedListView;
@property(retain, nonatomic) TTWeitoutiaoPostUGCTopEntranceView *postUGCTopEntranceView; // @synthesize postUGCTopEntranceView=_postUGCTopEntranceView;
@property(retain, nonatomic) TTWeitoutiaoHeaderContainerScrollView *headerContainerScrollView; // @synthesize headerContainerScrollView=_headerContainerScrollView;
@property(retain, nonatomic) TTAlphaThemedButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)suitableFinishBackView;
- (void)showColdStartPage;
- (void)mixListViewWillScrollToTop:(id)arg1;
- (void)postWeitoutiaoButtonClicked:(id)arg1;
- (void)rightButtonClicked:(id)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)postUGCPermissionUpdateNotification:(id)arg1;
- (void)tabbarKeepClick:(id)arg1;
- (void)weitoutiaoTabbarTapped:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)removeNotifications;
- (void)registerNotifications;
- (void)showOrHidePostUGCTopEntrance;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
