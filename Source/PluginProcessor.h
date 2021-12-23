/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "KAPUsedParameters.h"
#include "KAPAudioFunctions.h"

#include "KAPDelay.h"
#include "KAPLfo.h"
#include "KAPGain.h"

#include "KAPPresetManager.h"

//==============================================================================
/**
*/
class KadenzeAudioPluginAudioProcessor  : public AudioProcessor
{
public:
    //==============================================================================
    KadenzeAudioPluginAudioProcessor();
    ~KadenzeAudioPluginAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect () const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
    
    float getInputGainMeterLevel(int inChannel);
    
    float getOutputGainMeterLevel(int inChannel);
    
    KAPPresetManager* getPresetManager();

    // Our parameters    
    AudioProcessorValueTreeState parameters;
    
private:
    
    /** internal */
    void initializeDSP();
    /** internal */
    void initializeParameters();
    
    std::unique_ptr<KAPPresetManager> mPresetManager;
    
    std::unique_ptr<KAPDelay> mDelay [kMaxNumChannels];
    std::unique_ptr<KAPLfo> mLfo [kMaxNumChannels];
    std::unique_ptr<KAPGain> mInputGain [kMaxNumChannels];
    std::unique_ptr<KAPGain> mOutputGain [kMaxNumChannels];
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KadenzeAudioPluginAudioProcessor)
};
