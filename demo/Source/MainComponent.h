#pragma once

#include <JuceHeader.h>

#include "HeadMatrix.h"
#include "Tracker.h"
#include "midi.h"
#include "configPanel.h"
#include "headPanel.h"

//==============================================================================

class MainComponent  : public juce::Component, HeadPanel::HeadPanel::Listener
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint(juce::Graphics&) override;
    void resized() override;
    void trackerChanged(const HeadMatrix& headMatrix) override;

    static float midi2Angle(float msb, float lsb, bool degrees=true);

private:
    //==============================================================================
    HeadPanel::HeadPanel headPanel;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};
