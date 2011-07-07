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
#include "texture_manager.h"

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
         * setter/getter for the script path
         */
        void setScriptPath(std::string);
        std::string getScriptPath();
    };
    
    
    namespace squirrel_functions {
        
        /**
         * Process all pending system events in the queue
         */
        void processEventQueue(HSQUIRRELVM);
        
        /**
         * Emit touch events
         */
        void emitTouchesBeganOrEndedEvent(HSQUIRRELVM, const char*, float, float, int);
        void emitTouchesMoved(HSQUIRRELVM, float, float, float, float);
        
        /**
         * Emit the update event for the scenes (still debating on the necessity of a DisplayObject update event)
         */
        void emitSceneUpdateEvent(HSQUIRRELVM);
        
        /**
         * Printing 
         */
        void printfunc(HSQUIRRELVM, const SQChar*, ...);
    }
    
}

#endif
