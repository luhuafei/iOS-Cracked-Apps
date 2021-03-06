//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGPrivateChatShareSongSearchDelegate.h"
#import "KGShareSongSelectCellDelegate.h"
#import "KGTableViewDelegate.h"
#import "UITableViewDataSource.h"

@class CollectListEntity, KGTableView, NSCache, NSMutableArray, NSString, PlayBarQueueDisplayView, UIView;

@interface KGPrivateChatShareSongMyCollectionSongsViewController : KGScrollPageViewController <UITableViewDataSource, KGTableViewDelegate, KGShareSongSelectCellDelegate, KGPrivateChatShareSongSearchDelegate>
{
    KGTableView *_songsTableView;
    PlayBarQueueDisplayView *_barDisplayView;
    _Bool _isTrylistenSong;
    CollectListEntity *_listEntity;
    NSMutableArray *_listSongs;
    NSCache *_queryResults;
    _Bool _isSelfBuildMyFavorite;
    id <KGPrivateChatShareSongMyCollectionSongDelegate> _shareSongMyCollectionSongDelegate;
    UIView *_noContentView;
}

@property(retain, nonatomic) UIView *noContentView; // @synthesize noContentView=_noContentView;
@property(nonatomic) _Bool isSelfBuildMyFavorite; // @synthesize isSelfBuildMyFavorite=_isSelfBuildMyFavorite;
@property(nonatomic) __weak id <KGPrivateChatShareSongMyCollectionSongDelegate> shareSongMyCollectionSongDelegate; // @synthesize shareSongMyCollectionSongDelegate=_shareSongMyCollectionSongDelegate;
- (void).cxx_destruct;
- (void)doSelectSongShare:(id)arg1;
- (void)showSearchSongSheet:(id)arg1 andOriginSongName:(id)arg2;
- (void)handleSongShareQueryResult:(id)arg1 withResultType:(long long)arg2;
- (void)handleSongListenQueryResult:(id)arg1 withResultType:(long long)arg2;
- (void)tryToDoSongListenQuery:(id)arg1;
- (long long)queryMatchingTypeWithSongInfo:(id)arg1;
- (void)saveQueryMatchingType:(long long)arg1 withSongInfo:(id)arg2;
- (void)showNoContentView:(_Bool)arg1;
- (void)loadListSongsFromBLL;
- (void)didSearchSongShare:(id)arg1;
- (void)didShareSong:(id)arg1 shareSong:(id)arg2;
- (void)didStopSong:(id)arg1 stopSong:(id)arg2;
- (void)didListenSong:(id)arg1 listenSong:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addCustomConstraint;
- (long long)showPlayBarWay;
- (void)didReceiveMemoryWarning;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (id)initWithPageCollection:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

