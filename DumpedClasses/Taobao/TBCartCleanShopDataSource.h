//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TBCartCleanShopAction;

@interface TBCartCleanShopDataSource : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    NSArray *_sections;
    TBCartCleanShopAction *_action;
}

@property(retain, nonatomic) TBCartCleanShopAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

