//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MQQLine, UILabel;

@interface MQQAKTableHeaderCell : UITableViewCell
{
    _Bool _isFirstCell;
    UILabel *_dateLabel;
    MQQLine *_seperatorLine;
}

+ (double)cellHeightAtIndexPath:(id)arg1;
@property(retain, nonatomic) MQQLine *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(nonatomic) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDate:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

