/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_SQUIRREL_WRAPPER_H
#define P2D_SQUIRREL_WRAPPER_H

#include <squirrel.h>
#include <sqstdblob.h>
#include <sqstdstring.h>
#include <sqstdio.h> 
#include <sqstdaux.h>
#include <sqrat.h>

#include <stdarg.h> 
#include <stdio.h> 
#include <string.h>

// classes to bind
#include "actor.h"
#include "director.h"
#include "label.h"
#include "scene.h"
#include "texture.h"
#include "managers/texture_cache.h"

namespace p2d {
    
    class SquirrelWrapper {
    private:
        HSQUIRRELVM vm;
        
        std::string script_path;
        
    public:
        /**
         * Constructor
         * Initialize the Squirrel VM
         */
        SquirrelWrapper();
        
        /**
         * Destructor
         * Clean up the Squirrel VM
         */
        ~SquirrelWrapper();
        
        /**
         * Get the Squirrel VM
         */
        HSQUIRRELVM getVM();
        
        /**
         * Bind the C++ base classes
         */
        void bindClasses();
        
        /**
         * Run bootstrap.nut
         */
        void bootstrap();
        
        /**
         * Run main.nut
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
    };
    
    
    namespace squirrel_functions {
        
        /**
         * Process all pending system events in the queue
         */
        void processEventQueue(HSQUIRRELVM _vm);
        
        /**
         * Emit touch events
         */
        void emitTouchesBeganOrEndedEvent(HSQUIRRELVM _vm, const char* _proxy_function, float _x, float _y, int _tap_count);
        void emitTouchesMoved(HSQUIRRELVM _vm, float _prev_x, float _prev_y, float _cur_x, float _cur_y);
        
        /**
         * Emit the update event for the scenes (still debating on the necessity of a DisplayObject update event)
         */
        void emitSceneUpdateEvent(HSQUIRRELVM _vm);
        
        /**
         * Printing 
         */
        void printfunc(HSQUIRRELVM _vm, const SQChar* _s, ...);
    }
    
}

#endif
