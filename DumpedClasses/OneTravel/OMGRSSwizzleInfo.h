//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OMGRSSwizzleInfo : NSObject
{
    SEL _selector;
    CDUnknownBlockType _impProviderBlock;
}

@property(copy, nonatomic) CDUnknownBlockType impProviderBlock; // @synthesize impProviderBlock=_impProviderBlock;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (CDUnknownFunctionPointerType)getOriginalImplementation;

@end

