//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBSearchSectionTitleTableViewCellDelegate-Protocol.h"
#import "FBSearchSuggestionTableViewCellDelegate-Protocol.h"
#import "FBSimpleSearchContentViewController-Protocol.h"

@class FBContentInsetTracker, FBKVOController, FBLoadingIndicatorView, FBNuxController, FBSearchContext, FBSimpleSearchKeyHandler, FBSimpleSearchNullStateAddOnItem, FBSimpleSearchTableViewData, FBUserSession, NSString, UIView;
@protocol FBSimpleSearchContentViewControllerDelegate><FBSearchSuggestionTableViewCellDelegate;

@interface FBSimpleSearchNullStateViewController : UITableViewController <FBSearchSectionTitleTableViewCellDelegate, FBSearchSuggestionTableViewCellDelegate, FBAccessibilityInvalidationEventsListener, FBSimpleSearchContentViewController>
{
    FBUserSession *_session;
    FBSearchContext *_searchContext;
    UIView *_emptyTableFooterView;
    FBLoadingIndicatorView *_loadingIndicatorView;
    unsigned long long _loadingState;
    FBSimpleSearchTableViewData *_suggestionData;
    FBKVOController *_KVOController;
    FBContentInsetTracker *_tableViewInsetTracker;
    unsigned long long _impressionCount;
    FBSimpleSearchNullStateAddOnItem *_qrcodeItem;
    FBNuxController *_nuxController;
    FBSimpleSearchKeyHandler *_keyHandler;
    _Bool _cellSelectionDisabled;
    double _topOffset;
    id <FBSimpleSearchContentViewControllerDelegate><FBSearchSuggestionTableViewCellDelegate> _delegate;
    NSString *_typeaheadSessionID;
    NSString *_candidateSessionID;
}

@property(nonatomic) _Bool cellSelectionDisabled; // @synthesize cellSelectionDisabled=_cellSelectionDisabled;
@property(copy, nonatomic) NSString *candidateSessionID; // @synthesize candidateSessionID=_candidateSessionID;
@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
@property(nonatomic) __weak id <FBSimpleSearchContentViewControllerDelegate><FBSearchSuggestionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (void).cxx_destruct;
- (void)_openAddOnItem:(id)arg1;
- (id)_dataWithAddOn;
- (_Bool)shouldShowQREntryPoint;
- (void)_logNullStateReadiness:(_Bool)arg1;
- (void)_handleNullStateReadiness;
- (void)_refreshNullStateData;
- (void)_updateLoadingState:(unsigned long long)arg1;
- (_Bool)_shouldDisplayEditRecentSearchesButton:(id)arg1;
- (void)_setupQRCodeTooltipForCell:(id)arg1;
- (void)searchSuggestionTableViewCell:(id)arg1 didPerformAction:(unsigned long long)arg2 forSuggestion:(id)arg3;
- (void)editRecentSearchesForSearchSectionTitleTableViewCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveAccessibilityInvalidation;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)analyticsModule;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

