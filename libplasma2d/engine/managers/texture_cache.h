/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_TEXTURE_CACHE_H
#define P2D_TEXTURE_CACHE_H

#include <ext/hash_map>
#include <iostream>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#include "hash_map_defs.h"
#include "texture.h"

namespace p2d {
    
    class TextureCache {
    private:
        TextureCache() {};
        TextureCache(const TextureCache&);
        TextureCache& operator=(const TextureCache&);
        
        static TextureCache* obj;
        
        __gnu_cxx::hash_map<std::string, Texture*, __gnu_cxx::hash<std::string>, eqstr> textures;
        
    public:
        /**
         * Constructor
         */
        static TextureCache* Inst();
        
        /**
         * Add a texture
         */
        void addTexture(p2d::Texture* _texture);
        
        /**
         * Get the texture reference
         */
        p2d::Texture* getTexture(std::string _texture_name);
        
        /**
         * Remove a texture
         */
        void removeTexture(std::string _texture_name);
    };
    
    namespace BindingHelpers {
        void TextureCache_cacheTexture(p2d::Texture* _texture);
        p2d::Texture* TextureCache_getCachedTexture(std::string _texture_name);
        void TextureCache_removeFromCache(std::string _texture_name);
    }
}

#endif