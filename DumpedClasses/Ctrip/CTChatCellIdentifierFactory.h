//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTChatCellIdentifierFactory : NSObject
{
}

+ (id)cellIdentifierForDefaultMessageConfiguration:(id)arg1 groupKey:(id)arg2;
+ (id)cellIdentifierForMessageConfiguration:(id)arg1 conversationType:(long long)arg2;
+ (void)registerSystemMessageCellClassForTableView:(id)arg1;
+ (void)registerMessageCellClass:(Class)arg1 ForTableView:(id)arg2;
+ (void)registerChatMessageCellClassForTableView:(id)arg1;

@end
