//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface DCFilterItemModel : JSONModel
{
    NSString<Optional> *_key;
    NSString<Optional> *_val;
    NSString<Optional> *_fromName;
    NSString<Optional> *_toName;
    NSString<Optional> *_line;
    NSString<Optional> *_time;
    NSString<Optional> *_leadingMark;
}

@property(copy, nonatomic) NSString<Optional> *leadingMark; // @synthesize leadingMark=_leadingMark;
@property(copy, nonatomic) NSString<Optional> *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString<Optional> *line; // @synthesize line=_line;
@property(copy, nonatomic) NSString<Optional> *toName; // @synthesize toName=_toName;
@property(copy, nonatomic) NSString<Optional> *fromName; // @synthesize fromName=_fromName;
@property(copy, nonatomic) NSString<Optional> *val; // @synthesize val=_val;
@property(copy, nonatomic) NSString<Optional> *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

