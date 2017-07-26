//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelButtonAdapter.h"

#import "CTWebImageViewDelegate.h"

@class CTHotelDetailCacheBean, CTHotelInnDetailViewController, CTWebImageView, NSString, UIButton;

@interface CTHotelInnPropagandaAdapter : CTHotelButtonAdapter <CTWebImageViewDelegate>
{
    CTWebImageView *receiveView;
    CTWebImageView *couponView;
    UIButton *closeBtn;
    CTHotelInnDetailViewController *_rootVC;
    CTHotelDetailCacheBean *_cacheBean;
}

@property(nonatomic) __weak CTHotelDetailCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(nonatomic) __weak CTHotelInnDetailViewController *rootVC; // @synthesize rootVC=_rootVC;
- (void).cxx_destruct;
- (_Bool)showPropagranda:(id)arg1;
- (void)openViewsHidden;
- (void)openPropaganda;
- (void)closePropaganda;
- (void)webImageViewClick:(id)arg1;
- (void)closeBtnAction:(id)arg1;
- (void)doButtonEvent:(id)arg1;
- (id)getView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
