/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "texture_manager.h"

p2d::TextureManager* p2d::TextureManager::obj = NULL;


p2d::TextureManager* p2d::TextureManager::Inst() {
    if (!obj) {
        obj = new TextureManager();
    }
    
    return obj;
}


void p2d::TextureManager::setResourcePath(std::string _resource_path) {
    resource_path = _resource_path;
}

std::string p2d::TextureManager::getResourcePath() {
    return resource_path;
}


void p2d::TextureManager::loadTexture(std::string _filename) {
    unsigned int flags = SOIL_FLAG_MIPMAPS;
    
    std::string separator = "/";
    std::string filepath = getResourcePath() + separator + _filename;
    
    obj->textures[_filename] = SOIL_load_OGL_texture
    (   
        filepath.c_str(),
        SOIL_LOAD_AUTO,
        SOIL_CREATE_NEW_ID,
        flags
    );
    
    if (obj->textures[_filename] == 0) {
        printf( "SOIL loading error: '%s'\n", SOIL_last_result() );
    }
}


void p2d::TextureManager::bindTexture(std::string _filename) {
    // TODO only bind the texture if it hasn't been bound yet
    
    // if (current_ref != ref) {
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, obj->textures[_filename]);
    // current_ref = ref;
    // }
}


void p2d::TextureManager::unbindTexture() {
    glBindTexture(GL_TEXTURE_2D, 0);
}


void p2d::TextureManager::deleteTexture(std::string _filename) {
    glDeleteTextures(1, &textures[_filename]);
}

// Binding helpers
// TODO: I don't much care for the (name, completefunc, errorfunc) syntax, maybe we could do this with a table...
void p2d::BindingHelpers::TextureManager_preloadTexture(std::string _name, Sqrat::Function _func) { 
    p2d::TextureManager::Inst()->loadTexture(_name);
    _func(_name);
}