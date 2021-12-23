/*
  ==============================================================================

    KAPDelay.h
    Created: 9 Feb 2018 2:47:01pm
    Author:  Output Dev Laptop 2

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "KAPAudioFunctions.h"

enum KAPDelayType {
    kKAPDelayType_Delay,
    kKAPDelayType_Chorus
};

class KAPDelay
{
public:
    
    KAPDelay();
    ~KAPDelay();
    
    void setSampleRate(double inSampleRate);
    
    void reset();
    
    void process(float* inAudio,
                 float inTime,
                 float inFeedback,
                 float inWetDry,
                 float inType,
                 float* inModulationBuffer,
                 float* outAudio,
                 int inNumSamplesToRender);
    
private:
    
    /** internal */
    double getInterpolatedSample(float inDelayTimeInSamples);
    
    float mTimeSmoothed;
    
    double mSampleRate;
    double mBuffer[kMaxChannelBufferSize];
    double mFeedbackSample;
    
    int mDelayIndex;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KAPDelay)
};
