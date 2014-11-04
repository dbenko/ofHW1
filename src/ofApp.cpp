#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(50); // background color: dark gray
    ofSetCircleResolution(50); // circle Res
    
    // call the setup function just for the bubbles
    bubble.setup();
   
    // call the setup function for all the bubbles
    for (int i = 0; i < NUMS; i++) {
        thisBubble[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // first we move bubbles
    bubble.move();
    
    for (int i = 0; i < NUMS; i=i+1) {
        thisBubble[i].move();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // we'll draw bubble to the screen
    bubble.display();
    
    // then all the ernies
    for (int i = 0; i < NUMS; i++) {
        thisBubble[i].display();
    }
}


