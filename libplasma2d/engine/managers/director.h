/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DIRECTOR_H
#define P2D_DIRECTOR_H

#include "scene.h"

#include <cstdlib>

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
        p2d::Scene* current_scene;
        
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
        
        // TODO: I don't dig how this is used within the engine.run() method. They could be combined or this renamed...
        /**
         * Start playing a scene
         */
        void playScene(Scene* _scene);
        
        /**
         * Get the current scene
         */
        Scene* getCurrentScene();
    };
    
    namespace BindingHelpers {
        void Director_playScene(Scene* _scene);
        Scene* Director_getCurrentScene();
    }
    
}

#endif