//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SEvaluateSheetViewInputCell;

@protocol SEvaluateSheetViewInputCellDelegate <NSObject>
- (void)didChangeEditingInputCell:(SEvaluateSheetViewInputCell *)arg1;
- (void)didendinputCell:(SEvaluateSheetViewInputCell *)arg1;
- (void)inputCell:(SEvaluateSheetViewInputCell *)arg1 willHideKeyboardWithFrame:(struct CGRect)arg2;
- (void)inputCell:(SEvaluateSheetViewInputCell *)arg1 willShowKeyboardWithFrame:(struct CGRect)arg2;
- (NSString *)defaultTextInInputCell:(SEvaluateSheetViewInputCell *)arg1;
- (_Bool)isCommentIninputCell:(SEvaluateSheetViewInputCell *)arg1;
@end

