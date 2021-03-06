//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<FRUserStructModel><Optional>, NSNumber, NSString<Optional>;

@interface FRTtdiscussV1DiggUserResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSNumber *_thread_id;
    NSNumber *_anonymous_count;
    long long _has_more;
    NSNumber *_total_count;
    NSArray<FRUserStructModel><Optional> *_user_lists;
    NSString<Optional> *_err_tips;
}

@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSArray<FRUserStructModel><Optional> *user_lists; // @synthesize user_lists=_user_lists;
@property(retain, nonatomic) NSNumber *total_count; // @synthesize total_count=_total_count;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *anonymous_count; // @synthesize anonymous_count=_anonymous_count;
@property(retain, nonatomic) NSNumber *thread_id; // @synthesize thread_id=_thread_id;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

