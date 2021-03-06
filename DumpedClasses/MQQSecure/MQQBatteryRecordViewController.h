//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

@class MQQBatteryRecordView, MQQScreenSaverTopBar, NSDate, UIImage, UIView;

@interface MQQBatteryRecordViewController : MQQBaseViewController
{
    UIView *recordView;
    MQQBatteryRecordView *batteryRecordView;
    NSDate *selectedMonth;
    NSDate *firstDayOfThisMonth;
    UIImage *_backgroundImage;
    MQQScreenSaverTopBar *_topBar;
}

@property(retain, nonatomic) MQQScreenSaverTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSDate *firstDayOfThisMonth; // @synthesize firstDayOfThisMonth;
@property(retain, nonatomic) NSDate *selectedMonth; // @synthesize selectedMonth;
@property(retain, nonatomic) UIView *recordView; // @synthesize recordView;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)resetButton;
- (void)nextMonthButtonClicked:(id)arg1;
- (void)preMonthButtonClicked:(id)arg1;
- (void)clearUpButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)swipeDown:(id)arg1;
- (void)reloadRecord;
- (void)nextMonth;
- (void)preMonth;
- (void)reloadSum;
- (void)batteryRecordDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithBackgroundImage:(id)arg1;

@end

