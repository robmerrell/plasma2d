/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DISPLAY_OBJECT_H
#define P2D_DISPLAY_OBJECT_H

#include "defs.h"

namespace p2d {
    
    class DisplayObject {
    protected:
        p2d::pxyCoords pos;
        float angle; // degrees
        float scale; // defaults at 1.0f
        
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