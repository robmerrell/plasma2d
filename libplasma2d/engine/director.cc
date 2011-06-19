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
        obj->projection = glm::ortho(0.0f, 768.0f, 1024.0f, 0.0f, -100.0f, 100.0f);
    }
    
    return obj;
}


void p2d::Director::playScene(Scene* _scene) {
    current_scene = _scene;
}


p2d::Scene* p2d::Director::getCurrentScene() {
    return obj->current_scene;
}


glm::mat4& p2d::Director::getProjection() {
    return obj->projection;
}


// Binding helpers
void p2d::BindingHelpers::Director_playScene(p2d::Scene* _scene) { p2d::Director::Inst()->playScene(_scene); }
p2d::Scene* p2d::BindingHelpers::Director_getCurrentScene() { return p2d::Director::Inst()->getCurrentScene(); }