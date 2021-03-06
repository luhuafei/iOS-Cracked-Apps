//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIButton, UILabel;

@interface FXKGLiveHorizontalShareView : UIView
{
    NSArray *_itemBtns;
    id <FXKGLiveHorizontalShareViewDelegate> _delegate;
    NSString *_title;
    UIButton *_cancelBtn;
    UIButton *_tapBtn;
    UILabel *_titleLabel;
    UIView *_buttonBgView;
}

@property(retain, nonatomic) UIView *buttonBgView; // @synthesize buttonBgView=_buttonBgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *tapBtn; // @synthesize tapBtn=_tapBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <FXKGLiveHorizontalShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *itemBtns; // @synthesize itemBtns=_itemBtns;
- (void).cxx_destruct;
- (id)getItemForTag:(unsigned long long)arg1;
- (void)removeFromSuperview;
- (void)hideActionSheet;
- (void)itemClick:(id)arg1;
- (id)createBtn:(id)arg1;
- (id)createBtnsBgView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withItemsArray:(id)arg2 withParentView:(id)arg3;

@end

