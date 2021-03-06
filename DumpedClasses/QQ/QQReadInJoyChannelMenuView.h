//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UIScrollView;

@interface QQReadInJoyChannelMenuView : UIView
{
    NSMutableArray *_buttonArray;
    UIScrollView *_scrollView;
    float _totalWidth;
    UIButton *_arrowBtn;
    UIView *_hintView;
    NSMutableArray *_menuItemInfoArray;
    id <QQReadInJoyChannelMenuDelegate> _delegate;
}

@property(nonatomic) id <QQReadInJoyChannelMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideNewTipsAtButton:(long long)arg1;
- (void)showNewTipsAtButton:(_Bool)arg1;
- (void)scrollButton:(double)arg1;
- (void)setRedPointShow:(_Bool)arg1;
- (id)arrowButton;
- (void)dealloc;
- (void)clickArrowButton;
- (void)menuButtonClicked:(id)arg1;
- (void)moveScrolViewWithIndex:(long long)arg1 buttonFrame:(struct CGRect)arg2;
- (void)setButtonSelectedStateAtIndex:(long long)arg1;
- (void)setButtonSelectedStateAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setAllButtonsToNormalState;
- (void)internalCreateMenuItems:(id)arg1 isRecreate:(_Bool)arg2 redTipsTitles:(id)arg3;
- (void)reCreateMenuItems:(id)arg1 redTipsTitles:(id)arg2;
- (void)createMenuItems:(id)arg1 redTipsTitles:(id)arg2;
- (void)addMenuEdgeMask;
- (id)initWithFrame:(struct CGRect)arg1 ButtonTitles:(id)arg2 redTipsTitles:(id)arg3;

@end

