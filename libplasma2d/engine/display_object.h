/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DISPLAY_OBJECT_H
#define P2D_DISPLAY_OBJECT_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#include "defs.h"

namespace p2d {
    
    class DisplayObject {
    protected:
        p2d::pxyCoords pos;
        float angle; // degrees
        float scale; // defaults to 1.0f
        
        // anchors are the transformation point of an object
        // Can be 0.0f,0.0f (top left) to 1.0f,1.0f (bottom right)
        p2d::pxyCoords anchor; // defaults to 0.0f, 0.0f
        
    public:
        /**
         * Constructor
         */
        DisplayObject();
        
        /**
         * Set/Get position
         */
        void setPos(p2d::pxyCoords);
        p2d::pxyCoords getPos();
        
        /**
         * Set/Get angle (degrees)
         */
        void setAngle(float);
        float getAngle();
        
        /**
         * Set/Get scale
         */
        void setScale(float);
        float getScale();
        
        /**
         * Set/Get anchor points
         */
        void setAnchor(p2d::pxyCoords);
        p2d::pxyCoords getAnchor();
        
        /**
         * Transform the position of an object to it's anchor
         */
        virtual void transformForAnchor() {};
        
        /**
         * update method that should be defined in the scripted
         * display object.
         */
        virtual void update(float) {};
        
        /**
         * draw method that should be defined in the children
         */
        virtual void draw() {};
    };
    
}

#endif