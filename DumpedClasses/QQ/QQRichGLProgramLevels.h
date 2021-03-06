//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichPTVGLProgramBase.h"

@interface QQRichGLProgramLevels : QQRichPTVGLProgramBase
{
    union _GLKVector3 minVector;
    union _GLKVector3 midVector;
    union _GLKVector3 maxVector;
    union _GLKVector3 minOutputVector;
    union _GLKVector3 maxOutputVector;
    unsigned int _outputTexture;
    struct CGSize _outputSize;
}

@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) unsigned int outputTexture; // @synthesize outputTexture=_outputTexture;
- (void)renderWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2;
- (void)updateUniforms;
- (void)setMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;
- (void)setBlueMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;
- (void)setGreenMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;
- (void)setRedMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;
- (void)clearBufferObjects;
- (void)registerUniforms;
- (void)registerVertexAttributes;
- (void)dealloc;
- (id)init;

@end

