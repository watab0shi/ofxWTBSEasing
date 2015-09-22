#include "ofApp.h"

using namespace Easing;

string eNames[] = { "QUAD_IN", "QUAD_OUT", "QUAD_INOUT",
                    "CUBIC_IN", "CUBIC_OUT", "CUBIC_INOUT",
                    "QUART_IN", "QUART_OUT", "QUART_INOUT",
                    "QUINT_IN", "QUINT_OUT", "QUINT_INOUT",
                    "SINE_IN", "SINE_OUT", "SINE_INOUT",
                    "EXP_IN", "EXP_OUT", "EXP_INOUT",
                    "CIRC_IN", "CIRC_OUT", "CIRC_INOUT",
                    "ELASTIC_IN", "ELASTIC_OUT", "ELASTIC_INOUT",
                    "BACK_IN", "BACK_OUT", "BACK_INOUT",
                    "BOUNCE_IN", "BOUNCE_OUT", "BOUNCE_INOUT",
                    "LINEAR"  };


////////////////////////////////////////
// setup
////////////////////////////////////////
void ofApp::setup()
{
    //---------------------------------------- basic variables
    w = ofGetWidth();
    h = ofGetHeight();
    
    halfWidth  = ( float )w / 2.0f;
    halfHeight = ( float )h / 2.0f;
    
    
    time      = 0;
    startTime = ofGetElapsedTimef();
    totalTime = 1.0;
    
    ofBackground( 0 );
}


////////////////////////////////////////
// update
////////////////////////////////////////
void ofApp::update()
{
    time = ofGetElapsedTimef() - startTime;
    
    if( time > totalTime )
    {
        time      = 0;
        startTime = ofGetElapsedTimef();
    }
}


////////////////////////////////////////
// draw
////////////////////////////////////////
void ofApp::draw()
{
    float sz  = ( float )h / NUM_EASINGS;
    
    for( int i = 0; i < NUM_EASINGS; ++i )
    {
        float val = easing( ( easingMode )i, time, totalTime );
        
        ( i % 2 == 0 ) ? ofSetColor( 255 ): ofSetColor( 128 );
        
        ofFill();
        ofRect( ( halfWidth / 2 ), sz * i, val * halfWidth, sz );
        
        ofNoFill();
        ofSetColor( 255 );
        ofRect( ( halfWidth / 2 ), sz * i, halfWidth, sz );
        
        ofSetColor( 0 );
        ofDrawBitmapString( eNames[ i ], ( halfWidth / 2 ) + 10, sz * ( i + 1 ) - 2 );
    }
    
    ofSetColor( 255 );
    ofDrawBitmapString( "TotalTime   : " + ofToString( totalTime ), 20, 20 );
    ofDrawBitmapString( "CurrentTime : " + ofToString( time, 3 ), 20, 40 );
}


////////////////////////////////////////
// keyPressed
////////////////////////////////////////
void ofApp::keyPressed( int key )
{
    if( key == '-' )
    {
        totalTime = CLAMP( totalTime - 0.1, 0.5, 3.0 );
        time      = 0;
        startTime = ofGetElapsedTimef();
    }
    if( key == '=' )
    {
        totalTime = CLAMP( totalTime + 0.1, 0.5, 3.0 );
        time      = 0;
        startTime = ofGetElapsedTimef();
    }
}


////////////////////////////////////////
// keyReleased
////////////////////////////////////////
void ofApp::keyReleased( int key )
{
    
}


////////////////////////////////////////
// mouseMoved
////////////////////////////////////////
void ofApp::mouseMoved( int x, int y )
{
    
}


////////////////////////////////////////
// mouseDragged
////////////////////////////////////////
void ofApp::mouseDragged( int x, int y, int button )
{
    
}


////////////////////////////////////////
// mousePressed
////////////////////////////////////////
void ofApp::mousePressed( int x, int y, int button )
{
    
}


////////////////////////////////////////
// mouseReleased
////////////////////////////////////////
void ofApp::mouseReleased( int x, int y, int button )
{
    
}


////////////////////////////////////////
// windowResized
////////////////////////////////////////
void ofApp::windowResized( int _w, int _h )
{
    
}


////////////////////////////////////////
// exit
////////////////////////////////////////
void ofApp::exit()
{
    
}
