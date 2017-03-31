

#include "ofxWTBSEasing.h"


// easing
//----------------------------------------
float Easing::easing( easingMode _m, float _t, float _totalTime, float _max, float _min )
{
  // Quad
  if( _m == EASE_IN_QUAD )
  {
    return InQuad( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_QUAD )
  {
    return OutQuad( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_QUAD )
  {
    return InOutQuad( _t, _totalTime, _max, _min );
  }
  
  // Cubic
  else if( _m == EASE_IN_CUBIC )
  {
    return InCubic( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_CUBIC )
  {
    return OutCubic( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_CUBIC )
  {
    return InOutCubic( _t, _totalTime, _max, _min );
  }
  
  // Quart
  else if( _m == EASE_IN_QUART )
  {
    return InQuart( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_QUART )
  {
    return OutQuart( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_QUART )
  {
    return InOutQuart( _t, _totalTime, _max, _min );
  }
  
  // Quint
  else if( _m == EASE_IN_QUINT )
  {
    return InQuint( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_QUINT )
  {
    return OutQuint( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_QUINT )
  {
    return InOutQuint( _t, _totalTime, _max, _min );
  }
  
  // Sine
  else if( _m == EASE_IN_SINE )
  {
    return InSine( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_SINE )
  {
    return OutSine( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_SINE )
  {
    return InOutSine( _t, _totalTime, _max, _min );
  }
  
  // Expo
  else if( _m == EASE_IN_EXPO )
  {
    return InExpo( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_EXPO )
  {
    return OutExpo( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_EXPO )
  {
    return InOutExpo( _t, _totalTime, _max, _min );
  }
  
  // Circ
  else if( _m == EASE_IN_CIRC )
  {
    return InCirc( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_CIRC )
  {
    return OutCirc( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_CIRC )
  {
    return InOutCirc( _t, _totalTime, _max, _min );
  }
  
  // Elastic
  else if( _m == EASE_IN_ELASTIC )
  {
    return InElastic( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_ELASTIC )
  {
    return OutElastic( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_ELASTIC )
  {
    return InOutElastic( _t, _totalTime, _max, _min );
  }
  
  // Back
  else if( _m == EASE_IN_BACK )
  {
    return InBack( _t, _totalTime, _max, _min, 1.70158 );
  }
  else if( _m == EASE_OUT_BACK )
  {
    return OutBack( _t, _totalTime, _max, _min, 1.70158 );
  }
  else if( _m == EASE_INOUT_BACK )
  {
    return InOutBack( _t, _totalTime, _max, _min, 1.70158 );
  }
  
  // Bounce
  else if( _m == EASE_IN_BOUNCE )
  {
    return InBounce( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_OUT_BOUNCE )
  {
    return OutBounce( _t, _totalTime, _max, _min );
  }
  else if( _m == EASE_INOUT_BOUNCE )
  {
    return InOutBounce( _t, _totalTime, _max, _min );
  }
  
  // Linear
  else if( _m == EASE_LINEAR )
  {
    return Linear( _t, _totalTime, _max, _min );
  }
}



// InQuad
//----------------------------------------
float Easing::InQuad( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  return _max * ( _t * _t ) + _min;
}

// OutQuad
//----------------------------------------
float Easing::OutQuad( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  return -_max * ( _t * ( _t - 2 ) ) + _min;
}

// InOutQuad
//----------------------------------------
float Easing::InOutQuad( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  
  if( ( _t / 2 ) < 1 )
  {
    return ( ( ( _max / 2 ) * ( _t * _t ) ) + _min ) * 2;
  }
  
  --_t;
  return ( -_max * ( _t * ( _t - 2 ) - 1 ) + _min ) * 2;
}



// InCubic
//----------------------------------------
float Easing::InCubic( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  return _max * ( _t * _t * _t ) + _min;
}

// OutCubic
//----------------------------------------
float Easing::OutCubic( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t    = ( _t / _totalTime ) - 1;
  return _max * ( ( _t * _t * _t ) + 1 ) + _min;
}

// InOutCubic
//----------------------------------------
float Easing::InOutCubic( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime / 2;
  
  if( _t < 1 )
  {
    return ( _max / 2 ) * ( _t * _t * _t ) + _min;
  }
  
  _t -= 2;
  return ( _max / 2 ) * ( ( _t * _t * _t ) + 2 ) + _min;
}



// InQuart
//----------------------------------------
float Easing::InQuart( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  return _max * ( _t * _t * _t * _t ) + _min;
}

// OutQuart
//----------------------------------------
float Easing::OutQuart( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t    = ( _t / _totalTime ) - 1;
  return -_max * ( ( _t * _t * _t * _t ) - 1 ) + _min;
}

// InOutQuart
//----------------------------------------
float Easing::InOutQuart( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime / 2;
  
  if( _t < 1 )
  {
    return ( _max / 2 ) * ( _t * _t * _t * _t ) + _min;
  }
  
  _t -= 2;
  return -( _max / 2 ) * ( ( _t * _t * _t * _t ) - 2 ) + _min;
}



// InQuint
//----------------------------------------
float Easing::InQuint( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  return ( _max * ( _t * _t * _t * _t * _t ) ) + _min;
}

// OutQuint
//----------------------------------------
float Easing::OutQuint( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t    = ( _t / _totalTime ) - 1;
  return _max * ( ( _t * _t * _t * _t * _t ) + 1 ) + _min;
}

// InOutQuint
//----------------------------------------
float Easing::InOutQuint( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime / 2;
  
  if( _t < 1 )
  {
    return ( _max / 2 ) * ( _t * _t * _t * _t * _t ) + _min;
  }
  
  _t -= 2;
  return ( _max / 2 ) * ( ( _t * _t * _t * _t * _t ) + 2 ) + _min;
}



// InSine
//----------------------------------------
float Easing::InSine( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  return -_max * cos( _t * HALF_PI / _totalTime ) + _max + _min;
}

// OutSine
//----------------------------------------
float Easing::OutSine( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  return _max * sin( _t * HALF_PI / _totalTime ) + _min;
}

// InOutSine
//----------------------------------------
float Easing::InOutSine( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  return -( _max / 2 ) * ( cos( _t * PI / _totalTime ) - 1 ) + _min;
}



// InExpo
//----------------------------------------
float Easing::InExpo( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  return ( _t == 0.0 ) ? _min : _max * pow( 2, 10 * ( _t / _totalTime - 1 ) ) + _min;
}

// OutExpo
//----------------------------------------
float Easing::OutExpo( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  return ( _t == _totalTime ) ? _max + _min : _max * ( -pow( 2, -10 * _t / _totalTime ) + 1 ) + _min;
}

// InOutExpo
//----------------------------------------
float Easing::InOutExpo( float _t, float _totalTime, float _max, float _min )
{
  if( _t == 0.0 )
  {
    return _min;
  }
  if( _t == _totalTime )
  {
    return _max;
  }
  
  _max -= _min;
  _t   /= _totalTime / 2;
  
  if( _t < 1 )
  {
    return ( _max / 2 ) * pow( 2, 10 * ( _t - 1 ) ) + _min;
  }
  
  --_t;
  return ( _max / 2 ) * ( -pow( 2, -10 * _t ) + 2 ) + _min;
}



// InCirc
//----------------------------------------
float Easing::InCirc( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  return -_max * ( sqrt( 1 - ( _t * _t ) ) - 1 ) + _min;
}

// OutCirc
//----------------------------------------
float Easing::OutCirc( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t    = ( _t / _totalTime ) - 1;
  return _max * sqrt( 1 - ( _t * _t ) ) + _min;
}

// InOutCirc
//----------------------------------------
float Easing::InOutCirc( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime / 2;
  
  if( _t < 1 )
  {
    return -( _max / 2 ) * ( sqrt( 1 - _t * _t ) - 1 ) + _min;
  }
  
  _t -= 2;
  return ( _max / 2 ) * ( sqrt( 1 - _t * _t ) + 1 ) + _min;
}



// InElastic
//----------------------------------------
float Easing::InElastic( float _t, float _totalTime, float _max, float _min )
{
  float s;
  float p = _totalTime * 0.3;
  float a = _max;
  
  if( _t == 0 )
  {
    return _min;
  }
  
  _t /= _totalTime;
  
  if( _t == 1 )
  {
    return _min + _max;
  }
  
  if( a < abs( _max ) )
  {
    a = _max;
    s = p / 4;
  }
  else
  {
    s = p / ( 2 * PI ) * asin( _max / a );
  }
  
  _t -= 1;
  
  return -( a * pow( 2, 10 * _t ) * sin( ( ( _t * _totalTime ) - s ) * ( 2 * PI ) / p ) ) + _min;
}

// OutElastic
//----------------------------------------
float Easing::OutElastic( float _t, float _totalTime, float _max, float _min )
{
  float s;
  float p = _totalTime * 0.3;
  float a = _max;
  
  if( _t == 0 )
  {
    return _min;
  }
  
  _t /= _totalTime;
  
  if( _t == 1 )
  {
    return _min + _max;
  }
  
  if( a < abs( _max ) )
  {
    a = _max;
    s = p / 4;
  }
  else
  {
    s = p / ( 2 * PI ) * asin( _max / a );
  }
  
  return a * pow( 2, -10 * _t ) * sin( ( ( _t * _totalTime ) - s ) * ( 2 * PI ) / p ) + _max + _min;
}

// InOutElastic
//----------------------------------------
float Easing::InOutElastic( float _t, float _totalTime, float _max, float _min )
{
  float s;
  float p = _totalTime * 0.3 * 1.5;
  float a = _max;
  
  if( _t == 0 )
  {
    return _min;
  }
  
  _t /= _totalTime / 2;
  
  if( _t == 2 )
  {
    return _min + _max;
  }
  
  if( a < abs( _max ) )
  {
    a = _max;
    s = p / 4;
  }
  else
  {
    s = p / ( 2 * PI ) * asin( _max / a );
  }
  
  if( _t < 1 )
  {
    _t -= 1;
    return -0.5 * ( a * pow( 2, 10 * _t ) * sin( ( ( _t * _totalTime ) - s ) * ( ( 2 * PI ) / p ) ) ) + _min;
  }
  
  _t -= 1;
  
  return a * pow( 2, -10 * _t ) * sin( ( ( _t * _totalTime ) - s ) * ( ( 2 * PI ) / p ) ) * 0.5 + _max + _min;
}



// InBack
//----------------------------------------
float Easing::InBack( float _t, float _totalTime, float _max, float _min, float s )
{
  _max -= _min;
  _t   /= _totalTime;
  
  return _max * _t * _t * ( ( ( s + 1 ) * _t ) - s ) + _min;
}

// OutBack
//----------------------------------------
float Easing::OutBack( float _t, float _totalTime, float _max, float _min, float s )
{
  _max -= _min;
  _t    = ( _t / _totalTime ) - 1;
  
  return _max * ( _t * _t * ( ( s + 1 ) * _t + s ) + 1 ) + _min;
}

// InOutBack
//----------------------------------------
float Easing::InOutBack( float _t, float _totalTime, float _max, float _min, float s )
{
  _max -= _min;
  s   *= 1.525;
  _t   /= _totalTime / 2;
  
  if( _t < 1 )
  {
    return ( _max / 2 ) * ( _t * _t * ( ( s + 1 ) * _t - s ) ) + _min;
  }
  
  _t -= 2;
  
  return ( _max / 2 ) * ( _t * _t * ( ( s + 1 ) * _t + s ) + 2 ) + _min;
}



// InBounce
//----------------------------------------
float Easing::InBounce( float _t, float _totalTime, float _max, float _min )
{
  return _max - OutBounce( _totalTime - _t , _totalTime , _max - _min , 0 ) + _min;
}

// OutBounce
//----------------------------------------
float Easing::OutBounce( float _t, float _totalTime, float _max, float _min )
{
  _max -= _min;
  _t   /= _totalTime;
  
  if( _t < ( 1. / 2.75 ) )
  {
    return _max * ( 7.5625 * _t * _t ) + _min;
  }
  else if( _t < ( 2. / 2.75 ) )
  {
    _t -= 1.5 / 2.75;
    return _max * ( ( 7.5625 * _t * _t ) + 0.75 ) + _min;
  }
  else if( _t < ( 2.5 / 2.75 ) )
  {
    _t -= 2.25 / 2.75;
    return _max * ( ( 7.5625 * _t * _t ) + 0.9375 ) + _min;
  }
  else
  {
    _t -= 2.625 / 2.75;
    return _max * ( ( 7.5625 * _t * _t ) + 0.984375 ) + _min;
  }
}

// InOutBounce
//----------------------------------------
float Easing::InOutBounce( float _t, float _totalTime, float _max, float _min )
{
  if( _t < ( _totalTime / 2 ) )
  {
    return InBounce( _t * 2, _totalTime, _max - _min, 0 ) * 0.5 + _min;
  }
  else
  {
    return OutBounce( _t * 2 - _totalTime, _totalTime, _max - _min, 0 ) * 0.5 + _min + ( _max - _min ) * 0.5;
  }
}



// Linear
//----------------------------------------
float Easing::Linear( float _t, float _totalTime, float _max, float _min )
{
  return ( _max - _min ) * _t / _totalTime + _min;
}
