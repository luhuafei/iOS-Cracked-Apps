//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutShopRemoteFilterModel : TBJSONModel
{
    NSString *_itemID;
    NSString *_icon;
    NSString *_codeName;
    NSString *_title;
    NSString *_level;
    NSString *_sortId;
    NSString *_type;
}

+ (id)modelKeyMapper;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *sortId; // @synthesize sortId=_sortId;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *codeName; // @synthesize codeName=_codeName;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;

@end

