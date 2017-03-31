
#pragma once

#include "ofMain.h"


#define NUM_EASINGS 31


// Easing
//--------------------------------------------------------------------------------
namespace Easing
{
  enum easingMode
  {
    EASE_IN_QUAD = 0,
    EASE_OUT_QUAD,
    EASE_INOUT_QUAD,
    
    EASE_IN_CUBIC,
    EASE_OUT_CUBIC,
    EASE_INOUT_CUBIC,
    
    EASE_IN_QUART,
    EASE_OUT_QUART,
    EASE_INOUT_QUART,
    
    EASE_IN_QUINT,
    EASE_OUT_QUINT,
    EASE_INOUT_QUINT,
    
    EASE_IN_SINE,
    EASE_OUT_SINE,
    EASE_INOUT_SINE,
    
    EASE_IN_EXPO,
    EASE_OUT_EXPO,
    EASE_INOUT_EXPO,
    
    EASE_IN_CIRC,
    EASE_OUT_CIRC,
    EASE_INOUT_CIRC,
    
    EASE_IN_ELASTIC,
    EASE_OUT_ELASTIC,
    EASE_INOUT_ELASTIC,
    
    EASE_IN_BACK,
    EASE_OUT_BACK,
    EASE_INOUT_BACK,
    
    EASE_IN_BOUNCE,
    EASE_OUT_BOUNCE,
    EASE_INOUT_BOUNCE,
    
    EASE_LINEAR,
  };
  
  float easing( easingMode m, float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  // Quad
  float InQuad( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutQuad( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutQuad( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Cubic
  float InCubic( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutCubic( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutCubic( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Quart
  float InQuart( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutQuart( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutQuart( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Quint
  float InQuint( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutQuint( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutQuint( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Sine
  float InSine( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutSine( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutSine( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Expo
  float InExpo( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutExpo( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutExpo( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Circ
  float InCirc( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutCirc( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutCirc( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Elastic
  float InElastic( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutElastic( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutElastic( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Back
  float InBack( float t, float totaltime, float max, float min, float s );
  float OutBack( float t, float totaltime, float max, float min, float s );
  float InOutBack( float t, float totaltime, float max, float min, float s );
  
  
  // Bounce
  float InBounce( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float OutBounce( float t, float totaltime, float max = 1.0, float min = 0.0 );
  float InOutBounce( float t, float totaltime, float max = 1.0, float min = 0.0 );
  
  
  // Linear
  float Linear( float t, float totaltime, float max = 1.0, float min = 0.0 );
}