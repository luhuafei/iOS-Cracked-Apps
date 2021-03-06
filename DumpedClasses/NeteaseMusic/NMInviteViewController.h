//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingTableViewController.h"

#import "OpenPlatformAuthViewControllerDelegate.h"

@class NSMutableArray;

@interface NMInviteViewController : NMSettingTableViewController <OpenPlatformAuthViewControllerDelegate>
{
    NSMutableArray *_destinationArray;
}

- (void).cxx_destruct;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)ssoBindSuccess:(id)arg1;
- (void)bindSnsFail:(id)arg1;
- (void)bindSnsSuccess:(id)arg1;
- (void)showAuthView:(id)arg1;
- (void)showInviteSnsView:(id)arg1;
- (void)backAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

