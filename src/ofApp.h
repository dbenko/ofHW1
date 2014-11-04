#pragma once
#include "ofMain.h"
#include "Bubbles.h"
#define NUMS 100


class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();

    
    // bubbles is a standalone Walrus
    Bubbles bubble;
    
    // ernie is an array of Walruses
    Bubbles thisBubble[NUMS];
    
};
