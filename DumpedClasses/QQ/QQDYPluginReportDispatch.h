//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQDYPluginReportDispatch : NSObject
{
}

- (void)reportStayTime:(int)arg1;
- (void)reportItemExposeAtIndexPath:(id)arg1 plugin:(id)arg2 feed:(id)arg3;
- (void)reportTitleExposeAtIndexPath:(id)arg1 plugin:(id)arg2;
- (void)reportItemClickedAtIndexPath:(id)arg1 plugin:(id)arg2 feed:(id)arg3;
- (void)reportTitleClickedAtIndexPath:(id)arg1 plugin:(id)arg2;
- (void)groupTribeReport:(id)arg1 opType:(id)arg2 opName:(id)arg3 reserved1:(id)arg4 reserved2:(id)arg5 reserved3:(id)arg6 reserved4:(id)arg7;
- (void)reportToQZCompass:(long long)arg1 reportType:(long long)arg2 plugin:(id)arg3 indexPath:(id)arg4 feed:(id)arg5;
- (void)gameDataReport:(id)arg1 operMoudle:(id)arg2 operId:(id)arg3 moduleType:(id)arg4 business:(id)arg5 page:(id)arg6 feedType:(id)arg7;
- (void)readDataReport:(id)arg1 pageId:(int)arg2 moduleId:(int)arg3 index:(int)arg4 objectId:(int)arg5 categoryId:(int)arg6 operType:(int)arg7 operId:(int)arg8 operAmount:(int)arg9 operResult:(int)arg10 src1:(id)arg11 src2:(id)arg12 src3:(id)arg13 from1:(id)arg14 from2:(id)arg15 from3:(id)arg16 objectIdStr:(id)arg17;
- (_Bool)reportReadinJoy:(id)arg1 toUIN:(id)arg2 reserved2:(long long)arg3 reserved3:(long long)arg4 reserved4:(id)arg5 reserved5:(id)arg6;

@end

