//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSArray<AliDetailComponentLayoutModel>, NSDictionary, NSString;

@interface AliDetailProtocolComponentRuleModel : TBJSONModel
{
    NSString *_locatorId;
    NSString *_filter;
    NSDictionary *_model;
    NSString *_style;
    NSArray *_actions;
    NSArray<AliDetailComponentLayoutModel> *_children;
}

@property(retain, nonatomic) NSArray<AliDetailComponentLayoutModel> *children; // @synthesize children=_children;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSString *locatorId; // @synthesize locatorId=_locatorId;
- (void).cxx_destruct;

@end

