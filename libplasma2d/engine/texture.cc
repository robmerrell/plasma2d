/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "texture.h"

p2d::Texture::~Texture() {
    glDeleteTextures(1, texture);
}


bool p2d::Texture::loadTexture(std::string _texture_name, std::string _full_texture_path) {
    texture_name = _texture_name;
    full_texture_path = _full_texture_path;
    
    texture[0] = SOIL_load_OGL_texture (
        _full_texture_path.c_str(),
        SOIL_LOAD_AUTO,
        SOIL_CREATE_NEW_ID,
        SOIL_FLAG_MIPMAPS
    );
    
    // TODO: I'm sure this can be shortened
    if (texture[0] == 0)
        return false;
    else 
        return true;
}


GLuint* p2d::Texture::getTexture() {
    return texture;
}


std::string p2d::Texture::getTextureName() {
    return texture_name;
}