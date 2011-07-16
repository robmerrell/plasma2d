/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "texture.h"

p2d::Texture::~Texture() {
    glDeleteTextures(1, texture);
    std::cout << "destroyed" << std::endl;
}


bool p2d::Texture::loadTexture(std::string _texture_name) {
    texture_name = _texture_name;
    
    texture[0] = SOIL_load_OGL_texture (
        _texture_name.c_str(),
        SOIL_LOAD_AUTO,
        SOIL_CREATE_NEW_ID,
        SOIL_FLAG_MIPMAPS
    );
    
    if (texture[0] == 0)
        return false;
    else 
        return true;
}


GLuint* p2d::Texture::getTexture() {
    return texture;
}