/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "texture_manager.h"

p2d::TextureManager* p2d::TextureManager::obj = NULL;

p2d::TextureManager::TextureManager() {
    texture_ref = 0;
}

p2d::TextureManager* p2d::TextureManager::Inst() {
    if (!obj) {
        obj = new TextureManager();
        obj->current_ref = 0;
    }
    
    // glGenTextures(TEXTURE_COUNT, inst->texture);
    
    return obj;
}

void p2d::TextureManager::loadTexture(std::string _filename) {
    unsigned int flags = SOIL_FLAG_MIPMAPS;
    
    obj->texture[obj->texture_ref] = SOIL_load_OGL_texture
    (   
     _filename.c_str(),
     SOIL_LOAD_AUTO,
     SOIL_CREATE_NEW_ID,
     flags
     );
    
    if (obj->texture[obj->texture_ref] == 0) {
        printf( "SOIL loading error: '%s'\n", SOIL_last_result() );
    } else {
        printf("loaded\n");
    }
    
    obj->texture_ref++;
}

void p2d::TextureManager::bindTexture(std::string _image_name) {
    // if (current_ref != ref) {
    glBindTexture(GL_TEXTURE_2D, obj->texture[0]);
    // current_ref = ref;
    // }
}

void p2d::TextureManager::unbindTexture() {
    glBindTexture(GL_TEXTURE_2D, 0);
}

int p2d::TextureManager::getTextureRef() {
    return obj->texture_ref;
}

void p2d::TextureManager::deleteAllTextures() {
    glDeleteTextures(TEXTURE_COUNT, obj->texture);
}