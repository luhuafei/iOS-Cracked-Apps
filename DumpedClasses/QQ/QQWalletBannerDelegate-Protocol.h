//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQWalletBanner, QQWalletBannerView;

@protocol QQWalletBannerDelegate <NSObject>

@optional
- (void)bannerView:(QQWalletBannerView *)arg1 didBannerTimeup:(QQWalletBanner *)arg2;
- (void)bannerView:(QQWalletBannerView *)arg1 didUserTouchEnd:(QQWalletBanner *)arg2;
- (void)bannerView:(QQWalletBannerView *)arg1 didUserTouchBegin:(QQWalletBanner *)arg2;
- (void)bannerView:(QQWalletBannerView *)arg1 didUserTapViewWith:(QQWalletBanner *)arg2;
- (void)bannerView:(QQWalletBannerView *)arg1 didUserCanceledWithAD:(QQWalletBanner *)arg2;
@end
