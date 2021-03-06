//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface RCTSGGLProgram : NSObject
{
    NSMutableArray *_attributes;
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    _Bool _initialized;
    NSString *_vertexShaderLog;
    NSString *_fragmentShaderLog;
    NSString *_programLog;
}

@property(copy, nonatomic) NSString *programLog; // @synthesize programLog=_programLog;
@property(copy, nonatomic) NSString *fragmentShaderLog; // @synthesize fragmentShaderLog=_fragmentShaderLog;
@property(copy, nonatomic) NSString *vertexShaderLog; // @synthesize vertexShaderLog=_vertexShaderLog;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void).cxx_destruct;
- (void)dealloc;
- (void)use;
- (_Bool)link;
- (unsigned int)uniformIndex:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;

@end

