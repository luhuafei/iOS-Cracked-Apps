//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "O2ODynamicProtocol.h"

@class CAGradientLayer, NSString;

@interface O2OTemplateGradientView : UIView <O2ODynamicProtocol>
{
    CAGradientLayer *gradientLayer;
}

- (void).cxx_destruct;
- (struct CGPoint)getPoint:(id)arg1 defaultPoint:(struct CGPoint)arg2;
- (void)setConfig:(id)arg1 children:(id)arg2 item:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
