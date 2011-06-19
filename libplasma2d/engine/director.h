/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DIRECTOR_H
#define P2D_DIRECTOR_H

#include "../external/glm/glm.hpp"
#include "../external/glm/gtc/matrix_transform.hpp"

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
        Scene* current_scene;
        
        // the current projection
        glm::mat4 projection;
        
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
        void playScene(Scene*);
        
        /**
         * Get the current scene
         */
        Scene* getCurrentScene();
        
        /**
         * Get the current projection
         */
        glm::mat4& getProjection();
    };
    
    namespace BindingHelpers {
        void Director_playScene(Scene*);
        Scene* Director_getCurrentScene();
    }
    
}

#endif