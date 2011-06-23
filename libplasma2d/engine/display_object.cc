/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "display_object.h"

p2d::DisplayObject::DisplayObject() {
    x = 0.0f;
    y = 0.0f;
    anchor_x = 0.0f;
    anchor_y = 0.0f;
    angle = 0.0f;
    scale = 1.0f;
}


void p2d::DisplayObject::setXY(float _x, float _y) {
    x = _x;
    y = _y;
}

float p2d::DisplayObject::getX() {
    return x;
}

float p2d::DisplayObject::getY() {
    return y;
}


void p2d::DisplayObject::setAngle(float _angle) {
    angle = _angle;
}

float p2d::DisplayObject::getAngle() {
    return angle;
}


void p2d::DisplayObject::setScale(float _scale) {
    scale = _scale;
}

float p2d::DisplayObject::getScale() {
    return scale;
}


void p2d::DisplayObject::setAnchor(float _x, float _y) {
    if (_x < 0.0f) _x = 0.0f;
    if (_x > 1.0f) _x = 1.0f;
    
    if (_y < 0.0f) _y = 0.0f;
    if (_y > 1.0f) _y = 1.0f;
    
    anchor_x = _x;
    anchor_y = _y;
}

float p2d::DisplayObject::getAnchorX() {
    return anchor_x;
}

float p2d::DisplayObject::getAnchorY() {
    return anchor_y;
}