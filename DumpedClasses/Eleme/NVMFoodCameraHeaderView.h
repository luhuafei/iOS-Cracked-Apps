//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel;

@interface NVMFoodCameraHeaderView : UICollectionReusableView
{
    double _time;
    NSString *_restaurantName;
    NSString *_timeDescription;
    long long _day;
    long long _month;
    long long _year;
    UILabel *_dayLabel;
    UILabel *_monthLabel;
    UILabel *_descriptionLabel;
    UILabel *_restaurantLabel;
}

@property(retain, nonatomic) UILabel *restaurantLabel; // @synthesize restaurantLabel=_restaurantLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(copy, nonatomic) NSString *timeDescription; // @synthesize timeDescription=_timeDescription;
@property(copy, nonatomic) NSString *restaurantName; // @synthesize restaurantName=_restaurantName;
@property(nonatomic) double time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)monthTextWithInt:(long long)arg1;
- (void)loadLabels;
- (id)initWithFrame:(struct CGRect)arg1;

@end
