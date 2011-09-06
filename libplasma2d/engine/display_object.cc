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
    tweening = false;
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


void p2d::DisplayObject::setupTween(int _time, int _transition, int _easing_equation) {
    param = tween::TweenerParam(_time, _transition, _easing_equation);
}


void p2d::DisplayObject::addProperty(std::string _property, float _value) {
    if (_property == "x")
        param.addProperty(&x, _value);
    else if (_property == "y")
        param.addProperty(&y, _value);
    else if (_property == "scale")
        param.addProperty(&scale, _value);
    else if (_property == "angle")
        param.addProperty(&angle, _value);
}


void p2d::DisplayObject::startTween() {
    tweening = true;
    tweener.addTween(param);
}


void p2d::DisplayObject::stepTween(float _delta_time) {
    if (tweening)
        tweener.step(_delta_time);
}