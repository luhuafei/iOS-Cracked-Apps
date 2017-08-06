//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVChorusAccAttachCellDelegate.h"
#import "KTVChorusAccCellDelegate.h"
#import "KTVTableViewDataSource.h"
#import "KTVTableViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class KGDefaultNetErrorView, KTVChorusInfoHeaderView, KTVCommonTableViewRE, KTVEmptyView, NSIndexPath, NSString;

@interface KTVChorusAccView : UIView <KTVTableViewDataSource, KTVTableViewDelegate, KTVChorusAccAttachCellDelegate, KTVChorusAccCellDelegate, UIAlertViewDelegate>
{
    KTVCommonTableViewRE *_tableView;
    id <KTVChorusAccViewDataSource> _dataSource;
    id <KTVChorusAccViewDelegate> _delegate;
    NSIndexPath *_menuIndexPath;
    KTVEmptyView *_emptyView;
    KGDefaultNetErrorView *_netErrorView;
    NSIndexPath *_curIndexPath;
    KTVChorusInfoHeaderView *_headerView;
}

@property(retain, nonatomic) KTVChorusInfoHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSIndexPath *curIndexPath; // @synthesize curIndexPath=_curIndexPath;
@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) KTVEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSIndexPath *menuIndexPath; // @synthesize menuIndexPath=_menuIndexPath;
@property(nonatomic) __weak id <KTVChorusAccViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <KTVChorusAccViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) KTVCommonTableViewRE *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didEditClickEvent:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)attachCell:(id)arg1 withActionType:(int)arg2;
- (void)ktvTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)insertMenuCellUsingAnimationForIndexPath:(id)arg1;
- (void)closeCurrentMenuCell;
- (void)actionEmptyClick:(id)arg1;
- (void)createEmptyView;
- (void)reflash:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
