//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWShareByWeiboProvider : GWBaseInfoProvider
{
    NSString *token;
    NSString *expires;
    NSString *userid;
}

@property(copy, nonatomic) NSString *userid; // @synthesize userid;
@property(copy, nonatomic) NSString *expires; // @synthesize expires;
@property(copy, nonatomic) NSString *token; // @synthesize token;
- (void).cxx_destruct;
- (id)parseResponed:(id)arg1 error:(id *)arg2;
- (void)providerWillStart;

@end

