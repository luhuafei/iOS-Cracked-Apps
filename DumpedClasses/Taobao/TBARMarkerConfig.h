//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface TBARMarkerConfig : NSObject
{
    float _filter;
    NSString *_markerName;
    NSMutableArray *_resourceNames;
    NSArray *_modelConfig;
}

@property(copy, nonatomic) NSArray *modelConfig; // @synthesize modelConfig=_modelConfig;
@property(nonatomic) float filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSMutableArray *resourceNames; // @synthesize resourceNames=_resourceNames;
@property(copy, nonatomic) NSString *markerName; // @synthesize markerName=_markerName;
- (void).cxx_destruct;
- (_Bool)containsResource:(id)arg1;
- (id)init;

@end

