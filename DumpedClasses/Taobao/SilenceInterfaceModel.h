//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface SilenceInterfaceModel : TBJSONModel
{
    NSString *_className;
    NSString *_functionName;
    NSDictionary *_functionParam;
}

@property(copy, nonatomic) NSDictionary *functionParam; // @synthesize functionParam=_functionParam;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;

@end

