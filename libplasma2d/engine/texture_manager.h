/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

// TODO: this class needs to hold textures in a hash instead of an array
const int TEXTURE_COUNT = 100;

#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>

#include "SOIL.h"
#include <iostream>
#include <string>

namespace p2d {

    class TextureManager {
    private:
        TextureManager();
        TextureManager(const TextureManager&);
        TextureManager& operator=(const TextureManager&);
        
        static TextureManager* obj;
        
        GLuint texture[TEXTURE_COUNT];
        int texture_ref;
        int current_ref;
        
    public:
        static TextureManager* Inst();
        
        /**
         * Load the specified texture
         */
        void loadTexture(std::string, bool);
        
        /**
         * Bind the referenced texture
         */
        void bindTexture(int);
        
        /**
         * Unbind a texture
         */
        void unbindTexture();
        
        /**
         * Delete all textures
         */
        void deleteAllTextures();
        
        /**
         * Return the current texture refernce count
         */
        int getTextureRef();
        
    };
    
}

#endif