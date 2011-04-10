/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <iostream>
#include <ext/hash_map>

//#include "SOIL.h"

#include "hash_map_defs.h"

namespace p2d {

    class TextureManager {
    private:
        TextureManager() {};
        TextureManager(const TextureManager&);
        TextureManager& operator=(const TextureManager&);
        
        static TextureManager* obj;
        
        // the path to external resources (images, sounds, etc.)
        std::string resource_path;
        
        __gnu_cxx::hash_map<std::string, GLuint, __gnu_cxx::hash<std::string>, eqstr> textures;
        
    public:
        static TextureManager* Inst();
        
        /**
         * setter/getter for the resource path
         */
        void setResourcePath(std::string);
        std::string getResourcePath();
        
        /**
         * Load the specified texture
         */
        void loadTexture(std::string);
        
        /**
         * Bind the referenced texture
         */
        void bindTexture(std::string);
        
        /**
         * Unbind a texture
         */
        void unbindTexture();
        
        /**
         * Delete a texture
         */
        void deleteTexture(std::string);
        
        /**
         * Return the current texture refernce count
         */
        int getTextureRef();
        
    };
    
}

#endif