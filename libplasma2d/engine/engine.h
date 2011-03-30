/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ENGINE_H
#define P2D_ENGINE_H

namespace p2d {
    
    class Engine {
        
    private:
        // no copy constructor or assignment allowed
        Engine(const Engine&);
        Engine& operator=(const Engine&);
        
    public:
      
        /**
         * Initialize the game engine and the display
         * system
         */
        Engine();
        
        /**
         * Destructor
         * Clean up any sub systems not previously shut down
         */
        ~Engine();
        
    };
    
}

#endif