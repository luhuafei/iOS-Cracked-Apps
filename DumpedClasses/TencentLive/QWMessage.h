//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface QWMessage : NSObject
{
    int _code;
    NSString *_message;
    NSDictionary *_infos;
}

@property(retain, nonatomic) NSDictionary *infos; // @synthesize infos=_infos;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)dictionaryWithAllValues;

@end

