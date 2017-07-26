//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "MUKTitleSwitchCellDelegate.h"
#import "TBAMPEditDelegate.h"
#import "TBIMGroupServiceDelegate.h"
#import "TBIMMemberTileCellDelegate.h"
#import "TBIMMessageServiceDelegate.h"
#import "TBIMSessionServiceDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GPUImageView, HUDActivityView, NSMutableArray, NSString, TBIMGroupTitleView, TBIMMemberTileModel, TBIMUpdateNavigationBar, UIImageView, UILabel, UITableView;

@interface TBChatGroupInfoViewController : TBViewController <UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, TBIMGroupServiceDelegate, TBAMPEditDelegate, TBIMMessageServiceDelegate, TBIMSessionServiceDelegate, TBIMMemberTileCellDelegate, MUKTitleSwitchCellDelegate>
{
    NSMutableArray *_itemImageList;
    NSString *_groupId;
    NSString *_editPageTitle;
    NSString *_selfGroupUserName;
    unsigned long long _selfIdentity;
    _Bool _selfIsRemind;
    _Bool _isATRemind;
    _Bool _isManagerRemind;
    UITableView *_tableView;
    NSMutableArray *_friendsArray;
    TBIMMemberTileModel *_memberTileModel;
    TBIMMemberTileModel *_itemsTileModel;
    id <TBIMGroupAdapter> _groupInfo;
    id <TBIMMessageServiceAdapter> _messageService;
    HUDActivityView *_hudView;
    id <TBIMGroupServiceAdapter> _groupService;
    id <TBIMSessionServiceAdapter> _sessionService;
    TBIMGroupTitleView *_titleView;
    GPUImageView *_gpuImageView;
    UIImageView *_groupImageView;
    UILabel *_groupTitleLabel;
    TBIMUpdateNavigationBar *_updateNavigationBar;
    NSString *_currentNewShareItem;
    NSString *_pageName;
}

+ (_Bool)tbNeedNavibar;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *currentNewShareItem; // @synthesize currentNewShareItem=_currentNewShareItem;
@property(retain, nonatomic) TBIMUpdateNavigationBar *updateNavigationBar; // @synthesize updateNavigationBar=_updateNavigationBar;
@property(retain, nonatomic) UILabel *groupTitleLabel; // @synthesize groupTitleLabel=_groupTitleLabel;
@property(retain, nonatomic) UIImageView *groupImageView; // @synthesize groupImageView=_groupImageView;
@property(retain, nonatomic) GPUImageView *gpuImageView; // @synthesize gpuImageView=_gpuImageView;
@property(retain, nonatomic) TBIMGroupTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) id <TBIMSessionServiceAdapter> sessionService; // @synthesize sessionService=_sessionService;
@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupService; // @synthesize groupService=_groupService;
@property(retain, nonatomic) HUDActivityView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) id <TBIMMessageServiceAdapter> messageService; // @synthesize messageService=_messageService;
@property(retain, nonatomic) id <TBIMGroupAdapter> groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) TBIMMemberTileModel *itemsTileModel; // @synthesize itemsTileModel=_itemsTileModel;
@property(retain, nonatomic) TBIMMemberTileModel *memberTileModel; // @synthesize memberTileModel=_memberTileModel;
@property(retain, nonatomic) NSMutableArray *friendsArray; // @synthesize friendsArray=_friendsArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updatePageName;
- (_Bool)isSubGroupOfVirtualGroup:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)ampEdit:(id)arg1 commitAction:(id)arg2;
- (id)pageTitle;
- (void)SessionChange:(id)arg1;
- (void)SessionAdd:(id)arg1;
- (void)cellItemDeleteAtIndex:(long long)arg1;
- (void)groupExitFaild:(id)arg1 error:(id)arg2;
- (void)groupExitSuccess:(id)arg1;
- (void)groupInfoDeleted:(id)arg1;
- (void)groupUserUpdatedFailed:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)groupInfoChange:(id)arg1 fail:(unsigned long long)arg2 error:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initTableView;
- (void)configNavigationBarIfNeed;
- (void)updateTableViewHeaderViewIfNeed;
- (void)configTableViewHeaderViewIfNeed;
- (void)hideOriginNavigationBarIfNeed;
- (_Bool)isCommonGroup;
- (void)setUpMemberTileModel;
- (void)setUpitemsTileModel;
- (void)updateMemberList;
- (void)exitGroup;
- (void)cleanMessageRecord;
- (void)setManagerRemind:(_Bool)arg1;
- (void)setATRemind:(_Bool)arg1;
- (void)receiveMessage;
- (void)preventMessage;
- (void)clearDelegateAndNotify;
- (void)gotoGroupMemberPage;
- (void)deleteFriendAction;
- (void)addFriendAction;
- (void)editAction:(id)arg1 placeHolder:(id)arg2 contentType:(id)arg3;
- (void)updateTitleLabelWithIsRemind:(_Bool)arg1;
- (void)refreashSection:(id)arg1 animation:(_Bool)arg2;
- (void)titleSwitchCell:(id)arg1 switchChange:(_Bool)arg2;
- (void)messageLoadShareItemMessageResult:(id)arg1 andMsg:(id)arg2;
- (void)didSelectDeletedViewWithMemberTileView:(id)arg1;
- (void)didSelectAddedViewWithMemberTileView:(id)arg1;
- (void)memberTileView:(id)arg1 didSelectViewModel:(id)arg2;
- (void)exitGroupSheet:(id)arg1;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (long long)tbfestival_defaultStatusBarStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewDidUnload;
- (void)reflushStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGroupId:(id)arg1 currentNewShareItem:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
