

#include "ofxWTBSEasing.h"



double Easing::easing( easingMode m, double t, double totaltime, double max, double min )
{
    // Quad
    if( m == EASING_IN_QUAD )
    {
        return InQuad( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_QUAD )
    {
        return OutQuad( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_QUAD )
    {
        return InOutQuad( t, totaltime, max, min );
    }
    
    // Cubic
    else if( m == EASING_IN_CUBIC )
    {
        return InCubic( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_CUBIC )
    {
        return OutCubic( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_CUBIC )
    {
        return InOutCubic( t, totaltime, max, min );
    }
    
    // Quart
    else if( m == EASING_IN_QUART )
    {
        return InQuart( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_QUART )
    {
        return OutQuart( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_QUART )
    {
        return InOutQuart( t, totaltime, max, min );
    }
    
    // Quint
    else if( m == EASING_IN_QUINT )
    {
        return InQuint( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_QUINT )
    {
        return OutQuint( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_QUINT )
    {
        return InOutQuint( t, totaltime, max, min );
    }
    
    // Sine
    else if( m == EASING_IN_SINE )
    {
        return InSine( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_SINE )
    {
        return OutSine( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_SINE )
    {
        return InOutSine( t, totaltime, max, min );
    }
    
    // Expo
    else if( m == EASING_IN_EXPO )
    {
        return InExpo( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_EXPO )
    {
        return OutExpo( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_EXPO )
    {
        return InOutExpo( t, totaltime, max, min );
    }
    
    // Circ
    else if( m == EASING_IN_CIRC )
    {
        return InCirc( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_CIRC )
    {
        return OutCirc( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_CIRC )
    {
        return InOutCirc( t, totaltime, max, min );
    }
    
    // Elastic
    else if( m == EASING_IN_ELASTIC )
    {
        return InElastic( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_ELASTIC )
    {
        return OutElastic( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_ELASTIC )
    {
        return InOutElastic( t, totaltime, max, min );
    }
    
    // Back
    else if( m == EASING_IN_BACK )
    {
        return InBack( t, totaltime, max, min, 1.70158 );
    }
    else if( m == EASING_OUT_BACK )
    {
        return OutBack( t, totaltime, max, min, 1.70158 );
    }
    else if( m == EASING_INOUT_BACK )
    {
        return InOutBack( t, totaltime, max, min, 1.70158 );
    }
    
    // Bounce
    else if( m == EASING_IN_BOUNCE )
    {
        return InBounce( t, totaltime, max, min );
    }
    else if( m == EASING_OUT_BOUNCE )
    {
        return OutBounce( t, totaltime, max, min );
    }
    else if( m == EASING_INOUT_BOUNCE )
    {
        return InOutBounce( t, totaltime, max, min );
    }
    
    // Linear
    else if( m == EASING_LINEAR )
    {
        return Linear( t, totaltime, max, min );
    }
}


// Quad
double Easing::InQuad( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    return max * ( t * t ) + min;
}

double Easing::OutQuad( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    return -max * ( t * ( t - 2 ) ) + min;
}

double Easing::InOutQuad( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    
    if( ( t / 2 ) < 1 )
    {
        return ( ( ( max / 2 ) * ( t * t ) ) + min ) * 2;
    }
    
    --t;
    return ( -max * ( t * ( t - 2 ) - 1 ) + min ) * 2;
}


// Cubic
double Easing::InCubic( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    return max * ( t * t * t ) + min;
}

double Easing::OutCubic( double t, double totaltime, double max, double min )
{
    max -= min;
    t    = ( t / totaltime ) - 1;
    return max * ( ( t * t * t ) + 1 ) + min;
}

double Easing::InOutCubic( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime / 2;
    
    if( t < 1 )
    {
        return ( max / 2 ) * ( t * t * t ) + min;
    }
    
    t -= 2;
    return ( max / 2 ) * ( ( t * t * t ) + 2 ) + min;
}


// Quart
double Easing::InQuart( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    return max * ( t * t * t * t ) + min;
}

double Easing::OutQuart( double t, double totaltime, double max, double min )
{
    max -= min;
    t    = ( t / totaltime ) - 1;
    return -max * ( ( t * t * t * t ) - 1 ) + min;
}

double Easing::InOutQuart( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime / 2;
    
    if( t < 1 )
    {
        return ( max / 2 ) * ( t * t * t * t ) + min;
    }
    
    t -= 2;
    return -( max / 2 ) * ( ( t * t * t * t ) - 2 ) + min;
}


// Quint
double Easing::InQuint( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    return ( max * ( t * t * t * t * t ) ) + min;
}

double Easing::OutQuint( double t, double totaltime, double max, double min )
{
    max -= min;
    t    = ( t / totaltime ) - 1;
    return max * ( ( t * t * t * t * t ) + 1 ) + min;
}

double Easing::InOutQuint( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime / 2;
    
    if( t < 1 )
    {
        return ( max / 2 ) * ( t * t * t * t * t ) + min;
    }
    
    t -= 2;
    return ( max / 2 ) * ( ( t * t * t * t * t ) + 2 ) + min;
}


// Sine
double Easing::InSine( double t, double totaltime, double max, double min )
{
    max -= min;
    return -max * cos( t * HALF_PI / totaltime ) + max + min;
}

double Easing::OutSine( double t, double totaltime, double max, double min )
{
    max -= min;
    return max * sin( t * HALF_PI / totaltime ) + min;
}

double Easing::InOutSine( double t, double totaltime, double max, double min )
{
    max -= min;
    return -( max / 2 ) * ( cos( t * PI / totaltime ) - 1 ) + min;
}


// Expo
double Easing::InExpo( double t, double totaltime, double max, double min )
{
    max -= min;
    return ( t == 0.0 ) ? min : max * pow( 2, 10 * ( t / totaltime - 1 ) ) + min;
}

double Easing::OutExpo( double t, double totaltime, double max, double min )
{
    max -= min;
    return ( t == totaltime ) ? max + min : max * ( -pow( 2, -10 * t / totaltime ) + 1 ) + min;
}

double Easing::InOutExpo( double t, double totaltime, double max, double min )
{
    if( t == 0.0 )
    {
        return min;
    }
    if( t == totaltime )
    {
        return max;
    }
    
    max -= min;
    t   /= totaltime / 2;
    
    if( t < 1 )
    {
        return ( max / 2 ) * pow( 2, 10 * ( t - 1 ) ) + min;
    }
    
    --t;
    return ( max / 2 ) * ( -pow( 2, -10 * t ) + 2 ) + min;
}


// Circ
double Easing::InCirc( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    return -max * ( sqrt( 1 - ( t * t ) ) - 1 ) + min;
}

double Easing::OutCirc( double t, double totaltime, double max, double min )
{
    max -= min;
    t    = ( t / totaltime ) - 1;
    return max * sqrt( 1 - ( t * t ) ) + min;
}

double Easing::InOutCirc( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime / 2;
    
    if( t < 1 )
    {
        return -( max / 2 ) * ( sqrt( 1 - t * t ) - 1 ) + min;
    }
    
    t -= 2;
    return ( max / 2 ) * ( sqrt( 1 - t * t ) + 1 ) + min;
}


// Elastic
double Easing::InElastic( double t, double totaltime, double max, double min )
{
    double s;
    double p = totaltime * 0.3;
    double a = max;
    
    if( t == 0 )
    {
        return min;
    }
    
    t /= totaltime;
    
    if( t == 1 )
    {
        return min + max;
    }
    
    if( a < abs( max ) )
    {
        a = max;
        s = p / 4;
    }
    else
    {
        s = p / ( 2 * PI ) * asin( max / a );
    }
    
    t -= 1;
    
    return -( a * pow( 2, 10 * t ) * sin( ( ( t * totaltime ) - s ) * ( 2 * PI ) / p ) ) + min;
}

double Easing::OutElastic( double t, double totaltime, double max, double min )
{
    double s;
    double p = totaltime * 0.3;
    double a = max;
    
    if( t == 0 )
    {
        return min;
    }
    
    t /= totaltime;
    
    if( t == 1 )
    {
        return min + max;
    }
    
    if( a < abs( max ) )
    {
        a = max;
        s = p / 4;
    }
    else
    {
        s = p / ( 2 * PI ) * asin( max / a );
    }
    
    return a * pow( 2, -10 * t ) * sin( ( ( t * totaltime ) - s ) * ( 2 * PI ) / p ) + max + min;
}

double Easing::InOutElastic( double t, double totaltime, double max, double min )
{
    double s;
    double p = totaltime * 0.3 * 1.5;
    double a = max;
    
    if( t == 0 )
    {
        return min;
    }
    
    t /= totaltime / 2;
    
    if( t == 2 )
    {
        return min + max;
    }
    
    if( a < abs( max ) )
    {
        a = max;
        s = p / 4;
    }
    else
    {
        s = p / ( 2 * PI ) * asin( max / a );
    }
    
    if( t < 1 )
    {
        t -= 1;
        return -0.5 * ( a * pow( 2, 10 * t ) * sin( ( ( t * totaltime ) - s ) * ( ( 2 * PI ) / p ) ) ) + min;
    }
    
    t -= 1;
    
    return a * pow( 2, -10 * t ) * sin( ( ( t * totaltime ) - s ) * ( ( 2 * PI ) / p ) ) * 0.5 + max + min;
}


// Back
double Easing::InBack( double t, double totaltime, double max, double min, double s )
{
    max -= min;
    t   /= totaltime;
    
    return max * t * t * ( ( ( s + 1 ) * t ) - s ) + min;
}

double Easing::OutBack( double t, double totaltime, double max, double min, double s )
{
    max -= min;
    t    = ( t / totaltime ) - 1;
    
    return max * ( t * t * ( ( s + 1 ) * t + s ) + 1 ) + min;
}

double Easing::InOutBack( double t, double totaltime, double max, double min, double s )
{
    max -= min;
    s   *= 1.525;
    t   /= totaltime / 2;
    
    if( t < 1 )
    {
        return ( max / 2 ) * ( t * t * ( ( s + 1 ) * t - s ) ) + min;
    }
    
    t -= 2;
    
    return ( max / 2 ) * ( t * t * ( ( s + 1 ) * t + s ) + 2 ) + min;
}


// Bounce
double Easing::InBounce( double t, double totaltime, double max, double min )
{
    return max - OutBounce( totaltime - t , totaltime , max - min , 0 ) + min;
}

double Easing::OutBounce( double t, double totaltime, double max, double min )
{
    max -= min;
    t   /= totaltime;
    
    if( t < ( 1. / 2.75 ) )
    {
        return max * ( 7.5625 * t * t ) + min;
    }
    else if( t < ( 2. / 2.75 ) )
    {
        t -= 1.5 / 2.75;
        return max * ( ( 7.5625 * t * t ) + 0.75 ) + min;
    }
    else if( t < ( 2.5 / 2.75 ) )
    {
        t -= 2.25 / 2.75;
        return max * ( ( 7.5625 * t * t ) + 0.9375 ) + min;
    }
    else
    {
        t -= 2.625 / 2.75;
        return max * ( ( 7.5625 * t * t ) + 0.984375 ) + min;
    }
}

double Easing::InOutBounce( double t, double totaltime, double max, double min )
{
    if( t < ( totaltime / 2 ) )
    {
        return InBounce( t * 2, totaltime, max - min, 0 ) * 0.5 + min;
    }
    else
    {
        return OutBounce( t * 2 - totaltime, totaltime, max - min, 0 ) * 0.5 + min + ( max - min ) * 0.5;
    }
}


// Linear
double Easing::Linear( double t, double totaltime, double max, double min )
{
    return ( max - min ) * t / totaltime + min;
}