//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAuthHeaderContentFooterViewController.h"

#import "FBAuthUIPresentingConfigurable-Protocol.h"
#import "FBDBLPasswordViewControllerProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBAuthenticationRoundedImageView, FBDBLPasswordView, FBDBLStoredUser, FBImageDownloader, NSError, NSString, UITapGestureRecognizer;
@protocol FBDBLPasswordAuthenticating, FBDBLViewConfiguring;

@interface FBDBLPasswordViewController : FBAuthHeaderContentFooterViewController <UITextFieldDelegate, FBAuthUIPresentingConfigurable, FBDBLPasswordViewControllerProtocol>
{
    id <FBDBLViewConfiguring> _configuration;
    FBImageDownloader *_imageDownloader;
    FBAuthenticationRoundedImageView *_userImageView;
    NSError *_error;
    UITapGestureRecognizer *_recognizer;
    _Bool _alertShown;
    id <FBDBLPasswordAuthenticating> _authDelegate;
    FBDBLStoredUser *_userInfo;
    FBDBLPasswordView *_passwordView;
    NSString *_errorTitle;
    NSString *_errorMessage;
    CDUnknownBlockType _backButtonCallback;
}

@property(nonatomic) _Bool alertShown; // @synthesize alertShown=_alertShown;
@property(copy, nonatomic) CDUnknownBlockType backButtonCallback; // @synthesize backButtonCallback=_backButtonCallback;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, copy, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(readonly, nonatomic) FBDBLPasswordView *passwordView; // @synthesize passwordView=_passwordView;
@property(readonly, nonatomic) FBDBLStoredUser *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <FBDBLPasswordAuthenticating> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)_resignAnyFirstResponder;
- (void)_textChanged:(id)arg1;
- (void)_submitLogin;
- (_Bool)_canSubmitLogin;
- (void)_helpTapped:(id)arg1;
- (void)_backTapped:(id)arg1;
- (void)_loginTapped:(id)arg1;
- (id)analyticsModule;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithUserInfo:(id)arg1 error:(id)arg2 configuration:(id)arg3 imageDownloader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

