//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HotelBusinessItem : NSObject
{
    _Bool _jsonParsed;
    NSString *_itemID;
    NSString *_itemValue;
    id _itemValueAsJson;
}

@property(nonatomic) _Bool jsonParsed; // @synthesize jsonParsed=_jsonParsed;
@property(retain, nonatomic) id itemValueAsJson; // @synthesize itemValueAsJson=_itemValueAsJson;
@property(copy, nonatomic) NSString *itemValue; // @synthesize itemValue=_itemValue;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;

@end

