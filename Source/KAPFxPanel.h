/*
  ==============================================================================

    KAPFxPanel.h
    Created: 12 Feb 2018 4:03:01pm
    Author:  Output Dev Laptop 2

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

#include "KAPParameterSlider.h"

enum KAPFxPanelStyle {
    kKAPFxPanelStyle_Delay,
    kKAPFxPanelStyle_Chorus
};

class KAPFxPanel
:   public KAPPanelBase
{
public:
    KAPFxPanel(KadenzeAudioPluginAudioProcessor* processor);
    ~KAPFxPanel();
    
    /** component override */
    void paint(Graphics& g) override;
    
    void setFxPanelStyle(KAPFxPanelStyle inStyle);
private:
    
    OwnedArray<KAPParameterSlider> mSliders;
    
    String mLabel;
    
    KAPFxPanelStyle mStyle;
};
