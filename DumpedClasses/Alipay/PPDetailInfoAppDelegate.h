//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"

@class NSDictionary, NSString, UIViewController;

@interface PPDetailInfoAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    _Bool _isRestartApp;
    UIViewController *_rootController;
    NSDictionary *_restartLaunchOptions;
}

@property(nonatomic) _Bool isRestartApp; // @synthesize isRestartApp=_isRestartApp;
@property(retain, nonatomic) NSDictionary *restartLaunchOptions; // @synthesize restartLaunchOptions=_restartLaunchOptions;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

