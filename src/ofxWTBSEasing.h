
#pragma once

#include "ofMain.h"


#define NUM_EASINGS 31

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Easing
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace Easing
{
    enum easingMode
    {
        EASING_IN_QUAD = 0,
        EASING_OUT_QUAD,
        EASING_INOUT_QUAD,
        
        EASING_IN_CUBIC,
        EASING_OUT_CUBIC,
        EASING_INOUT_CUBIC,
        
        EASING_IN_QUART,
        EASING_OUT_QUART,
        EASING_INOUT_QUART,
        
        EASING_IN_QUINT,
        EASING_OUT_QUINT,
        EASING_INOUT_QUINT,
        
        EASING_IN_SINE,
        EASING_OUT_SINE,
        EASING_INOUT_SINE,
        
        EASING_IN_EXPO,
        EASING_OUT_EXPO,
        EASING_INOUT_EXPO,
        
        EASING_IN_CIRC,
        EASING_OUT_CIRC,
        EASING_INOUT_CIRC,
        
        EASING_IN_ELASTIC,
        EASING_OUT_ELASTIC,
        EASING_INOUT_ELASTIC,
        
        EASING_IN_BACK,
        EASING_OUT_BACK,
        EASING_INOUT_BACK,
        
        EASING_IN_BOUNCE,
        EASING_OUT_BOUNCE,
        EASING_INOUT_BOUNCE,
        
        EASING_LINEAR,
    };
    
    double easing( easingMode m, double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    // Quad
    double InQuad( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutQuad( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutQuad( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Cubic
    double InCubic( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutCubic( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutCubic( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Quart
    double InQuart( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutQuart( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutQuart( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Quint
    double InQuint( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutQuint( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutQuint( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Sine
    double InSine( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutSine( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutSine( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Expo
    double InExpo( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutExpo( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutExpo( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Circ
    double InCirc( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutCirc( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutCirc( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Elastic
    double InElastic( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutElastic( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutElastic( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Back
    double InBack( double t, double totaltime, double max, double min, double s );
    
    double OutBack( double t, double totaltime, double max, double min, double s );
    
    double InOutBack( double t, double totaltime, double max, double min, double s );
    
    
    // Bounce
    double InBounce( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double OutBounce( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    double InOutBounce( double t, double totaltime, double max = 1.0, double min = 0.0 );
    
    
    // Linear
    double Linear( double t, double totaltime, double max = 1.0, double min = 0.0 );
}