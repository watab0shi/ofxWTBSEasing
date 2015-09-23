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
    float hw = ( float )ofGetWidth() / 2;
    float sz = ( float )ofGetHeight() / NUM_EASINGS;
    
    for( int i = 0; i < NUM_EASINGS; ++i )
    {
        float val = easing( ( easingMode )i, time, totalTime );
        
        ( i % 2 == 0 ) ? ofSetColor( 255 ): ofSetColor( 128 );
        
        ofFill();
        ofRect( ( hw / 2 ), sz * i, val * hw, sz );
        
        ofNoFill();
        ofSetColor( 255 );
        ofRect( ( hw / 2 ), sz * i, hw, sz );
        
        ofSetColor( 0 );
        ofDrawBitmapString( eNames[ i ], ( hw / 2 ) + 10, sz * ( i + 1 ) - 2 );
    }
    
    ofSetColor( 255 );
    ofDrawBitmapString( "OF_KEY_DOWN : TotalTime -= 0.1", 20, 20 );
    ofDrawBitmapString( "OF_KEY_UP   : TotalTime += 0.1", 20, 40 );
    ofDrawBitmapString( "TotalTime   : " + ofToString( totalTime ), 20, 60 );
    ofDrawBitmapString( "CurrentTime : " + ofToString( time, 3 ), 20, 80 );
}


////////////////////////////////////////
// keyPressed
////////////////////////////////////////
void ofApp::keyPressed( int key )
{
    if( key == OF_KEY_DOWN )
    {
        totalTime = CLAMP( totalTime - 0.1, 0.5, 3.0 );
        time      = 0;
        startTime = ofGetElapsedTimef();
    }
    if( key == OF_KEY_UP )
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
