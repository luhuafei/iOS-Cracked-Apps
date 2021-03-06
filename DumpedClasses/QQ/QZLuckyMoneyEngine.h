//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZLuckyMoneyEngine : NSObject
{
}

+ (id)instance;
- (void)preloadLuckyMoneyView;
- (void)showLuckyMoneyViewWithBlock:(CDUnknownBlockType)arg1;
- (void)reportRedPockectTime:(long long)arg1 command:(id)arg2 beginTime:(double)arg3 payID:(id)arg4;
- (void)sendLuckyMoneyRequest:(id)arg1 feedModel:(id)arg2 controller:(id)arg3;
- (void)onPasswordLuckyMoneyNotify:(id)arg1 controller:(id)arg2;
- (void)getNewLuckyMoney:(id)arg1 payID:(id)arg2 feedsID:(id)arg3 hostUin:(long long)arg4 needLoad:(_Bool)arg5 feedModel:(id)arg6 isFromFeed:(_Bool)arg7 luckyMoneyType:(long long)arg8 controller:(id)arg9;
- (void)mainPageGetLuckyMoney:(long long)arg1 withExtInfo:(id)arg2 controller:(id)arg3;
- (void)mainPageGetLuckyMoney:(long long)arg1 controller:(id)arg2;
- (void)hasLuckyMoney:(long long)arg1 WithExtInfo:(id)arg2;
- (void)hasLuckyMoney:(long long)arg1;
- (void)sendRedBonusRequest:(id)arg1;
- (void)handleRedBonusClick:(id)arg1 withController:(id)arg2;

@end

