/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DISPLAY_OBJECT_H
#define P2D_DISPLAY_OBJECT_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <string>
#include <math.h>

#include "../external/glm/glm.hpp"
#include "../external/glm/gtc/matrix_transform.hpp"
#include "../external/glm/gtc/type_ptr.hpp"

#include "defs.h"
#include "texture_manager.h"
#include "shader_manager.h"

namespace p2d {
    
    class DisplayObject {
    protected:
        float x;
        float y;
        float angle; // degrees
        float scale; // defaults to 1.0f
        
        // anchors are the transformation point of an object
        // Can be 0.0f,0.0f (top left) to 1.0f,1.0f (bottom right)
        float anchor_x;
        float anchor_y;
        
    public:
        /**
         * Constructor
         */
        DisplayObject();
        
        /**
         * Set/Get position
         */
        void setXY(float _x, float _y);
        float getX();
        float getY();
        
        /**
         * Set/Get angle (degrees)
         */
        void setAngle(float _angle);
        float getAngle();
        
        /**
         * Set/Get scale
         */
        void setScale(float _scale);
        float getScale();
        
        /**
         * Set/Get anchor points
         */
        void setAnchor(float _x, float _y);
        float getAnchorX();
        float getAnchorY();
        
        /**
         * Transform the position of an object to it's anchor
         */
        virtual void transformForAnchor() {};
        
        /**
         * update method that should be defined in the scripted
         * display object.
         */
        virtual void update(float _delta_time) {};
        
        /**
         * draw method that should be defined in the children
         */
        virtual void draw() {};
    };
    
}

#endif