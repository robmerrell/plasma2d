/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "actor.h"

p2d::Actor::Actor() {
    
}

p2d::Actor::Actor(Texture* _texture, float _x, float _y) {
    setImage(_texture);
    setXY(_x, _y);
}

p2d::Actor::~Actor() {
    // TODO: see if we need to remove the texture
}


void p2d::Actor::setImage(Texture* _image) {
    texture = _image;
    
    // get the dimensions of the image
    width = _image->getNativeWidth();
    height = _image->getNativeHeight();
    
    cacheVerts();
    cacheTextureCoords();
}


void p2d::Actor::setDimensions(float _width, float _height) {
    width = _width;
    height = _height;
    
    cacheVerts();
}

float p2d::Actor::getWidth() {
    return width;
}

float p2d::Actor::getHeight() {
    return height;
}


void p2d::Actor::cacheVerts() {
    sprite_verts[0] = glm::vec3(0.0f, 0.0f, 0.0f);
    sprite_verts[1] = glm::vec3(width, 0.0f, 0.0f);
    sprite_verts[2] = glm::vec3(0.0f, height, 0.0f);
    sprite_verts[3] = glm::vec3(width, height, 0.0f);
}


void p2d::Actor::cacheTextureCoords() {
    tex_coords[0] = glm::vec4(0.0f, 0.0f, 0.0f, 0.0f);
    tex_coords[1] = glm::vec4(1.0f, 0.0f, 0.0f, 0.0f);
    tex_coords[2] = glm::vec4(0.0f, 1.0f, 0.0f, 0.0f);
    tex_coords[3] = glm::vec4(1.0f, 1.0f, 0.0f, 0.0f);
}


void p2d::Actor::draw() {
    // change the anchor point
    float calc_anchor_x = width * scale * anchor_x;
    float calc_anchor_y = height * scale * anchor_y;
    
    // center of the sprite
    glm::vec3 center = glm::vec3(scale * width / 2.0f, scale * height / 2.0f, 0.0f);
    
    // transformations
    glm::mat4 translate_view = glm::translate(glm::mat4(1.0f), center + glm::vec3(x - calc_anchor_x, y - calc_anchor_y, 0.0f));
    glm::mat4 angle_view = glm::rotate(translate_view, angle, glm::vec3(0.0f, 0.0f, 1.0f));
    glm::mat4 post_angle_translate = glm::translate(angle_view, -center); // translae back after the rotation
    glm::mat4 scale_view = glm::scale(glm::mat4(1.0f), glm::vec3(scale, scale, 0.0f));
    
    glm::mat4 mvp = PROJECTION * post_angle_translate * scale_view;

 
    // bind the texture
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, *texture->getTexture());
    
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