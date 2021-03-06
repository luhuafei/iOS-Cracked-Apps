//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"

@class NSString;

@interface MQQGuideHelpViewController : MQQBaseViewController <MQQAlertViewDelegate>
{
    long long _type;
    _Bool _isOrigin;
}

@property(nonatomic) _Bool isOrigin; // @synthesize isOrigin=_isOrigin;
- (void)loadTodayCallerContentInView:(id)arg1;
- (void)loadCallBlockerActionContentInView:(id)arg1;
- (void)loadFreeWiFiContentInView:(id)arg1;
- (void)loadStorageContentInView:(id)arg1;
- (void)loadShortcutContentInView:(id)arg1;
- (void)loadPhotoCleanContentInView:(id)arg1 helpType:(long long)arg2;
- (void)loadNotificationContentInView:(id)arg1;
- (void)loadPhotoContentInView:(id)arg1;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)goBack;
- (void)loadContentWithTopTitle:(id)arg1 tipsArray:(id)arg2 imagesArray:(id)arg3 inView:(id)arg4;
- (void)loadContentWithTipsArray:(id)arg1 imagesArray:(id)arg2 inView:(id)arg3;
- (void)loadContent;
- (long long)resultTypeWithGuideHelpType:(long long)arg1;
- (void)doneButtonClicked:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithGuideHelpType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

