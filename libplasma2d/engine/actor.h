/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ACTOR_H
#define P2D_ACTOR_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <string>

#include "display_object.h"
#include "defs.h"
#include "texture_manager.h"
#include "shader_manager.h"

namespace p2d {
    
    class Actor : public DisplayObject {
    private:
        // image dimensions
        float dim_x;
        float dim_y;
        float scaled_dim_x;
        float scaled_dim_y;
        
        // image name
        std::string image;
        
    public:
        
        /**
         * Constructor
         * pxy coordinates
         * char* image name
         */
        Actor(p2d::pxyCoords, std::string);
        
        /**
         * Destructor
         */
        ~Actor();
        
        /**
         * Transform to the actor's anchor point
         */
        //void transformForAnchor();
        
        /**
         * Scale the geometry
         */
        //void transformForScale();
        
        /**
         * Draw the actor
         */
        void draw();
    };
    
}

#endif