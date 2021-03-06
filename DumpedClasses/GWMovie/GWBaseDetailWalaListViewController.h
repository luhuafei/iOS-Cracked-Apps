//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "GWDramaTheatrePictureDelegate-Protocol.h"
#import "GWMovieWalaViewDelegate-Protocol.h"

@class GWGetCommentListV6Provider, GWMovieDBForComment, GWMovieDraftDBForComment, NSMutableArray, NSMutableDictionary, NSString;
@protocol GWAppTypeDelegate;

@interface GWBaseDetailWalaListViewController : GWBaseTableViewController <GWDramaTheatrePictureDelegate, GWMovieWalaViewDelegate>
{
    _Bool _isLoadFirstWala;
    id <GWAppTypeDelegate> _relatedInfo;
    CDUnknownBlockType _viewAppearBlock;
    GWGetCommentListV6Provider *_walaListProvider;
    GWMovieDraftDBForComment *_draftCommentDB;
    GWMovieDBForComment *_successCommentDB;
    NSMutableArray *_sectionArray;
    NSMutableDictionary *_sectionDict;
    NSMutableArray *_walaListArray;
    NSMutableDictionary *_walaHeightDic;
}

@property(nonatomic) _Bool isLoadFirstWala; // @synthesize isLoadFirstWala=_isLoadFirstWala;
@property(retain, nonatomic) NSMutableDictionary *walaHeightDic; // @synthesize walaHeightDic=_walaHeightDic;
@property(retain, nonatomic) NSMutableArray *walaListArray; // @synthesize walaListArray=_walaListArray;
@property(retain, nonatomic) NSMutableDictionary *sectionDict; // @synthesize sectionDict=_sectionDict;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) GWMovieDBForComment *successCommentDB; // @synthesize successCommentDB=_successCommentDB;
@property(retain, nonatomic) GWMovieDraftDBForComment *draftCommentDB; // @synthesize draftCommentDB=_draftCommentDB;
@property(retain, nonatomic) GWGetCommentListV6Provider *walaListProvider; // @synthesize walaListProvider=_walaListProvider;
@property(copy, nonatomic) CDUnknownBlockType viewAppearBlock; // @synthesize viewAppearBlock=_viewAppearBlock;
@property(retain, nonatomic) id <GWAppTypeDelegate> relatedInfo; // @synthesize relatedInfo=_relatedInfo;
- (void).cxx_destruct;
- (void)voiceClick:(id)arg1;
- (void)createTableNoWalaView;
- (_Bool)showNoWalaView;
- (void)addNoWalaView;
- (void)showMessageIfNeed;
- (void)walaViewButtonClicked:(id)arg1 walaView:(id)arg2;
- (id)tableView:(id)arg1 withIdentifier:(id)arg2;
- (void)commentDeleteDraft;
- (void)walaCellActionSheet;
- (void)gotoWriteWalaViewController;
- (void)gotoCommentDetailVc:(id)arg1 reloadTableViewBlock:(CDUnknownBlockType)arg2 isScrollToReplayPosition:(_Bool)arg3;
- (void)configWalaCellWithWala:(id)arg1 cell:(id)arg2;
- (void)updateCommentDB;
- (_Bool)hasSuccessWala;
- (_Bool)hasDraftWala;
- (void)walaView:(id)arg1 userHeadViewClicked:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tag;
- (void)requestWalaListInfo:(_Bool)arg1;
- (id)filterSuccessCommentWithArray:(id)arg1;
- (void)createSectionArray;
- (void)didReceiveMemoryWarning;
- (void)startLoadWala;
- (void)beginRefreshFromFooter;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

