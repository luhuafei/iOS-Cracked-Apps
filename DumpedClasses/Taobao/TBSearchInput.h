//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, TBSearchTriangleView, UIButton, UITableView, UIView;

@interface TBSearchInput : UITextField <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasSearchMenuButton;
    _Bool _isShowSearchOptionList;
    UIButton *_optionMenuButton;
    UIButton *_btnAsrSearch;
    NSString *_searchTabType;
    id <TBSearchInputDelegate> _tbsearchInputDelegate;
    TBSearchTriangleView *_triangleView;
    UITableView *_searchMenuTableView;
    UIView *_searchMenuView;
    UIButton *_fullScreenLayerButton;
    NSArray *_searchOptionArray;
    UIButton *_searchIcon;
}

@property(retain, nonatomic) UIButton *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) NSArray *searchOptionArray; // @synthesize searchOptionArray=_searchOptionArray;
@property(nonatomic) _Bool isShowSearchOptionList; // @synthesize isShowSearchOptionList=_isShowSearchOptionList;
@property(retain, nonatomic) UIButton *fullScreenLayerButton; // @synthesize fullScreenLayerButton=_fullScreenLayerButton;
@property(retain, nonatomic) UIView *searchMenuView; // @synthesize searchMenuView=_searchMenuView;
@property(retain, nonatomic) UITableView *searchMenuTableView; // @synthesize searchMenuTableView=_searchMenuTableView;
@property(retain, nonatomic) TBSearchTriangleView *triangleView; // @synthesize triangleView=_triangleView;
@property(nonatomic) __weak id <TBSearchInputDelegate> tbsearchInputDelegate; // @synthesize tbsearchInputDelegate=_tbsearchInputDelegate;
@property(nonatomic) _Bool hasSearchMenuButton; // @synthesize hasSearchMenuButton=_hasSearchMenuButton;
@property(retain, nonatomic) NSString *searchTabType; // @synthesize searchTabType=_searchTabType;
@property(retain, nonatomic) UIButton *btnAsrSearch; // @synthesize btnAsrSearch=_btnAsrSearch;
@property(retain, nonatomic) UIButton *optionMenuButton; // @synthesize optionMenuButton=_optionMenuButton;
- (void).cxx_destruct;
- (id)getTabDataWithSearchTabType:(id)arg1;
- (_Bool)checkShopTabWithSearchTabType:(id)arg1;
- (_Bool)checkTmallTabWithSearchTabType:(id)arg1;
- (_Bool)checkAllTabWithSearchTabType:(id)arg1;
- (void)setSearchIconColor:(id)arg1;
- (void)setInputTextColor:(id)arg1;
- (void)setPlaceHolderTextColor:(id)arg1;
- (void)setShopStyle;
- (void)setFestivalOff;
- (void)setFestivalOn;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (void)photoSearchButtonHighlight:(_Bool)arg1;
- (void)hackAsrBtn;
- (id)getSearchBarPlaceHolder;
- (void)setSearchTypeHint:(id)arg1;
- (void)showPhotoSearch;
- (void)SearchOptionCellTouchCancel:(id)arg1;
- (void)SearchOptionCellTouchDown:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dismissSearchMenu:(id)arg1;
- (void)optionMenuButtonClicked;
- (void)layoutSubviews;
- (_Bool)isVoiceButton;
- (void)showVoiceButton;
- (void)setCustomView:(id)arg1;
- (void)hideBtnAsrSearch;
- (id)getOrangeOptionData;
- (void)layoutLeftZoneWithWidth:(double)arg1;
- (void)configSearchOption;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
