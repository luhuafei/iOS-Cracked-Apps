//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol QQDatabaseMigratorDelegate <NSObject>
- (void)db:(NSString *)arg1 didFinishMigrationWithError:(int)arg2;
- (void)db:(NSString *)arg1 didStartMigrationWithError:(int)arg2;

@optional
- (void)updateProgress:(float)arg1;
- (void)didFinishMigrationWithError:(int)arg1;
- (void)tableMiagrateFinishedForReadInJoySubscribe:(NSString *)arg1 inDatabase:(NSString *)arg2 withError:(int)arg3;
- (void)tableMigrationFinishedForGroupRecent:(NSString *)arg1 inDatabase:(NSString *)arg2 withError:(int)arg3;
- (void)tableMigrationFinishedForCallMsg:(NSString *)arg1 inDatabase:(NSString *)arg2 withError:(int)arg3;
- (void)tableMigrationFinishedForDiscuss:(NSString *)arg1 inDatabase:(NSString *)arg2 withError:(int)arg3;
- (void)tableMigrationFinishedForGroup:(NSString *)arg1 inDatabase:(NSString *)arg2 withError:(int)arg3;
@end

