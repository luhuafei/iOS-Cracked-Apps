//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HawaiiSCTXDriverUpdatePointsDelegate.h"
#import "SctxRouteDriverProxy.h"

@class DSCTXRouteDriver, NSString, ONEDriverOrderRouteReq;

@interface ONESDSCTXRouteDriver : NSObject <HawaiiSCTXDriverUpdatePointsDelegate, SctxRouteDriverProxy>
{
    id <DIDISCTXRouteDriverCallbackDelegate> _delegate;
    DSCTXRouteDriver *_sctxRouteDriver;
}

@property(retain, nonatomic) DSCTXRouteDriver *sctxRouteDriver; // @synthesize sctxRouteDriver=_sctxRouteDriver;
@property(nonatomic) __weak id <DIDISCTXRouteDriverCallbackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hawaiiSCTXRecoverSCTXRouteRect;
- (void)hawaiiSCTXNotifyNavRouteSearchDidFailWithError:(id)arg1;
- (void)hawaiiSCTXNotifyNavRouteSearchResult:(id)arg1;
- (void)hawaiiSCTXDriverUpdatePointRoutefirst:(struct CLLocationCoordinate2D)arg1 RouteLastPoint:(struct CLLocationCoordinate2D)arg2;
- (void)setPointsArray:(id)arg1;
- (id)getRouteRect;
- (void)testloadRoute:(id)arg1 EventType:(int)arg2;
- (void)recoverSctxRouteRect;
- (void)stop;
- (void)changeDestination:(struct CLLocationCoordinate2D)arg1;
- (void)stop3DNavigation;
- (void)startNavigation;
- (void)start;
@property(retain, nonatomic) ONEDriverOrderRouteReq *driverOrderRouteReq;
@property(nonatomic) float refreshRatio;
@property(nonatomic) float refreshCycle;
@property(nonatomic) int delayRetryCount;
@property(readonly, nonatomic) _Bool is3DNavigation;
@property(nonatomic) _Bool isShowStartEndPoint;
- (id)initWithMapview:(id)arg1 driverOrderRouteReq:(id)arg2 language:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

