//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIInputViewAudioFeedback.h"

@class NSMutableArray, NSString;

@interface AUNumericKeyboardBase : UIView <UIInputViewAudioFeedback>
{
    double _keyboardHeight;
    long long _keyboardKeyCount;
    double _keyboardLeftPadding;
    double _keyboardTopPadding;
    double _numericButtonLayoutWidth;
    double _numericButtonLayoutHeight;
    id <UITextInput> _input;
    NSMutableArray *_buttons;
}

@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)setButtonEnable:(_Bool)arg1;
- (void)judgeTextChange:(id)arg1;
- (void)dealloc;
- (void)createButtons;
- (void)free;
- (void)configurerMembers;
- (void)checkInput:(id)arg1;
- (void)configurerObservers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

