/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ACTOR
#define P2D_ACTOR

#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>

#include "display_object.h"
#include "defs.h"

namespace p2d {
    
    class Actor : public DisplayObject {
    private:
        // image dimensions
        int dim_x;
        int dim_y;
        
    public:
        
        /**
         * Constructor
         * pxy coordinates
         * char* image name
         */
        Actor(p2d::pxyCoords, char*);
        
        /**
         * Destructor
         */
        ~Actor();
        
        /**
         * Draw the actor
         */
        void draw();
    };
    
}

#endif