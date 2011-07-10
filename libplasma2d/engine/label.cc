/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "label.h"

p2d::Label::Label() {
    text = "";
    
    font_parser.setResourcePath("/tmp");
    font_parser.parse("fps.fnt");
    p2d::TextureManager::Inst()->loadTexture("../fonts/fps.png");
}


void p2d::Label::setText(std::string _text) {
    text = _text;
}

std::string p2d::Label::getText() {
    return text;
}


void p2d::Label::setDimensions(float _width, float _height) {
    width = _width;
    height = _height;
}

float p2d::Label::getWidth() {
    return width;
}

float p2d::Label::getHeight() {
    return height;
}


void p2d::Label::draw() {
    // change the anchor point
    float calc_anchor_x = width * scale * -anchor_x;
    float calc_anchor_y = height * scale * -anchor_y;
    
    // transformations
    glm::mat4 trans = glm::translate(glm::mat4(1.0f), glm::vec3(x + calc_anchor_x, y + calc_anchor_y, 0.0f));
    glm::mat4 mvp = p2d::Director::Inst()->getProjection() * trans;
    
    if (angle != 0.0f)
        mvp *= glm::rotate(trans, angle, glm::vec3(0.0f, 0.0f, 1.0f));
    
    if (scale != 1.0f)
        mvp *= glm::scale(glm::mat4(1.0f), glm::vec3(scale, scale, 0.0f));
    
    p2d::TextureManager::Inst()->bindTexture("../fonts/fps.png");
    p2d::ShaderManager::Inst()->useProgram("move_color");
    
    GLuint vert_coords = p2d::ShaderManager::Inst()->getAttribLocation("vert_coords");
    GLuint tex_matrix = p2d::ShaderManager::Inst()->getAttribLocation("tex_matrix");
    GLuint uMVP = p2d::ShaderManager::Inst()->getUniformLocation("uMVP");

    glm::mat4x3 char_verts;
    glm::mat4 tex_coords;
    float xadvance, yoffset, xoffset;
    float prev_xoffset;
    float prev_yoffset;

    for (int i = 0; i < text.size(); i++) {
        char_verts = font_parser.generateVertsForLetter(text[i]);
        tex_coords = font_parser.generateTexCoordsForLetter(text[i]);
        xadvance = font_parser.getXAdvanceForLetter(text[i]);
        yoffset = font_parser.getYOffsetForLetter(text[i]);
        xoffset = font_parser.getXOffsetForLetter(text[i]);
        
        // horizontal advance
        mvp *= glm::translate(glm::mat4(1.0f), glm::vec3(xoffset - prev_xoffset, yoffset - prev_yoffset, 0.0f));
        
        glVertexAttribPointer(vert_coords, 3, GL_FLOAT, 0, 0, glm::value_ptr(char_verts));
        glVertexAttribPointer(tex_matrix, 4, GL_FLOAT, 0, 0, glm::value_ptr(tex_coords));
        glUniformMatrix4fv(uMVP, 1, GL_FALSE, glm::value_ptr(mvp));
        glEnableVertexAttribArray(vert_coords);
        glEnableVertexAttribArray(tex_matrix);
        
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        
        mvp *= glm::translate(glm::mat4(1.0f), glm::vec3(xadvance, 0.0f, 0.0f));
        prev_yoffset = yoffset;
        prev_xoffset = xoffset;
    }

}