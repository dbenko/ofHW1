//
//  Bubbles.h
//  Desiree Benko
//  CCLAB 11-3-14


#pragma once

#include "ofMain.h"

class Bubbles {
public:
    
    // constructor
    Bubbles();
    
    // variables
    float posX, posY;
    float velX, velY;
    float size;
    float r, g, b;
    
    // methods
    void setup();
    void move();
    void display();

    
    
};