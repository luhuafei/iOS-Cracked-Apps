//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface SOfoLockResModel : JSONModel
{
    NSNumber<Optional> *_type;
    NSString<Optional> *_mac;
    NSString<Optional> *_token;
}

@property(copy, nonatomic) NSString<Optional> *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString<Optional> *mac; // @synthesize mac=_mac;
@property(copy, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

