/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_LUA_WRAPPER_H
#define P2D_LUA_WRAPPER_H

#include <string>
#include <stdio.h>
#include "tolua++.h"

extern "C" {
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
    #include "lua_director.h"
    #include "lua_scene.h"
    #include "lua_texture.h"
    #include "lua_actor.h"
}

namespace p2d {
    
    class LuaWrapper {
    private:
        lua_State* lua;
        
        std::string script_path;
        
    public:
        /**
         * Constructor
         * Initialize the lua vm
         */
        LuaWrapper();
        
        /**
         * Destructor
         * Clean up the vm
         */
        ~LuaWrapper();
        
        /**
         * Get the lua vm
         */
        lua_State* getVM();
        
        /**
         * Run the bootstrap file
         */
        void bootstrap();
        
        /**
         * Run the main file
         */
        void runMain();
        
        /**
         * setter/getter for the script path
         */
        void setScriptPath(std::string _script_path);
        std::string getScriptPath();
        
        /**
         * Set the resource paths for images, fonts and sounds
         */
        void setResourcePath(const char* _type, const char* _path);
        
        /**
         * process the event queue
         */
        void processEventQueue();
    };
    
}

#endif
