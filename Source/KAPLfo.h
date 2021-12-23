/*
  ==============================================================================

    KAPLfo.h
    Created: 12 Feb 2018 12:11:45pm
    Author:  Output Dev Laptop 2

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "KAPAudioFunctions.h"

class KAPLfo
{
public:
    
    KAPLfo();
    ~KAPLfo();
    
    void setSampleRate(double inSampleRate);
    
    void reset();
    
    void process(float inRate,
                 float inDepth,
                 int inNumSamplesToRender);
    
    float* getBuffer(){ return mBuffer; };
    
private:
    
    /** sine variables */    
    float mPhase;
    double mSampleRate;
    
    float mBuffer[kMaxChannelBufferSize];
};
