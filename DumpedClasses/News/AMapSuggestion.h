//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray;

@interface AMapSuggestion : AMapSearchObject
{
    NSArray *_keywords;
    NSArray *_cities;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;

@end

