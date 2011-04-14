/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "matrix.h"

void p2d::multiplyMatrices(matrix* _matrix, matrix* _first, matrix* _second) {
    p2d::matrix tmp;
    
    for (int i = 0; i < 4; i++) {
        tmp.m[i][0] =	(_first->m[i][0] * _second->m[0][0]) +
        (_first->m[i][1] * _second->m[1][0]) +
        (_first->m[i][2] * _second->m[2][0]) +
        (_first->m[i][3] * _second->m[3][0]) ;
        
		tmp.m[i][1] =	(_first->m[i][0] * _second->m[0][1]) + 
        (_first->m[i][1] * _second->m[1][1]) +
        (_first->m[i][2] * _second->m[2][1]) +
        (_first->m[i][3] * _second->m[3][1]) ;
        
		tmp.m[i][2] =	(_first->m[i][0] * _second->m[0][2]) + 
        (_first->m[i][1] * _second->m[1][2]) +
        (_first->m[i][2] * _second->m[2][2]) +
        (_first->m[i][3] * _second->m[3][2]) ;
        
		tmp.m[i][3] =	(_first->m[i][0] * _second->m[0][3]) + 
        (_first->m[i][1] * _second->m[1][3]) +
        (_first->m[i][2] * _second->m[2][3]) +
        (_first->m[i][3] * _second->m[3][3]) ;
    }
    
    memcpy(_matrix, &tmp, sizeof(p2d::matrix));
}


void p2d::generateIdentityMatrix(p2d::matrix* _matrix) {
    memset(_matrix, 0x0, sizeof(p2d::matrix));
    
    _matrix->m[0][0] = 1.0f;
    _matrix->m[1][1] = 1.0f;
    _matrix->m[2][2] = 1.0f;
    _matrix->m[3][3] = 1.0f;
}


void p2d::translateMatrix(p2d::matrix* _matrix, float _x, float _y, float _z) {
    _matrix->m[3][0] += (_matrix->m[0][0] * _x + _matrix->m[1][0] * _y + _matrix->m[2][0] * _z);
    _matrix->m[3][1] += (_matrix->m[0][1] * _x + _matrix->m[1][1] * _y + _matrix->m[2][1] * _z);
    _matrix->m[3][2] += (_matrix->m[0][2] * _x + _matrix->m[1][2] * _y + _matrix->m[2][2] * _z);
    _matrix->m[3][3] += (_matrix->m[0][3] * _x + _matrix->m[1][3] * _y + _matrix->m[2][3] * _z);
}


void p2d::rotateMatrix(p2d::matrix *_matrix, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    GLfloat sinAngle, cosAngle;
    GLfloat mag = sqrtf(x * x + y * y + z * z);
    
    // TODO: use deg2rad
    sinAngle = sinf ( angle * M_PI / 180.0f );
    cosAngle = cosf ( angle * M_PI / 180.0f );
    if ( mag > 0.0f )
    {
        GLfloat xx, yy, zz, xy, yz, zx, xs, ys, zs;
        GLfloat oneMinusCos;
        p2d::matrix rotMat;
        
        x /= mag;
        y /= mag;
        z /= mag;
        
        xx = x * x;
        yy = y * y;
        zz = z * z;
        xy = x * y;
        yz = y * z;
        zx = z * x;
        xs = x * sinAngle;
        ys = y * sinAngle;
        zs = z * sinAngle;
        oneMinusCos = 1.0f - cosAngle;
        
        rotMat.m[0][0] = (oneMinusCos * xx) + cosAngle;
        rotMat.m[0][1] = (oneMinusCos * xy) - zs;
        rotMat.m[0][2] = (oneMinusCos * zx) + ys;
        rotMat.m[0][3] = 0.0F; 
        
        rotMat.m[1][0] = (oneMinusCos * xy) + zs;
        rotMat.m[1][1] = (oneMinusCos * yy) + cosAngle;
        rotMat.m[1][2] = (oneMinusCos * yz) - xs;
        rotMat.m[1][3] = 0.0F;
        
        rotMat.m[2][0] = (oneMinusCos * zx) - ys;
        rotMat.m[2][1] = (oneMinusCos * yz) + xs;
        rotMat.m[2][2] = (oneMinusCos * zz) + cosAngle;
        rotMat.m[2][3] = 0.0F; 
        
        rotMat.m[3][0] = 0.0F;
        rotMat.m[3][1] = 0.0F;
        rotMat.m[3][2] = 0.0F;
        rotMat.m[3][3] = 1.0F;
        
        p2d::multiplyMatrices(_matrix, &rotMat, _matrix);
    }
}


void p2d::generateFrustumMatrix(p2d::matrix* _matrix, float _left, float _right, float _bottom, float _top, float _near_z, float _far_z) {
    float dx = _right - _left;
    float dy = _top - _bottom;
    float dz = _far_z - _near_z;
    p2d::matrix frustum;
    
    if ( (_near_z <= 0.0f) || (_far_z <= 0.0f) ||
        (dx <= 0.0f) || (dy <= 0.0f) || (dz <= 0.0f) )
        return;
    
    frustum.m[0][0] = 2.0f * _near_z / dx;
    frustum.m[0][1] = frustum.m[0][2] = frustum.m[0][3] = 0.0f;
    
    frustum.m[1][1] = 2.0f * _near_z / dy;
    frustum.m[1][0] = frustum.m[1][2] = frustum.m[1][3] = 0.0f;
    
    frustum.m[2][0] = (_right + _left) / dx;
    frustum.m[2][1] = (_top + _bottom) / dy;
    frustum.m[2][2] = -(_near_z + _far_z) / dz;
    frustum.m[2][3] = -1.0f;
    
    frustum.m[3][2] = -2.0f * _near_z * _far_z / dz;
    frustum.m[3][0] = frustum.m[3][1] = frustum.m[3][3] = 0.0f;
    
    p2d::multiplyMatrices(_matrix, &frustum, _matrix);
}