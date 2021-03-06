//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableDictionary, UIFont;

@interface PTHSegmentedControl : UIControl
{
    NSArray *_items;
    UIFont *_font;
    unsigned long long _padding;
    unsigned long long _cellWidth;
    NSMutableDictionary *_titleColors;
    NSMutableDictionary *_titleShadowColors;
    NSMutableDictionary *_titleShadowOffsets;
    NSMutableDictionary *_cellImages;
    long long _selectedSegmentIndex;
}

@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(nonatomic) unsigned long long padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_sendDelayedAction;
- (id)cellImagesForState:(unsigned long long)arg1;
- (void)setCellImagesWithName:(id)arg1 leftCapWidth:(long long)arg2;
- (void)setCellImages:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)titleShadowOffsetForState:(unsigned long long)arg1;
- (void)setTitleShadowOffset:(struct CGSize)arg1 forState:(unsigned long long)arg2;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleColorForState:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

