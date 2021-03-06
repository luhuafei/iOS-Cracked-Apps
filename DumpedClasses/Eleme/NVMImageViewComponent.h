//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMDynamicComponentProvider.h"

@class NSString;

@interface NVMImageViewComponent : NSObject <NVMDynamicComponentProvider>
{
    float _heightWidthRatio;
    NSString *_imageHash;
}

+ (_Bool)isOptional;
+ (id)vendoredCellClasses;
@property(nonatomic) float heightWidthRatio; // @synthesize heightWidthRatio=_heightWidthRatio;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
- (void).cxx_destruct;
- (void)willDisplayCell:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)doLoadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)supportsLoadMore;
- (void)configAttributes:(id)arg1 atIndex:(long long)arg2 startingYCoordinate:(double)arg3;
- (struct CGRect)frameForItemAtIndex:(long long)arg1 startingYCoordinate:(double)arg2 layoutWidth:(double)arg3;
- (double)componentHeightWithWidth:(double)arg1;
- (void)configCell:(id)arg1 forIndex:(long long)arg2 layoutWidth:(double)arg3;
- (Class)cellClassForIndex:(long long)arg1;
- (long long)numberOfCellsInComponent;
- (void)doAPIFetchWithCompletion:(CDUnknownBlockType)arg1;
- (long long)apiFetchStatus;
- (_Bool)setupWithComponentJSON:(id)arg1;
- (void)setupWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

