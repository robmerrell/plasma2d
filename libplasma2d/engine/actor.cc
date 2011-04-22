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
    width = 64.0f;
    height = 64.0f;
}


p2d::Actor::~Actor() {
    // TODO: see if we need to remove the texture
}


void p2d::Actor::draw() {
    // TODO: this should be done in the constructor
    static const GLfloat squareVertices[] = {
        0.0f, 0.0f, 0.0f,
        width, 0.0f, 0.0f,
        0.0f, height, 0.0f,
        width, height, 0.0f
    };
    
    // change the anchor point
    // TODO: this should be done in setAnchor, not here
    float anchor_x = width * -anchor.x;
    float anchor_y = height * -anchor.y;
    
    
    // transformations
    glm::mat4 trans = glm::translate(glm::mat4(1.0f), glm::vec3(pos.x + anchor_x, pos.y + anchor_y, 0.0f));
    glm::mat4 mvp = p2d::Director::Inst()->getProjection() * trans;
    
    if (angle != 0.0f)
        mvp *= glm::rotate(trans, angle, glm::vec3(0.0f, 0.0f, 1.0f));
    
    if (scale != 1.0f)
        mvp *= glm::scale(glm::mat4(1.0f), glm::vec3(scale, scale, 0.0f));
    
    
    p2d::ShaderManager::Inst()->useProgram("move_color");
    
    GLuint pos = p2d::ShaderManager::Inst()->getAttribLocation("position");
    GLuint uMVP = p2d::ShaderManager::Inst()->getUniformLocation("uMVP");

    glVertexAttribPointer(pos, 3, GL_FLOAT, 0, 0, squareVertices);
    glUniformMatrix4fv(uMVP, 1, GL_FALSE, glm::value_ptr(mvp));
    glEnableVertexAttribArray(pos);
    
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}
