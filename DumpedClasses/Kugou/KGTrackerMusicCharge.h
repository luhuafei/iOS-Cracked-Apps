//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGTrackerMusic.h"

@class KGFileAuthorization, KGTrackerChargeEnv;

@interface KGTrackerMusicCharge : KGTrackerMusic
{
    _Bool _bFree;
    KGFileAuthorization *_chargeAuth;
    KGTrackerChargeEnv *_chargeEnv;
}

@property(retain, nonatomic) KGTrackerChargeEnv *chargeEnv; // @synthesize chargeEnv=_chargeEnv;
@property(nonatomic) __weak KGFileAuthorization *chargeAuth; // @synthesize chargeAuth=_chargeAuth;
- (void).cxx_destruct;
- (int)synAskTrakerForInfo:(id *)arg1;
- (id)generateFillUrl;
- (id)initWithMusicHash:(id)arg1 qualityType:(int)arg2 fileHash:(id)arg3 auth:(id)arg4;

@end

