//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDKBaseURLConnectionDelegate.h"

@class NSMutableDictionary, NSString, OpenSDKRequest, TCSignalChannelHelper;

@interface AuthorizationRequest : NSObject <SDKBaseURLConnectionDelegate>
{
    OpenSDKRequest *_httpRequest;
    NSString *_currentRequestType;
    TCSignalChannelHelper *_authApiListSignalChannelHelper;
    TCSignalChannelHelper *_sdkAuthSignalChannelHelper;
    TCSignalChannelHelper *_appInfoSignalChannelHelper;
    NSMutableDictionary *_reqRecord;
    id <RequestDelegate> _delegate;
}

@property(nonatomic) id <RequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stringLossyAllowedWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)generatePostBody:(id)arg1;
- (void)didConnectionFailed:(id)arg1;
- (void)didConnectionFinished;
- (void)Cancle;
- (void)GetHead:(long long)arg1 andSkey:(id)arg2;
- (_Bool)GetAppIcon:(id)arg1 appId:(id)arg2 sdkP:(id)arg3 icons:(id)arg4;
- (_Bool)GetAurhorizationInfo:(id)arg1;
- (_Bool)SetAurhorization:(id)arg1 openapi:(id)arg2 select:(_Bool)arg3;
- (void)getAppInfo:(id)arg1;
- (void)sdkAuthNotify:(id)arg1;
- (void)getAuthApiListNotify:(id)arg1;
- (void)setAppInfoSignalChannelHelper:(id)arg1;
- (void)setSdkAuthSignalChannelHelper:(id)arg1;
- (void)setAuthApiListSignalChannelHelper:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

