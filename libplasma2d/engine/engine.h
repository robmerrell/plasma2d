/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ENGINE_H
#define P2D_ENGINE_H

#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>

namespace p2d {
    
    class Engine {
        
    private:
        // no copy constructor or assignment allowed
        Engine(const Engine&);
        Engine& operator=(const Engine&);
        
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
        void initialize();
        
        /**
         * Passes control to the director and runs the main script
         */
        void run();
        
    };
    
}

#endif