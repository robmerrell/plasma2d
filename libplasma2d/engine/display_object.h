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

#include "../external/cpptweener/CppTweener.h"

#include "chipmunk.h"

#include "defs.h"
#include "managers/shader_manager.h"

namespace p2d {
    
    class DisplayObject {
    private:
        tween::Tweener tweener;
        tween::TweenerParam param;
        
        bool tweening; // TODO: do we need this?
        
        // physics
        cpBody* body;
    public:
        // bindings look and feel better accessing these properties publicly. Since they are simple types
        // I'm leaving them public.
        float x;
        float y;
        float angle; // degrees
        float scale; // defaults to 1.0f
        bool uses_physics;
        
        // anchors are the transformation point of an object
        // Can be 0.0f,0.0f (top left) to 1.0f,1.0f (bottom right)
        float anchor_x;
        float anchor_y;
        
        /**
         * Constructor
         */
        DisplayObject();
        
        /**
         * Destructor
         */
        ~DisplayObject();
        
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
         * set up the tweening system
         */
        void setupTween(int _time, int _transition, int _easing_equation);
        
        /**
         * Add properties to be tweened
         */
        void addProperty(std::string _property, float _value);
        
        /**
         * Start tweening
         */
        void startTween();
        
        /**
         * Step through tweeing animations
         */
        void stepTween(float _delta_time);        
        
        /**
         * Set/Get physics body
         */
        void setBody(cpBody* _body);
        cpBody* getBody();
                
        /**
         * Transform the position of an object to it's anchor
         */
        // TODO: Can I delete this?
        virtual void transformForAnchor() {};
        
        /**
         * update method that should be defined in the scripted
         * display object.
         */
        void update(float _delta_time);
        
        /**
         * draw method that should be defined in the children
         */
        virtual void draw() {};
    };
    
}

#endif