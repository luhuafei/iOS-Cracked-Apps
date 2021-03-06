//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MQQLocalAccountManager : NSObject
{
    NSMutableDictionary *_accountDict;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMutableDictionary *accountDict; // @synthesize accountDict=_accountDict;
- (_Bool)synchronize;
- (void)clearLastAccountPasswordForType:(long long)arg1;
- (void)setAccount:(id)arg1 forType:(long long)arg2;
- (id)lastAccountForType:(long long)arg1;
- (void)syncLastAccountFrom:(long long)arg1 to:(long long)arg2;
- (id)accountListForType:(long long)arg1;
- (_Bool)isAccount:(id)arg1 existInType:(long long)arg2;
- (void)readLocalAccountInfo;
- (id)decryptString:(id)arg1;
- (id)encryptString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

