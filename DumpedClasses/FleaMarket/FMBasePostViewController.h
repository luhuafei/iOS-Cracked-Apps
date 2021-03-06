//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

@class FMPostQuestionView, FMTableComponent, UIButton, UIView;

@interface FMBasePostViewController : FMBaseViewController
{
    FMTableComponent *_component;
    FMPostQuestionView *_postView;
    UIView *_completeView;
    UIButton *_completeButton;
}

@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UIView *completeView; // @synthesize completeView=_completeView;
@property(retain, nonatomic) FMPostQuestionView *postView; // @synthesize postView=_postView;
@property(retain, nonatomic) FMTableComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (void)observeKeyboard;
- (void)layout;
- (void)initViews;
- (void)initNavigationBar;
- (void)bindComponent;
- (void)viewDidLoad;
- (void)loadView;

@end

