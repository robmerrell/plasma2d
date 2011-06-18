/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "actor.h"

p2d::Actor::Actor() {
    
}

p2d::Actor::Actor(p2d::pxyCoords _coords, std::string _image) {
    pos = _coords;
    
    setImage(_image);
}


p2d::Actor::~Actor() {
    // TODO: see if we need to remove the texture
}


void p2d::Actor::setImage(std::string _image) {
    // load the image
    image = _image;
    p2d::TextureManager::Inst()->loadTexture(_image);
    
    // get the dimensions of the image
    width = 64.0f;
    height = 64.0f;
    
    // sprite geometry
    sprite_verts[0] = glm::vec3(0.0f, 0.0f, 0.0f);
    sprite_verts[1] = glm::vec3(width, 0.0f, 0.0f);
    sprite_verts[2] = glm::vec3(0.0f, height, 0.0f);
    sprite_verts[3] = glm::vec3(width, height, 0.0f);
    
    // texture coords
    // TODO: this should be a 4x2 matrix
    tex_coords[0] = glm::vec4(0.0f, 0.0f, 0.0f, 0.0f);
    tex_coords[1] = glm::vec4(1.0f, 0.0f, 0.0f, 0.0f);
    tex_coords[2] = glm::vec4(0.0f, 1.0f, 0.0f, 0.0f);
    tex_coords[3] = glm::vec4(1.0f, 1.0f, 0.0f, 0.0f);
}


// TODO: Can this be done using the struct instead? This is freaking hacky...
void p2d::Actor::setXY(float _x, float _y) {
    pos = pxy(_x, _y);
}


void p2d::Actor::draw() {
    // change the anchor point
    float anchor_x = width * scale * -anchor.x;
    float anchor_y = height * scale * -anchor.y;
    
    // transformations
    glm::mat4 trans = glm::translate(glm::mat4(1.0f), glm::vec3(pos.x + anchor_x, pos.y + anchor_y, 0.0f));
    glm::mat4 mvp = p2d::Director::Inst()->getProjection() * trans;
    
    if (angle != 0.0f)
        mvp *= glm::rotate(trans, angle, glm::vec3(0.0f, 0.0f, 1.0f));
    
    if (scale != 1.0f)
        mvp *= glm::scale(glm::mat4(1.0f), glm::vec3(scale, scale, 0.0f));
    
    p2d::TextureManager::Inst()->bindTexture(image);
    
    p2d::ShaderManager::Inst()->useProgram("move_color");
    
    GLuint vert_coords = p2d::ShaderManager::Inst()->getAttribLocation("vert_coords");
    GLuint tex_matrix = p2d::ShaderManager::Inst()->getAttribLocation("tex_matrix");
    GLuint uMVP = p2d::ShaderManager::Inst()->getUniformLocation("uMVP");

    glVertexAttribPointer(vert_coords, 3, GL_FLOAT, 0, 0, glm::value_ptr(sprite_verts));
    glVertexAttribPointer(tex_matrix, 4, GL_FLOAT, 0, 0, glm::value_ptr(tex_coords));
    glUniformMatrix4fv(uMVP, 1, GL_FALSE, glm::value_ptr(mvp));
    glEnableVertexAttribArray(vert_coords);
    glEnableVertexAttribArray(tex_matrix);
    
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}
