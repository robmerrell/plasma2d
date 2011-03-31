/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DIRECTOR_H
#define P2D_DIRECTOR_H

#include "scene.h"

#include <cstdlib> // for NULL

namespace p2d {
    
    class Director {
    private:
        // don't allow constructors to be called publically
        Director() {};
        Director(const Director&);
        Director& operator=(const Director&);
        
        // instance of the director
        static Director* obj;
        
        // the currently running scene
        Scene* current_scene;
        
    public:
        /**
         * Get instance of the director
         */
        static Director* Inst();  
        
        /**
         * Destructor
         * destroy the singleton reference
         */
        ~Director();
        
        /**
         * Start playing a scene
         */
        void playScene(Scene*&);
        
        /**
         * Get the current scene
         */
        Scene* getCurrentScene();
    };
    
}

#endif