//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMBlackListOperator : NSObject
{
}

+ (_Bool)processAddToPlaylistReturnCode:(long long)arg1;
+ (void)getCurrentBlackList:(CDUnknownBlockType)arg1;
+ (void)delBlackList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)addBlackList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)rootView;
+ (void)showLoginView;
+ (void)daSettingWithUserId:(id)arg1;
+ (void)doBlackListWithWithUserId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 isInBlackList:(_Bool)arg3;
+ (void)doInformWithUserId:(id)arg1 isInformMsg:(_Bool)arg2;
+ (void)doRemarkNameWithUserId:(id)arg1 remarkDidShowBlock:(CDUnknownBlockType)arg2;
+ (void)showOperationWithUser:(id)arg1 avatarImage:(id)arg2 sharable:(_Bool)arg3 remarkalbe:(_Bool)arg4 isInBlackList:(_Bool)arg5 isInformMsg:(_Bool)arg6 isNeedSetting:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8 remarkDidShowBlock:(CDUnknownBlockType)arg9 initialViewController:(id)arg10;
+ (void)showOperationWithUser:(id)arg1 avatarImage:(id)arg2 sharable:(_Bool)arg3 remarkalbe:(_Bool)arg4 isInBlackList:(_Bool)arg5 isInformMsg:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 remarkDidShowBlock:(CDUnknownBlockType)arg8 initialViewController:(id)arg9;
+ (void)showOperation:(id)arg1 name:(id)arg2 remarkName:(id)arg3 remarkalbe:(_Bool)arg4 isInBlackList:(_Bool)arg5 isInformMsg:(_Bool)arg6 isNeedSetting:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8 remarkDidShowBlock:(CDUnknownBlockType)arg9;
+ (void)showOperation:(id)arg1 name:(id)arg2 remarkName:(id)arg3 remarkalbe:(_Bool)arg4 isInBlackList:(_Bool)arg5 isInformMsg:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 remarkDidShowBlock:(CDUnknownBlockType)arg8;
+ (id)sharedInstance;
- (void)_getBlackList:(CDUnknownBlockType)arg1;
- (void)_delBlackList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_addBlackList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

