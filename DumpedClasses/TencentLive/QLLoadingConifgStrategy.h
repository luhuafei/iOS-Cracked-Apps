//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLLoadingConifgProtocol.h"

@class NSString, QLJCELoadingConfig;

@interface QLLoadingConifgStrategy : NSObject <QLLoadingConifgProtocol>
{
    QLJCELoadingConfig *_loadingConfig;
}

@property(retain, nonatomic) QLJCELoadingConfig *loadingConfig; // @synthesize loadingConfig=_loadingConfig;
- (void).cxx_destruct;
- (_Bool)isImageReady:(id)arg1;
- (void)downloadImage:(id)arg1;
- (id)configLoadingSpeedColor;
- (_Bool)shouldShowConfigLoadingViewColor;
- (id)configLoadingGifView;
- (_Bool)shouldShowConfigLoadingView;
- (void)updateCurrentLoadingConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

