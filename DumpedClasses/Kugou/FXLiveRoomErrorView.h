//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIAlertView;

@interface FXLiveRoomErrorView : UIView <UIAlertViewDelegate>
{
    long long _type;
    UIView *_bgView;
    NSString *_msg;
    CDUnknownBlockType _clickedBlock;
    UIAlertView *_alert;
    id _customSelf;
}

+ (id)showWithTitle:(id)arg1 message:(id)arg2 clickedBlock:(CDUnknownBlockType)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
@property(retain, nonatomic) id customSelf; // @synthesize customSelf=_customSelf;
@property(nonatomic) __weak UIAlertView *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dismissAlert;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

