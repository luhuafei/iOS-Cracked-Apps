//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView, UIView;

@interface KGFMCategoryTableViewController : KGViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_categoryArr;
    UIView *_leftRuleView;
    long long _selectedIndex;
    long long _oldSelectedIndex;
    UITableView *_fmCategoryTableView;
    id <KGFM_CategoryDelegate> _delegate;
}

@property(nonatomic) __weak id <KGFM_CategoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *fmCategoryTableView; // @synthesize fmCategoryTableView=_fmCategoryTableView;
- (void).cxx_destruct;
- (void)didSelectClassIndex:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addLeftRuleView;
- (void)initTableViewUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

