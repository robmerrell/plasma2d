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
    #include "luasocket.h"
    #include "mime.h"
    #include "lua_director.h"
    #include "lua_scene.h"
    #include "lua_texture.h"
    #include "lua_texture_cache.h"
    #include "lua_display_object.h"
    #include "lua_actor.h"
    #include "lua_bitmap_font.h"
    #include "lua_label.h"
    #include "lua_tweening.h"
    #include "lua_chipmunk.h"
}

namespace p2d {
    
    class LuaWrapper {
    private:
        lua_State* lua;
        
        std::string script_path;
        std::string last_error;
        
        /**
         * handle error processing for protected calls
         * sets last_error if there was an error while processing
         * return true if there was an error while processing
         * return false if there was no error while processing
         */
        bool error(int _call_results);
        
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
         * returns true on error
         */
        bool bootstrap();
        
        /**
         * Run the main file
         * returns true on error
         */
        bool runMain();
        
        /**
         * setter/getter for the script path
         */
        void setScriptPath(std::string _script_path);
        std::string getScriptPath();
        
        /**
         * Set the resource paths for images, fonts and sounds
         * returns true on error
         */
        bool setResourcePath(const char* _type, const char* _path);
        
        /**
         * Set the host to send remote debugging messages
         */
        bool setDebugHost(std::string _debug_host);
        
        /**
         * Get the last error
         */
        std::string getLastError();
        
        /**
         * Send the last error to a
         * remote server
         */
        void sendLastError();
        
        /**
         * process the event queue
         * returns true on error
         */
        bool processEventQueue();
        
        /**
         * emit engine specific events
         * returns true on error
         */
        bool emitSceneUpdateEvent();
        
        /**
         * Event proxies from device specific code
         * returns true on error
         */
        bool proxyTouchesBeganOrEndedEvent(std::string _proxy_function, float _x, float _y, int _tap_count);
        bool proxyTouchesMoved(float _prev_x, float _prev_y, float _current_x, float _current_y);
        bool proxyAccelerometer(float _x, float _y, float _z);
    };
    
}

#endif
