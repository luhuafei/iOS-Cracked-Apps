//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTActivityPanelDelegate.h"

@class NSString, UIImage;

@interface TTShareManager : NSObject <TTActivityPanelDelegate>
{
    UIImage *_defaultShareImage;
    NSString *_weiboShareRedirectURI;
    id <TTShareManagerDelegate> _delegate;
    id <TTActivityPanelControllerProtocol> _panelController;
    NSString *_panelClassName;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *panelClassName; // @synthesize panelClassName=_panelClassName;
@property(retain, nonatomic) id <TTActivityPanelControllerProtocol> panelController; // @synthesize panelController=_panelController;
@property(nonatomic) __weak id <TTShareManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *weiboShareRedirectURI; // @synthesize weiboShareRedirectURI=_weiboShareRedirectURI;
@property(retain, nonatomic) UIImage *defaultShareImage; // @synthesize defaultShareImage=_defaultShareImage;
- (void).cxx_destruct;
- (void)activityPanel:(id)arg1 completedWith:(id)arg2 error:(id)arg3 desc:(id)arg4;
- (void)activityPanel:(id)arg1 clickedWith:(id)arg2;
- (void)shareToActivity:(id)arg1 presentingViewController:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)displayActivitySheetWithContent:(id)arg1;
- (_Bool)checkContentIsValid:(id)arg1;
- (void)addUserDefinedActivity:(id)arg1;
- (void)addUserDefinedActivitiesFromArray:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

