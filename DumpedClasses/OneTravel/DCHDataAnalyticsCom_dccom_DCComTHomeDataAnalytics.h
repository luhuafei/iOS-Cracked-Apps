//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseComponent.h"

@interface DCHDataAnalyticsCom_dccom_DCComTHomeDataAnalytics : DCBaseComponent
{
    _Bool _canUploadDataAnlyz;
    _Bool _canUploadBannerShow;
}

@property(nonatomic) _Bool canUploadBannerShow; // @synthesize canUploadBannerShow=_canUploadBannerShow;
@property(nonatomic) _Bool canUploadDataAnlyz; // @synthesize canUploadDataAnlyz=_canUploadDataAnlyz;
- (void)uploadBannerShow;
- (void)uploadDataAnalytics;
- (void)listDataUpdateIsCache:(_Bool)arg1;

// Remaining properties
@property(nonatomic, setter=bindDelegate:) __weak id <DCHDataAnalyticsDelegate> delegate; // @dynamic delegate;

@end

