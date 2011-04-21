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
    
//    t1 = 0.0f;
//    count = 1;
}


p2d::Actor::~Actor() {
    // TODO: see if we need to remove the texture
}


/*
void p2d::Actor::transformForAnchor() {
    if (anchor.x != 0.0f || anchor.y != 0.0f) {
        glLoadIdentity();
        glTranslatef(dim_x * -anchor.x, dim_y * -anchor.y, 0.0f);
    }
}


inline void p2d::Actor::transformForScale() {
    scaled_dim_x = dim_x * scale;
    scaled_dim_y = dim_y * scale;
}
*/

void p2d::Actor::draw() {
    scaled_dim_x = 64.0f;
    scaled_dim_y = 64.0f;
//    // TODO: this shouldn't be rebuilt every frame...
    static const GLfloat squareVertices[] = {
        0.0f, 0.0f, 0.0f,
        scaled_dim_x, 0.0f, 0.0f,
        0.0f, scaled_dim_y, 0.0f,
        scaled_dim_x, scaled_dim_y, 0.0f
    };

    
    glm::mat4 ortho = glm::ortho(0.0f, 768.0f, 1024.0f, 0.0f, -100.0f, 100.0f);
    
    glm::mat4 trans = glm::translate(glm::mat4(1.0f), glm::vec3(704.0f, 0.0f, 0.0f));
    
    glm::mat4 mvp = ortho * trans;
    
    p2d::ShaderManager::Inst()->useProgram("move_color");
    
    GLuint pos = p2d::ShaderManager::Inst()->getAttribLocation("position");
    GLuint uMVP = p2d::ShaderManager::Inst()->getUniformLocation("uMVP");

    glVertexAttribPointer(pos, 3, GL_FLOAT, 0, 0, squareVertices);
    glUniformMatrix4fv(uMVP, 1, GL_FALSE, glm::value_ptr(mvp));
    glEnableVertexAttribArray(pos);
    
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}

//void p2d::Actor::draw() {
//    transformForScale();
//    
//    static const GLfloat squareVertices[] = {
//        0.0f, 0.0f, 0.0f,
//        scaled_dim_x, 0.0f, 0.0f,
//        0.0f, scaled_dim_y, 0.0f,
//        scaled_dim_x, scaled_dim_y, 0.0f
//    };
//    
//    static const GLfloat textureVerticies[] = {
//        0.0f, 0.0f, 0.0f,
//        1.0f, 0.0f, 0.0f,
//        0.0f, 1.0f, 0.0f,
//        1.0f, 1.0f, 0.0f
//    };
//
//    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
//    p2d::TextureManager::Inst()->bindTexture(image);
//    
//    // move and rotate the geometry
//    transformForAnchor();
//    glLoadIdentity();
//    glTranslatef(pos.x, pos.y, 0.0f);
//    
//    // handle states and draw the geometry and texture
//    glEnableClientState(GL_VERTEX_ARRAY);
//    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
//    
//    glVertexPointer(3, GL_FLOAT, 0, squareVertices);
//    glTexCoordPointer(3, GL_FLOAT, 0, textureVerticies);
//    
//    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
//
//    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
//    glDisableClientState(GL_VERTEX_ARRAY);
// }