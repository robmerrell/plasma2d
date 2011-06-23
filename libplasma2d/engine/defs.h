/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DEFS_H
#define P2D_DEFS_H

#include "defs.h"
#include <math.h>

namespace p2d {
    
    /**
     * convert between degrees and radians
     */
    #define RAD2DEG(Rad) ((180.0 * Rad) / M_PI)
    #define DEG2RAD(Deg) ((Deg)*((M_PI)/(180.0)))
}

#endif