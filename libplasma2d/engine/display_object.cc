/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "display_object.h"

p2d::DisplayObject::DisplayObject() {
    pos = p2d::pxy(0.0f, 0.0f);
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
    angle = angle;
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