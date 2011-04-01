/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "actor.h"

p2d::Actor::Actor(p2d::pxyCoords _coords, char* _image) {
    pos = _coords;
    
    // load the image
    
    // get the dimensions of the image
    dim_x = 64.0f;
    dim_y = 64.0f;
}


p2d::Actor::~Actor() {
    
}


void p2d::Actor::draw() {
    
    static const GLfloat squareVertices[] = {
        0.0f, 0.0f, 0.0f,
        dim_x, 0.0f, 0.0f,
        0.0f, dim_y, 0.0f,
        dim_x, dim_y, 0.0f
    };
    
//    static const GLfloat squareVertices[] = {
//        0.0f, dim_y, 0.0f,
//        dim_x, dim_y, 0.0f, 
//        0.0f, 0.0f, 0.0f, 
//        dim_x, 0.0f, 0.0f
//    };

    glLoadIdentity();
    glTranslatef(pos.x, pos.y, 0.0f);
    
    glEnableClientState(GL_VERTEX_ARRAY);
    
    glVertexPointer(3, GL_FLOAT, 0, squareVertices);
    
    glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glDisableClientState(GL_VERTEX_ARRAY);
}