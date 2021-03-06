//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMemGroup, FBUserSession, NSArray, UIViewController;
@protocol FBComposerFlowDelegate;

@interface FBGroupsShareActionHandler : NSObject
{
    FBUserSession *_session;
    FBMemGroup *_group;
    UIViewController *_hostingViewController;
    id <FBComposerFlowDelegate> _composerViewControllerDelegate;
    NSArray *_shareOptions;
}

- (void).cxx_destruct;
- (void)_shareInPostTapped;
- (void)_sendAsMessageTapped;
- (void)_copyLinkTapped;
- (void)_presentShareOptionsFromView:(id)arg1;
- (void)presentShareOptionsFromView:(id)arg1;
- (void)presentShareOptions;
- (id)initWithSession:(id)arg1 group:(id)arg2 hostingViewController:(id)arg3 composerViewControllerDelegate:(id)arg4;

@end

