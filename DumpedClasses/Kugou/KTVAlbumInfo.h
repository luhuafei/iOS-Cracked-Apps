//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KTVAlbumInfo : KTVObjectModel
{
    NSString *_photo;
    long long _addtime;
    long long _source;
    long long _pid;
    NSString *_photoUrl;
}

@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(nonatomic) long long pid; // @synthesize pid=_pid;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long addtime; // @synthesize addtime=_addtime;
@property(retain, nonatomic) NSString *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (id)initWithOldAlbumInfo:(id)arg1;

@end

