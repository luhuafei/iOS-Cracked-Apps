//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UIScrollView;

@interface FMItemStatusPromptView : UIView
{
    UIScrollView *container;
    UIImageView *blurBgView;
    _Bool animated;
}

- (void).cxx_destruct;
- (void)background:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)hideTipFloatView;
- (id)initWithItemStatusPrompt:(id)arg1;
- (id)initFloatTip;

@end

