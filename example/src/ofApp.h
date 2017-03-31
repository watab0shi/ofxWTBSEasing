#pragma once

#include "ofMain.h"
#include "ofxWTBSEasing.h"


// ofApp
//--------------------------------------------------------------------------------
class ofApp : public ofBaseApp
{
public:
  void setup();
  void update();
  void draw();
  void keyPressed( int _key );
  
  float time;
  float startTime;
  float totalTime;
};
