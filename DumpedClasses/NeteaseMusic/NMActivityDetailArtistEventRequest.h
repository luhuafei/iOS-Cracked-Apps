//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMActivityDetailArtistEventRequest : NMBaseRequest
{
    NSString *_actId;
    NSString *_actName;
}

@property(readonly, nonatomic) NSString *actName; // @synthesize actName=_actName;
@property(readonly, nonatomic) NSString *actId; // @synthesize actId=_actId;
- (void).cxx_destruct;
- (id)initWithActId:(id)arg1 actName:(id)arg2;

@end

