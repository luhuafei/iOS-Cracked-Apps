//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MQQWallpaperCalendarTipView : UIView
{
    UIImageView *_tipImageView;
}

- (void)drawTipBackground:(id)arg1 color:(id)arg2 fill:(_Bool)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 selectFrame:(struct CGRect)arg2;
- (void)dealloc;

@end

