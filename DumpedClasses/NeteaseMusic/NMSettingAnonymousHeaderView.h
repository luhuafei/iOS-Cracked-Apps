//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMAnonymousLoginFrameViewDelegate.h"

@class NMAnonymousLoginFrameView, NSString;

@interface NMSettingAnonymousHeaderView : UIView <NMAnonymousLoginFrameViewDelegate>
{
    id <NMAnonymousLoginFrameViewDelegate> _delegate;
    UIView *_bgView;
    NMAnonymousLoginFrameView *_loginView;
}

+ (double)height;
@property(nonatomic) __weak id <NMAnonymousLoginFrameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginButtonClickedInLoginFrameView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
