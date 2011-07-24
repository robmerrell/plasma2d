/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "bitmap_font.h"

void p2d::BitmapFont::loadFont(std::string _font_name, std::string _full_font_path) {
    font_name = _font_name;
    full_font_path = _full_font_path;
    
    // zero out our character collection
    // TODO: is this working?
    memset(char_collection, 0, sizeof char_collection);
    
    parse();
}


void p2d::BitmapFont::setFontTexture(p2d::Texture* _texture) {
    texture = _texture;
}

p2d::Texture* p2d::BitmapFont::getFontTexture() {
    return texture;
}


void p2d::BitmapFont::parse() {
    std::string filepath = full_font_path;
    
    TiXmlDocument font_def(filepath.c_str());
    font_def.LoadFile();
    TiXmlHandle doc_handle(&font_def);
    
    // general font info
    TiXmlElement *font_info = doc_handle.FirstChild("font").FirstChild("info").ToElement();
    TiXmlElement *font_common = doc_handle.FirstChild("font").FirstChild("common").ToElement();
    
    scale_width = atoi(font_common->Attribute("scaleW"));
    scale_height = atoi(font_common->Attribute("scaleH"));
    font_size = atoi(font_info->Attribute("size"));
    
    // character info
    TiXmlNode *chars = doc_handle.FirstChild("font").FirstChild("chars").ToNode();
    for (TiXmlNode *child = chars->FirstChild(); child; child = child->NextSibling()) {
        TiXmlElement* el = child->ToElement();
        
        p2d::font_char ch;
        ch.id = atoi(el->Attribute("id"));
        ch.x = atof(el->Attribute("x"));
        ch.y = atof(el->Attribute("y"));
        ch.xoffset = atof(el->Attribute("xoffset"));
        ch.yoffset = atof(el->Attribute("yoffset"));
        ch.width = atof(el->Attribute("width"));
        ch.height = atof(el->Attribute("height"));
        ch.xadvance = atof(el->Attribute("xadvance"));
        ch.letter = *el->Attribute("letter");
        
        char_collection[ch.id] = ch;
    }
}


int p2d::BitmapFont::getFontSize() {
    return font_size;
}


glm::mat4x3 p2d::BitmapFont::generateVertsForLetter(char _char) {
    int index = int(_char);
    glm::mat4x3 verts;
    
    verts[0] = glm::vec3(0.0f, 0.0f, 0.0f);
    verts[1] = glm::vec3(char_collection[index].width, 0.0f, 0.0f);
    verts[2] = glm::vec3(0.0f, char_collection[index].height, 0.0f);
    verts[3] = glm::vec3(char_collection[index].width, char_collection[index].height, 0.0f);
    
    return verts;
}


glm::mat4 p2d::BitmapFont::generateTexCoordsForLetter(char _char) {
    int index = int(_char);
    glm::mat4 tex_coords;
    
    float left = char_collection[index].x;
    float top = char_collection[index].y;
    float right = left + char_collection[index].width;
    float bottom = top + char_collection[index].height;
    
    tex_coords[0] = glm::vec4(left/scale_width, top/scale_height, 0.0f, 0.0f);
    tex_coords[1] = glm::vec4(right/scale_width, top/scale_height, 0.0f, 0.0f);
    tex_coords[2] = glm::vec4(left/scale_width, bottom/scale_height, 0.0f, 0.0f);
    tex_coords[3] = glm::vec4(right/scale_width, bottom/scale_height, 0.0f, 0.0f);
    
    return tex_coords;
}


float p2d::BitmapFont::getXAdvanceForLetter(char _char) {
    int index = int(_char);
    return char_collection[index].xadvance;
}


float p2d::BitmapFont::getXOffsetForLetter(char _char) {
    int index = int(_char);
    return char_collection[index].xoffset;    
}

float p2d::BitmapFont::getYOffsetForLetter(char _char) {
    int index = int(_char);
    return char_collection[index].yoffset;    
}