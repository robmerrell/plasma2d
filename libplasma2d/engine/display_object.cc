/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "display_object.h"

p2d::DisplayObject::DisplayObject() {
    pos = p2d::pxy(0.0f, 0.0f);
    anchor = p2d::pxy(0.0f, 0.0f);
    angle = 0.0f;
    scale = 1.0f;
}


void p2d::DisplayObject::setPos(p2d::pxyCoords new_pos) {
    pos = new_pos;
}

p2d::pxyCoords p2d::DisplayObject::getPos() {
    return pos;
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


void p2d::DisplayObject::setAnchor(p2d::pxyCoords _anchor) {
    if (_anchor.x < 0.0f) _anchor.x = 0.0f;
    if (_anchor.x > 1.0f) _anchor.x = 1.0f;
    
    if (_anchor.y < 0.0f) _anchor.y = 0.0f;
    if (_anchor.y > 1.0f) _anchor.y = 1.0f;
    
    anchor = _anchor;
}

p2d::pxyCoords p2d::DisplayObject::getAnchor() {
    return anchor;
}