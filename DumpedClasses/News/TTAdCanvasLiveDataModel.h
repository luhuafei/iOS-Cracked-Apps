//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class TTAdCanvasLiveStatusModel<Optional>, TTAdCanvasLiveTimeModel<Optional>;

@interface TTAdCanvasLiveDataModel : JSONModel
{
    TTAdCanvasLiveStatusModel<Optional> *_status;
    TTAdCanvasLiveTimeModel<Optional> *_time;
}

@property(retain, nonatomic) TTAdCanvasLiveTimeModel<Optional> *time; // @synthesize time=_time;
@property(retain, nonatomic) TTAdCanvasLiveStatusModel<Optional> *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

