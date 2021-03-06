//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSArray<FRImageUrlStructModel><Optional>, NSNumber, NSNumber<Optional>, NSString, NSString<Optional>;

@interface FRNewCommentReplyStructModel : FRBaseModel
{
    NSString *_id;
    NSString *_user_id;
    NSString *_user_name;
    NSString *_text;
    NSNumber *_user_verified;
    NSNumber<Optional> *_is_pgc_author;
    NSArray<FRImageUrlStructModel><Optional> *_author_badge;
    NSString<Optional> *_user_auth_info;
}

@property(retain, nonatomic) NSString<Optional> *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(retain, nonatomic) NSArray<FRImageUrlStructModel><Optional> *author_badge; // @synthesize author_badge=_author_badge;
@property(retain, nonatomic) NSNumber<Optional> *is_pgc_author; // @synthesize is_pgc_author=_is_pgc_author;
@property(retain, nonatomic) NSNumber *user_verified; // @synthesize user_verified=_user_verified;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

