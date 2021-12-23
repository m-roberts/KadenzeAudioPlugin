/*
  ==============================================================================

    KAPInterfaceDefines.h
    Created: 12 Feb 2018 3:54:52pm
    Author:  Output Dev Laptop 2

  ==============================================================================
*/

#pragma once

constexpr int MAIN_PANEL_WIDTH  = 750;
constexpr int MAIN_PANEL_HEIGHT = 300;

constexpr int TOP_PANEL_WIDTH  = MAIN_PANEL_WIDTH;
constexpr int TOP_PANEL_HEIGHT = 45;

constexpr int GAIN_PANEL_WIDTH  = 100;
constexpr int GAIN_PANEL_HEIGHT = MAIN_PANEL_HEIGHT - TOP_PANEL_HEIGHT;

constexpr int CENTER_PANEL_WIDTH  = MAIN_PANEL_WIDTH-(GAIN_PANEL_WIDTH*2);
constexpr int CENTER_PANEL_HEIGHT = GAIN_PANEL_HEIGHT;

constexpr int CENTER_PANEL_MENU_BAR_WIDTH  = CENTER_PANEL_WIDTH;
constexpr int CENTER_PANEL_MENU_BAR_HEIGHT = 35;

constexpr int FX_PANEL_WIDTH  = CENTER_PANEL_WIDTH;
constexpr int FX_PANEL_HEIGHT = CENTER_PANEL_HEIGHT - CENTER_PANEL_MENU_BAR_HEIGHT;

const Colour KAPColour_1 = Colour(105,105,105);
const Colour KAPColour_2 = Colour(0,0,0).withAlpha(0.f);
const Colour KAPColour_3 = Colour(0,0,0).withAlpha(0.3f);
const Colour KAPColour_4 = Colour(0,0,0).withAlpha(0.6f);
const Colour KAPColour_5 = Colour(105,105,105).withAlpha(0.3f);
const Colour KAPColour_6 = Colour(0,0,0).withAlpha(0.8f);
const Colour KAPColour_7 = Colour(125,125,125);

const Font font_1 ( "Helvetica Neue", 12.00f, Font::bold );
const Font font_2 ( "Helvetica Neue", 22.00f, Font::bold );
const Font font_3 ( "Helvetica Neue", 48.00f, Font::bold );
