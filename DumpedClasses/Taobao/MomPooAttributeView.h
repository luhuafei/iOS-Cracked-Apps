//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MomPooColorView, NSArray, UIButton;

@interface MomPooAttributeView : UIView
{
    id <MomPooAttributeViewDelegate> _delegate;
    UIButton *_selectedTypeButton;
    MomPooColorView *_selectedColorButton;
    NSArray *_types;
    NSArray *_colors;
    NSArray *_colorStrings;
    long long _defaultTypeIndex;
    long long _defaultColorIndex;
}

@property(nonatomic) long long defaultColorIndex; // @synthesize defaultColorIndex=_defaultColorIndex;
@property(nonatomic) long long defaultTypeIndex; // @synthesize defaultTypeIndex=_defaultTypeIndex;
@property(retain, nonatomic) NSArray *colorStrings; // @synthesize colorStrings=_colorStrings;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSArray *types; // @synthesize types=_types;
@property(nonatomic) __weak MomPooColorView *selectedColorButton; // @synthesize selectedColorButton=_selectedColorButton;
@property(nonatomic) __weak UIButton *selectedTypeButton; // @synthesize selectedTypeButton=_selectedTypeButton;
@property(nonatomic) __weak id <MomPooAttributeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)selectedColor;
- (void)onColorButtonClick:(id)arg1;
- (void)onTypeButtonClick:(id)arg1;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

