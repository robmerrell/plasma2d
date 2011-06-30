/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ENGINE_H
#define P2D_ENGINE_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <string>

#include "director.h"
#include "scene.h"
#include "texture_manager.h"
#include "shader_manager.h"
#include "squirrel_wrapper.h"

namespace p2d {
    
    class Engine {
        
    private:
        // no copy constructor or assignment allowed
        Engine(const Engine&);
        Engine& operator=(const Engine&);
        
        p2d::SquirrelWrapper sqWrapper;
        
    public:
      
        /**
         * Empty constructor
         */
        Engine() {};
        
        /**
         * Destructor
         * Clean up any sub systems not previously shut down
         */
        ~Engine();
        
        /**
         * Initialize the game engine and the display system
         */
        void initialize(std::string);
        
        /**
         * TODO: is this even correct?
         * Passes control to the director and runs the main script
         */
        void run();
        
        /**
         * Get the SquirrelWrapper object
         */
        SquirrelWrapper& getSqWrapper();
        
        /**
         * Proxies "tick" to the director
         */
        void tick();
        
    };

}

#endif