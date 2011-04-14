/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

// A lot of this code is based on code found in the OpenGL ES 2.0 programming guide

#ifndef P2D_MATRIX_H
#define P2D_MATRIX_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#include <string> // for memset
#include <math.h>

namespace p2d {
    
    typedef struct {
        GLfloat m[4][4];
    } matrix;
    
    /**
     * Multiple two matrices and store the result in the first parameter
     */
    void multiplyMatrices(matrix*, matrix*, matrix*);
    
    /**
     * Generate and store an identity matrix
     */
    void generateIdentityMatrix(matrix*);
    
    /**
     * Translate a matrix
     */
    void translateMatrix(matrix*, float, float, float);
    
    /**
     * Rotate a matrix
     */
    void rotateMatrix(matrix*, float, float, float, float);
    
    /**
     * "position" the frustum matrix
     * used like glFrustum
     */
    void generateFrustumMatrix(matrix*, float, float, float, float, float, float);
}

#endif