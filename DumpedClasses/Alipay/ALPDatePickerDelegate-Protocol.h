//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALPDatePicker, NSArray, NSString;

@protocol ALPDatePickerDelegate <NSObject>
- (void)cancelDatePicker:(ALPDatePicker *)arg1;
- (void)datePicker:(ALPDatePicker *)arg1 text:(NSString *)arg2;

@optional
- (NSString *)titleForDatePicker:(ALPDatePicker *)arg1;
- (NSArray *)dataListForDatePicker:(ALPDatePicker *)arg1;
@end

