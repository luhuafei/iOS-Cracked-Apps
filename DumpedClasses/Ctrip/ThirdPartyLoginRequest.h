//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ThirdPartyLoginRequest : CTBusinessBean
{
    int serviceVersion;
    int sourceType;
    NSString *openID;
    NSString *deviceToken;
    NSString *userId;
    NSString *password;
    int loginMode;
}

@property(nonatomic) int loginMode; // @synthesize loginMode;
@property(copy, nonatomic) NSString *password; // @synthesize password;
@property(copy, nonatomic) NSString *userId; // @synthesize userId;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken;
@property(copy, nonatomic) NSString *openID; // @synthesize openID;
@property(nonatomic) int sourceType; // @synthesize sourceType;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

