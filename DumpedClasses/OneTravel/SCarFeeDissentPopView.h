//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SCarFeeDissentPopView : UIView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
}

@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (id)createHightLabel:(id)arg1 font:(id)arg2;
- (id)createLabel:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)cancelBtnAction;
- (void)confirmBtnAction;
- (id)initWithFrame:(struct CGRect)arg1 msgModel:(id)arg2 confirm:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;

@end
