//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCMediaRecordBtnView;

@protocol BCMediaRecordBtnViewDelegate <NSObject>

@optional
- (void)didLongPressedEndInView:(BCMediaRecordBtnView *)arg1;
- (void)didLongPressedBeganInView:(BCMediaRecordBtnView *)arg1;
- (void)didMovieRecordCanceled:(BCMediaRecordBtnView *)arg1;
- (void)didMovieRecordFinish:(BCMediaRecordBtnView *)arg1;
- (void)runRrogress:(double)arg1 view:(BCMediaRecordBtnView *)arg2;
- (void)didPhotoBtnPressed:(BCMediaRecordBtnView *)arg1;
- (void)didMovieBtnPressed:(BCMediaRecordBtnView *)arg1;
@end
