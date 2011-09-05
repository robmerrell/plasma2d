/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ENGINE_H
#define P2D_ENGINE_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <string>

#include "managers/director.h"
#include "scene.h"
#include "shader_manager.h"
#include "lua_wrapper.h"

namespace p2d {
    
    class Engine {
        
    private:
        // no copy constructor or assignment allowed
        Engine(const Engine&);
        Engine& operator=(const Engine&);
        
        float fps;
        
        p2d::LuaWrapper luaWrapper;
        
    public:
      
        /**
         * Empty constructor
         */
        Engine();
        
        /**
         * Destructor
         * Clean up any sub systems not previously shut down
         */
        ~Engine();
        
        /**
         * Initialize the game engine and the display system
         */
        void initialize(std::string _resource_path);
        
        /**
         * TODO: is this even correct?
         * Passes control to the director and runs the main script
         */
        void run();
        
        /**
         * Get the SquirrelWrapper object
         */
        LuaWrapper& getLuaWrapper();
        
        /**
         * Proxies "tick" to the director
         */
        void tick(float _delta_time);
        
        /**
         * Set the FPS. Only the display system should call this
         */
        void setFPS(float _fps);
    };

}

#endif