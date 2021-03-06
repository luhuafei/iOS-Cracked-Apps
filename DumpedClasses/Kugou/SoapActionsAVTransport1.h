//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SoapAction.h"

@interface SoapActionsAVTransport1 : SoapAction
{
}

- (long long)GetCurrentTransportActionsWithInstanceID:(id)arg1 OutActions:(id)arg2;
- (long long)SetRecordQualityModeWithInstanceID:(id)arg1 NewRecordQualityMode:(id)arg2;
- (long long)SetPlayModeWithInstanceID:(id)arg1 NewPlayMode:(id)arg2;
- (long long)PreviousWithInstanceID:(id)arg1;
- (long long)NextWithInstanceID:(id)arg1;
- (long long)SeekWithInstanceID:(id)arg1 Unit:(id)arg2 Target:(id)arg3;
- (long long)RecordWithInstanceID:(id)arg1;
- (long long)PauseWithInstanceID:(id)arg1;
- (long long)PlayWithInstanceID:(id)arg1 Speed:(id)arg2;
- (long long)StopWithInstanceID:(id)arg1;
- (long long)GetTransportSettingsWithInstanceID:(id)arg1 OutPlayMode:(id)arg2 OutRecQualityMode:(id)arg3;
- (long long)GetDeviceCapabilitiesWithInstanceID:(id)arg1 OutPlayMedia:(id)arg2 OutRecMedia:(id)arg3 OutRecQualityModes:(id)arg4;
- (long long)GetPositionInfoWithInstanceID:(id)arg1 OutTrack:(id)arg2 OutTrackDuration:(id)arg3 OutTrackMetaData:(id)arg4 OutTrackURI:(id)arg5 OutRelTime:(id)arg6 OutAbsTime:(id)arg7 OutRelCount:(id)arg8 OutAbsCount:(id)arg9;
- (long long)GetTransportInfoWithInstanceID:(id)arg1 OutCurrentTransportState:(id)arg2 OutCurrentTransportStatus:(id)arg3 OutCurrentSpeed:(id)arg4;
- (long long)GetMediaInfoWithInstanceID:(id)arg1 OutNrTracks:(id)arg2 OutMediaDuration:(id)arg3 OutCurrentURI:(id)arg4 OutCurrentURIMetaData:(id)arg5 OutNextURI:(id)arg6 OutNextURIMetaData:(id)arg7 OutPlayMedium:(id)arg8 OutRecordMedium:(id)arg9 OutWriteStatus:(id)arg10;
- (long long)SetNextAVTransportURIWithInstanceID:(id)arg1 NextURI:(id)arg2 NextURIMetaData:(id)arg3;
- (long long)SetAVTransportURIWithInstanceID:(id)arg1 CurrentURI:(id)arg2 CurrentURIMetaData:(id)arg3;

@end

