//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FFBuySendTimePostFee : NSObject
{
    _Bool _compensate;
    NSString *_postFee;
    NSString *_originalPostFee;
}

@property(nonatomic) _Bool compensate; // @synthesize compensate=_compensate;
@property(copy, nonatomic) NSString *originalPostFee; // @synthesize originalPostFee=_originalPostFee;
@property(copy, nonatomic) NSString *postFee; // @synthesize postFee=_postFee;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

