//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestMessage.h"

@class NSArray;

@interface TTIMGetSessionReadRequest : TTRequestMessage
{
    NSArray *_mSessionIds;
}

@property(retain, nonatomic) NSArray *mSessionIds; // @synthesize mSessionIds=_mSessionIds;
- (void).cxx_destruct;
- (id)encode;
- (void)bindSessionIds:(id)arg1;
- (id)init;

@end

