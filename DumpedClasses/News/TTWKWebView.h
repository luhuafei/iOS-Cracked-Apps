//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKWebView.h"

@interface TTWKWebView : WKWebView
{
    _Bool _overridecanBecomeFirstResponder;
}

@property(nonatomic) _Bool overridecanBecomeFirstResponder; // @synthesize overridecanBecomeFirstResponder=_overridecanBecomeFirstResponder;
- (void)layoutSubviews;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
- (_Bool)canBecomeFirstResponder;

@end
