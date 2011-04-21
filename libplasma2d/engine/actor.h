/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ACTOR_H
#define P2D_ACTOR_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <string>
#include <math.h>

#include <iostream>

#include "../external/glm/glm.hpp"
#include "../external/glm/gtc/matrix_transform.hpp"
#include "../external/glm/gtc/type_ptr.hpp"

#include "director.h"
#include "display_object.h"
#include "defs.h"
#include "texture_manager.h"
#include "shader_manager.h"

namespace p2d {
    
    class Actor : public DisplayObject {
    private:
        // image dimensions
        float width;
        float height;
        
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
         * Draw the actor
         */
        void draw();
    };
    
}

#endif