/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_SQUIRREL_WRAPPER_H
#define P2D_SQUIRREL_WRAPPER_H

#include <squirrel.h>
#include <sqstdio.h> 
#include <sqstdaux.h>
#include <sqrat.h>

#include <stdarg.h> 
#include <stdio.h> 
#include <string.h>

// classes to bind...
#include "actor.h"
#include "director.h"
#include "scene.h"

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
         * Printing 
         */
        void printfunc(HSQUIRRELVM, const SQChar*, ...);

    }
    
}

#endif
