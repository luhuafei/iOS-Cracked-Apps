//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MQQAlertView, MQQLine, MQQSecretQuestionItem, NSMutableArray, NSString, UIButton, UITableView, UITextField, UIView;

@interface MQQEncryptSecretQuestionsViewController : MQQBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    UITableView *_dropDownListTableView;
    MQQAlertView *_popFunctionAlertView;
    UIButton *_openBotton;
    UIView *_dropDownBackgroundView;
    _Bool _isOpen;
    NSMutableArray *_dataSource;
    UIButton *_curQuestionButton;
    MQQSecretQuestionItem *_questionItem1;
    MQQSecretQuestionItem *_questionItem2;
    MQQSecretQuestionItem *_questionItem3;
    long long _curQuestionIndex;
    UIButton *_stepButton1;
    UIButton *_stepButton2;
    UIButton *_stepButton3;
    UIButton *_stepAnimateButton;
    MQQLine *_stepLine1;
    MQQLine *_stepLine2;
    MQQLine *_stepAnimateLine;
    UITextField *_textField;
    struct CGRect _listFrame;
}

@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MQQLine *stepAnimateLine; // @synthesize stepAnimateLine=_stepAnimateLine;
@property(retain, nonatomic) MQQLine *stepLine2; // @synthesize stepLine2=_stepLine2;
@property(retain, nonatomic) MQQLine *stepLine1; // @synthesize stepLine1=_stepLine1;
@property(retain, nonatomic) UIButton *stepAnimateButton; // @synthesize stepAnimateButton=_stepAnimateButton;
@property(retain, nonatomic) UIButton *stepButton3; // @synthesize stepButton3=_stepButton3;
@property(retain, nonatomic) UIButton *stepButton2; // @synthesize stepButton2=_stepButton2;
@property(retain, nonatomic) UIButton *stepButton1; // @synthesize stepButton1=_stepButton1;
@property(nonatomic) struct CGRect listFrame; // @synthesize listFrame=_listFrame;
@property(nonatomic) long long curQuestionIndex; // @synthesize curQuestionIndex=_curQuestionIndex;
@property(retain, nonatomic) MQQSecretQuestionItem *questionItem3; // @synthesize questionItem3=_questionItem3;
@property(retain, nonatomic) MQQSecretQuestionItem *questionItem2; // @synthesize questionItem2=_questionItem2;
@property(retain, nonatomic) MQQSecretQuestionItem *questionItem1; // @synthesize questionItem1=_questionItem1;
@property(retain, nonatomic) UIButton *curQuestionButton; // @synthesize curQuestionButton=_curQuestionButton;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectedCell:(long long)arg1;
- (id)currentAnswerStr;
- (void)setCurrentAnswerStr:(id)arg1;
- (id)currentQuestionStr;
- (void)setCurrentQuestionStr:(id)arg1;
- (void)openQuestionList;
- (void)reloadQuestions;
- (void)updateListH;
- (void)setupDropDownMenu;
- (void)selectQuestionStepButton:(id)arg1 animated:(_Bool)arg2;
- (void)questionStepButtonClick:(id)arg1;
- (void)loadStepHeaderView;
- (void)answerTextDidChange:(id)arg1;
- (void)saveButonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (id)backBarButtonItem;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

