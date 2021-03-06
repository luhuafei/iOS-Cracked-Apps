//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCLayoutLineItem, NSMutableArray;

@interface DCLayoutView : UIView
{
    int _orientation;
    long long _verticalAlignment;
    long long _horizontalAlignment;
    DCLayoutLineItem *_lineItem;
    NSMutableArray *_items;
    struct CGSize _contentSize;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) DCLayoutLineItem *lineItem; // @synthesize lineItem=_lineItem;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)removeAllItems;
- (void)addItem:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)calculateItems:(id)arg1 containerSize:(struct CGSize)arg2 deep:(int)arg3;
- (void)layoutSubviews;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

