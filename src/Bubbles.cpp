//
//  Bubbles.cpp
//  Desiree Benko
//  CCLAB 11-3-14

#include "Bubbles.h"


Bubbles::Bubbles() {
    
    ofSetFrameRate(10);

}




void Bubbles::setup() {

    
    //size of bubbles
    size = ofRandom(20, 40);
    
    //speed of bubbles
    velX = ofRandom(-5, 5);
    velY = ofRandom(-5, 5);
    
    //color of bubbles
    r = ofRandom(100, 255);
    g = ofRandom(100, 255);
    b = ofRandom(100, 255);
}




void Bubbles::move () {

    
//   ---------- Movement in X direction ----------
    
    float timeX = ofGetElapsedTimef() * 2;
    float amplitudeX = 300;
    float baseX = ofRandom(50, 1000);

    posX = baseX + amplitudeX * cos(timeX);
    
    
//    ---------- Movement in Y direction ----------
    
    posY = ofRandom(50, 708);
    
}




void Bubbles::display() {
    
    // draw circles
    ofSetColor(r, g, b);
    ofCircle(posX, posY, size);
    
    // draw dots on circles
    ofSetColor(0);
    ofCircle(posX + 25, posY - 5, size/3);

}


