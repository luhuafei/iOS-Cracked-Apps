//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DiTextAnnotationView.h"

#import "ONESBaseTextAnnotationViewProtocol.h"

@class NSString, ONESBaseTextAnnotationView;

@interface ONESDTextAnnotationView : DiTextAnnotationView <ONESBaseTextAnnotationViewProtocol>
{
    ONESBaseTextAnnotationView *_baseTextAnnotationView;
}

@property(readonly, nonatomic) ONESBaseTextAnnotationView *baseTextAnnotationView; // @synthesize baseTextAnnotationView=_baseTextAnnotationView;
- (void).cxx_destruct;
- (void)removeCalloutView;
- (id)initWithBaseTextAnnotationView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

