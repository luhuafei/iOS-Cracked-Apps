//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NVMBreakfastBaseResponse : NSObject
{
    NSString *_status;
    NSString *_message;
    long long _errCode;
}

@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

