//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QShape.h"

#import "QOverlay-Protocol.h"

@class NSString;

@interface QCircle : QShape <QOverlay>
{
    double _radius;
    CDStruct_2c43369c _coordinate;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)circleWithMapRect:(CDStruct_02837cd9)arg1;
+ (id)circleWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
@property(nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)initWithWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (void)calculateBoundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

