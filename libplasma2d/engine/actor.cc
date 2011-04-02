/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "actor.h"

p2d::Actor::Actor(p2d::pxyCoords _coords, std::string _image) {
    pos = _coords;
    
    // load the image
    image = _image;
    p2d::TextureManager::Inst()->loadTexture(_image);
    
    // get the dimensions of the image
    dim_x = 64.0f;
    dim_y = 64.0f;
}


p2d::Actor::~Actor() {
    // TODO: see if we need to remove the texture
}


void p2d::Actor::transformForAnchor() {
    if (anchor.x != 0.0f || anchor.y != 0.0f) {
        glLoadIdentity();
        glTranslatef(dim_x * -anchor.x, dim_y * -anchor.y, 0.0f);
    }
}


void p2d::Actor::transformForScale() {
    if (scale != 1.0f) {
        dim_x *= scale;
        dim_y *= scale;
    }
}


void p2d::Actor::draw() {
    
    transformForScale();
    
    static const GLfloat squareVertices[] = {
        0.0f, 0.0f, 0.0f,
        dim_x, 0.0f, 0.0f,
        0.0f, dim_y, 0.0f,
        dim_x, dim_y, 0.0f
    };
    
    static const GLfloat textureVerticies[] = {
        0.0f, 0.0f, 0.0f,
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        1.0f, 1.0f, 0.0f
    };

    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    p2d::TextureManager::Inst()->bindTexture(image);
    
    // move and rotate the geometry
    glLoadIdentity();
    transformForAnchor();
    glTranslatef(pos.x, pos.y, 0.0f);
    
    // handle states and draw the geometry and texture
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    
    glVertexPointer(3, GL_FLOAT, 0, squareVertices);
    glTexCoordPointer(3, GL_FLOAT, 0, textureVerticies);
    
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
}