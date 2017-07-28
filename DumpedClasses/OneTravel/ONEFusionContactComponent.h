//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"

@class NSMutableDictionary, NSString, ONEFusionWebController;

@interface ONEFusionContactComponent : NSObject <ABPeoplePickerNavigationControllerDelegate>
{
    CDUnknownBlockType _callback;
    ONEFusionWebController *_webController;
    NSMutableDictionary *_selectedInfo;
}

+ (id)sharedComponent;
@property(retain, nonatomic) NSMutableDictionary *selectedInfo; // @synthesize selectedInfo=_selectedInfo;
@property(retain, nonatomic) ONEFusionWebController *webController; // @synthesize webController=_webController;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)openContact;
- (void)showAlertView;
- (void)invokeContact;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
