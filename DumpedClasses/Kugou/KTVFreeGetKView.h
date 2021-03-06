//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVTableViewDataSource.h"
#import "KTVTableViewDelegate.h"

@class KGDefaultNetErrorView, KTVCommonTableViewRE, KtvSpecialOfferVM, NSMutableArray, NSString;

@interface KTVFreeGetKView : UIView <KTVTableViewDataSource, KTVTableViewDelegate>
{
    NSMutableArray *dataArray;
    NSMutableArray *dataHeightArray;
    KTVCommonTableViewRE *tableview;
    KtvSpecialOfferVM *rechargeOption;
    id <KTVFreeGetKViewDelagate> _delegate;
    KGDefaultNetErrorView *_errorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) __weak id <KTVFreeGetKViewDelagate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionInviteSong;
- (void)actionSing;
- (void)actionLogin;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (void)setFreeTip:(id)arg1;
- (id)scrollView;
- (void)refreshData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

