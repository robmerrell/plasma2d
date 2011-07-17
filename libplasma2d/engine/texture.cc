/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "texture.h"

p2d::Texture::Texture() {
    native_width = 0;
    native_height = 0;
}


p2d::Texture::~Texture() {
    glDeleteTextures(1, texture);
}


bool p2d::Texture::loadTexture(std::string _texture_name, std::string _full_texture_path) {
    texture_name = _texture_name;
    full_texture_path = _full_texture_path;
    
    // load the texture
    // SIDE EFFECT ALERT: sets native_width and native_height
    texture[0] = SOIL_load_OGL_texture_aug (
        _full_texture_path.c_str(),
        &native_width,
        &native_height,
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


int p2d::Texture::getNativeWidth() {
    return native_width;
}

int p2d::Texture::getNativeHeight() {
    return native_height;
}