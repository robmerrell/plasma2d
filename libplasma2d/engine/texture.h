/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_TEXTURE_H
#define P2D_TEXTURE_H

#include <string>

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#include "SOIL.h"

namespace p2d {
    
    class Texture {
    private:
        GLuint texture[1];
        
        std::string texture_name;
        
        std::string full_texture_path;
        
        int native_width;
        int native_height;
        
    public:
        Texture();
        Texture(std::string _texture_name, std::string _full_texture_path);
        ~Texture();
        
        bool loadTexture(std::string _texture_name, std::string _full_texture_path);
        
        GLuint* getTexture();
        
        std::string getTextureName();
        
        int getNativeWidth();
        int getNativeHeight();
    };
    
}

#endif