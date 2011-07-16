/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_TEXTURE_H
#define P2D_TEXTURE_H

#include <iostream>

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#include "SOIL.h"

namespace p2d {
    
    class Texture {
    private:
        GLuint texture[1];
        
        std::string texture_name;
        
    public:
        Texture() {};
        
        ~Texture();
        
        bool loadTexture(std::string _texture_name);
        
        GLuint* getTexture();
    };
    
}

#endif