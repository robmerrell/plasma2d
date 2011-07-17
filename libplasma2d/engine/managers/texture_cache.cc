/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "texture_cache.h"

p2d::TextureCache* p2d::TextureCache::obj = NULL;


p2d::TextureCache* p2d::TextureCache::Inst() {
    if (!obj) {
        obj = new TextureCache();
    }
    
    return obj;
}


void p2d::TextureCache::addTexture(p2d::Texture* _texture) {
    obj->textures[_texture->getTextureName()] = _texture;
}


p2d::Texture* p2d::TextureCache::getTexture(std::string _texture_name) {
    return obj->textures[_texture_name];
}


void p2d::TextureCache::removeTexture(std::string _texture_name) {
    obj->textures.erase(_texture_name);
}


// Binding helpers
void p2d::BindingHelpers::TextureCache_cacheTexture(p2d::Texture* _texture) { 
    p2d::TextureCache::Inst()->addTexture(_texture);
}

p2d::Texture* p2d::BindingHelpers::TextureCache_getCachedTexture(std::string _texture_name) {
    return p2d::TextureCache::Inst()->getTexture(_texture_name);
}

void p2d::BindingHelpers::TextureCache_removeFromCache(std::string _texture_name) {
    p2d::TextureCache::Inst()->removeTexture(_texture_name);
}