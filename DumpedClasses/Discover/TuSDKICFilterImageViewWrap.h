//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TuSDKICFilterImageViewInterface.h"

@class NSString, TuSDKICFilterImageView;

@interface TuSDKICFilterImageViewWrap : UIView <TuSDKICFilterImageViewInterface>
{
    TuSDKICFilterImageView *_gpuView;
}

- (void).cxx_destruct;
- (void)requestRender;
@property(nonatomic) _Bool enableTouchCleanFilter;
- (void)setFilterWrap:(id)arg1;
- (void)setImage:(id)arg1;
- (void)needUpdateLayout;
- (id)setSizeHeight:(double)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

