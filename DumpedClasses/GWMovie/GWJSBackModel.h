//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface GWJSBackModel : NSObject
{
    _Bool _result;
    NSDictionary *_type;
    NSString *_error;
}

@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *type; // @synthesize type=_type;
@property(nonatomic) _Bool result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)jsonString;
- (void)typeString:(id)arg1 withPageID:(id)arg2;

@end

