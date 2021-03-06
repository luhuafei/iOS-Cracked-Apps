//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBWebViewLinkHandler-Protocol.h"

@class NSDictionary, NSString;

@interface FBInternalAppWebLinkHandler : NSObject <FBWebViewLinkHandler>
{
    NSDictionary *_linkMappersByEndpoint;
}

- (void).cxx_destruct;
- (id)viewControllerForURL:(id)arg1 session:(id)arg2;
- (id)urlToLoadForURL:(id)arg1;
- (id)urlToLoadForRequest:(id)arg1;
- (id)initWithLinkMappersByEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

