/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "scene.h"

p2d::Scene::Scene() {
    default_animator = Animator();
//    fps.setText("123");
//    fps.setXY(100.0f, 100.0f);
//    fps.setText();
}


p2d::Scene::~Scene() {
    // free all of the display objects
    std::vector<DisplayObject*>::iterator iter;
    for (iter = display_objects.begin(); iter != display_objects.end(); iter++) {
        delete (*iter);
        (*iter) = NULL;
    }
    
    display_objects.clear();
}


void p2d::Scene::addToScene(DisplayObject* _object) {
    display_objects.push_back(_object);
}


void p2d::Scene::addObjectWithAnimator(DisplayObject* _object, char* _animator) {
    // TODO attach this to another animator
    display_objects.push_back(_object);
}


void p2d::Scene::tick(float _delta_time) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    std::vector<DisplayObject*>::iterator iter;
    for (iter = display_objects.begin(); iter != display_objects.end(); iter++) {
        (*iter)->stepTween(_delta_time * 1000);
        (*iter)->update(_delta_time);
        (*iter)->draw();
    }
    
//    fps.draw();
}
