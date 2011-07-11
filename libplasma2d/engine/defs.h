/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_DEFS_H
#define P2D_DEFS_H

#include <math.h>

#include "../external/glm/glm.hpp"
#include "../external/glm/gtc/matrix_transform.hpp"

namespace p2d {
    
    /**
     * convert between degrees and radians
     */
    #define RAD2DEG(Rad) ((180.0 * Rad) / M_PI)
    #define DEG2RAD(Deg) ((Deg)*((M_PI)/(180.0)))
    
    /**
     * OpenGL ES projection
     */
    const glm::mat4 PROJECTION = glm::ortho(0.0f, 768.0f, 1024.0f, 0.0f, -100.0f, 100.0f);
}

#endif