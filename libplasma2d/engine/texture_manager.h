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
        
        // the path to external resources (images, sounds, etc.)
        std::string resource_path;
        
        GLuint texture[TEXTURE_COUNT];
        int texture_ref;
        int current_ref;
        
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
        // TODO change this to char*
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