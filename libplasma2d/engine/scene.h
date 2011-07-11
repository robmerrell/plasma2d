/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_SCENE_H
#define P2D_SCENE_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#include "display_object.h"
#include "animator.h"

#include <vector>

namespace p2d {
    
    class Scene {
    private:
        Animator default_animator;
        
        // for now hold the display objects in a sequence
        // this should be replaced with an n-ary tree,
        // multi-dim container or graph
        std::vector<DisplayObject*> display_objects;
        
//        Label* fps;
        
    public:
        /**
         * Constructor
         * Stub
         */
        Scene();
        
        /**
         * Destructor
         * Remove display objects
         */
        ~Scene();
        
        /**
         * Add a DisplayObject to the scene's default animator
         * - object to add
         */
        void addToScene(DisplayObject* _object);
        
        /**
         * Add a DisplayObject to an animator
         * - display object to add
         * - animator that controls the object
         */
        void addObjectWithAnimator(DisplayObject* _object, char* _animator);
        
        /**
         * main scene loop
         * float delta time
         */
        void tick(float _delta_time);
    };
    
}

#endif
