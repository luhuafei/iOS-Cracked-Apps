//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageJFAVoronoiFilter : VSImageFilter
{
    unsigned int secondFilterOutputTexture;
    unsigned int secondFilterFramebuffer;
    int sampleStepUniform;
    int sizeUniform;
    unsigned long long numPasses;
    int currentPass;
    struct CGSize _sizeInPixels;
}

@property(nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (unsigned long long)nextPowerOfTwo:(struct CGPoint)arg1;
- (id)init;

@end
