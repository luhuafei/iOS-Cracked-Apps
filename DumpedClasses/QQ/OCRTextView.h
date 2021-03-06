//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSDate, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface OCRTextView : UITextView <UITextViewDelegate, QUIActionSheetDelegate, MFMailComposeViewControllerDelegate, UIGestureRecognizerDelegate>
{
    NSDate *_tipsDate;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    NSArray *_parseArray;
    double _minOffsetTop;
    id <OCRResultViewDelegate> _scrollDelegate;
}

@property(nonatomic) __weak id <OCRResultViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) double minOffsetTop; // @synthesize minOffsetTop=_minOffsetTop;
@property(retain, nonatomic) NSArray *parseArray; // @synthesize parseArray=_parseArray;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)callWithPhoneNumber:(id)arg1;
- (void)actionPasteString:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isValidEmail:(id)arg1;
- (void)sendEmailWithRecipients:(id)arg1;
- (void)handlePhoneNumber:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showToastMessage:(id)arg1;
- (void)handleRange:(id)arg1;
- (void)move:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

