/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "label.h"

p2d::Label::Label() {
    text = "";
}


p2d::Label::Label(std::string _text, p2d::BitmapFont* _font, float _x, float _y) {
    text = _text;
    bitmap_font = _font;
    x = _x;
    y = _y;
}


void p2d::Label::setFont(p2d::BitmapFont* _font) {
    bitmap_font = _font;
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
    glm::mat4 mvp = PROJECTION * trans;
    
    if (angle != 0.0f)
        mvp *= glm::rotate(trans, angle, glm::vec3(0.0f, 0.0f, 1.0f));
    
    if (scale != 1.0f)
        mvp *= glm::scale(glm::mat4(1.0f), glm::vec3(scale, scale, 0.0f));
    
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, *bitmap_font->getFontTexture()->getTexture());
    p2d::ShaderManager::Inst()->useProgram("move_color");
    
    GLuint vert_coords = p2d::ShaderManager::Inst()->getAttribLocation("vert_coords");
    GLuint tex_matrix = p2d::ShaderManager::Inst()->getAttribLocation("tex_matrix");
    GLuint uMVP = p2d::ShaderManager::Inst()->getUniformLocation("uMVP");

    glm::mat4x3 char_verts;
    glm::mat4 tex_coords;
    float xadvance, yoffset, xoffset;
    float prev_xadvance = 0;
    float prev_xoffset;
    float prev_yoffset;

    for (int i = 0; i < text.size(); i++) {
        char_verts = bitmap_font->generateVertsForLetter(text[i]);
        tex_coords = bitmap_font->generateTexCoordsForLetter(text[i]);
        xadvance = bitmap_font->getXAdvanceForLetter(text[i]);
        yoffset = bitmap_font->getYOffsetForLetter(text[i]);
        xoffset = bitmap_font->getXOffsetForLetter(text[i]);
        
        // horizontal advance
        mvp *= glm::translate(glm::mat4(1.0f), glm::vec3(xoffset - prev_xoffset + prev_xadvance, yoffset - prev_yoffset, 0.0f));
        
        glVertexAttribPointer(vert_coords, 3, GL_FLOAT, 0, 0, glm::value_ptr(char_verts));
        glVertexAttribPointer(tex_matrix, 4, GL_FLOAT, 0, 0, glm::value_ptr(tex_coords));
        glUniformMatrix4fv(uMVP, 1, GL_FALSE, glm::value_ptr(mvp));
        glEnableVertexAttribArray(vert_coords);
        glEnableVertexAttribArray(tex_matrix);
        
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        
        prev_xadvance = xadvance;
        prev_yoffset = yoffset;
        prev_xoffset = xoffset;
    }

}