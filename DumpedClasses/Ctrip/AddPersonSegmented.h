//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface AddPersonSegmented : UIView
{
    id <AddPersonSegmentedelegate> _delegate;
    UIButton *_rightbtn;
    UIButton *_leftbtn;
    unsigned long long _selectSegment;
}

@property(nonatomic) unsigned long long selectSegment; // @synthesize selectSegment=_selectSegment;
@property(retain, nonatomic) UIButton *leftbtn; // @synthesize leftbtn=_leftbtn;
@property(retain, nonatomic) UIButton *rightbtn; // @synthesize rightbtn=_rightbtn;
@property(nonatomic) __weak id <AddPersonSegmentedelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)btn:(id)arg1;
- (void)autosizeview:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isShort:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

