/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "bitmap_font_parser.h"
#include <iostream>

p2d::BitmapFontParser::BitmapFontParser(std::string _path) {
    resource_path = _path;
    
    // zero out the array
    memset(char_collection, 0, sizeof char_collection);
}


void p2d::BitmapFontParser::parse(std::string _filename) {
    std::string filepath = resource_path + "/" + _filename;
    
    TiXmlDocument font_def(filepath.c_str());
    font_def.LoadFile();
    TiXmlHandle doc_handle(&font_def);
    
    // general font info
    TiXmlElement *font_info = doc_handle.FirstChild("font").FirstChild("common").ToElement();
    
    scale_width = atoi(font_info->Attribute("scaleW"));
    scale_height = atoi(font_info->Attribute("scaleH"));
    font_size = 64; // TODO: Do I even need this?
    
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
        ch.letter = std::string(el->Attribute("letter"));
        
        char_collection[ch.id] = ch;
    }

}


glm::mat4x3 p2d::BitmapFontParser::generateVertsForLetter(char _char) {
    int index = int(_char);
    glm::mat4x3 verts;
    
    verts[0] = glm::vec3(0.0f, 0.0f, 0.0f);
    verts[1] = glm::vec3(char_collection[index].width, 0.0f, 0.0f);
    verts[2] = glm::vec3(0.0f, char_collection[index].height, 0.0f);
    verts[3] = glm::vec3(char_collection[index].width, char_collection[index].height, 0.0f);
    
    return verts;
}


glm::mat4 p2d::BitmapFontParser::generateTexCoordsForLetter(char _char) {
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


void p2d::BitmapFontParser::setResourcePath(std::string _resource_path) {
    resource_path = _resource_path;
}