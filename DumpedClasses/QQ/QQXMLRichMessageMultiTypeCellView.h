//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQXMLMessageBaseView.h"

@class NSArray, NSMutableArray;

@interface QQXMLRichMessageMultiTypeCellView : QQXMLMessageBaseView
{
    NSArray *_messageItems;
    NSMutableArray *_pictureViews;
}

+ (int)getCellHeight:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)LongPressedEnded;
- (void)setIsLongPressed;
- (void)setMessageItems:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

