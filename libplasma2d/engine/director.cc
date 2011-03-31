/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */


#include "director.h"

p2d::Director* p2d::Director::obj = NULL;


p2d::Director::~Director() {
    delete obj;
    obj = NULL;
    
    delete current_scene;
    current_scene = NULL;
}


p2d::Director* p2d::Director::Inst() {
    if (!obj) {
        obj = new Director();
        
        obj->current_scene = NULL;
    }
    
    return obj;
}


void p2d::Director::playScene(Scene*& _scene) {
    current_scene = _scene;
}


p2d::Scene* p2d::Director::getCurrentScene() {
    return obj->current_scene;
}