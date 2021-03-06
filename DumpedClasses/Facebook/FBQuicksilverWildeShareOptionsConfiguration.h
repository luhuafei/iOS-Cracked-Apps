//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBQuicksilverShareOptionsConfiguration-Protocol.h"

@class FBQuicksilverViewController, FBUserSession, NSString;
@protocol FBIntentHandler, FBNavigationCoordinator;

@interface FBQuicksilverWildeShareOptionsConfiguration : NSObject <FBQuicksilverShareOptionsConfiguration>
{
    NSString *_gameID;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBUserSession *_session;
    id <FBIntentHandler> _rootIntentHandler;
    id _currentHandler;
    FBQuicksilverViewController *_viewController;
}

@property(nonatomic) __weak FBQuicksilverViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)actionSheetButtonItemsForCustomShareWithCustomShareDataProvider:(id)arg1;
- (id)actionSheetButtonItemsForScoreShareWithScoreShareDataProvider:(id)arg1;
- (id)actionSheetButtonItemsForGameShareWithGameAppID:(id)arg1;
- (id)clientEventNameForGameShare;
- (id)clientEventNameForGameScoreShare;
- (id)initWithGameID:(id)arg1 navigationCoordinator:(id)arg2 session:(id)arg3 rootIntentHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

