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
         * setter/getter for the script path
         */
        void setScriptPath(std::string _script_path);
        std::string getScriptPath();
    };
    
}

#endif
