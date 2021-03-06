//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QMMapView, QUserLocation, UIColor, UIImage;

@interface QUserLocationView : UIView
{
    QUserLocation *_annotation;
    QMMapView *_mapView;
}

@property(nonatomic) __weak QMMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) QUserLocation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)resetCircleColor;
- (void)resetLocationImages;
@property(retain, nonatomic) UIColor *circleColor;
@property(retain, nonatomic) UIImage *failurelocationImage;
@property(retain, nonatomic) UIImage *locationImage;
@property(retain, nonatomic) NSString *pathForFailurelocationImage;
@property(retain, nonatomic) NSString *pathForLocationImage;
- (id)initWithMapView:(id)arg1 annotation:(id)arg2;

@end

