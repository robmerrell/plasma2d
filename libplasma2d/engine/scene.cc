/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "scene.h"

p2d::Scene::Scene() {
    default_animator = Animator();
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


void p2d::Scene::addToScene(DisplayObject* object) {
    display_objects.push_back(object);
}


void p2d::Scene::addObjectWithAnimator(DisplayObject* object, char* animator) {
    // TODO attach this to another animator
    display_objects.push_back(object);
}


void p2d::Scene::tick(float dt) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    std::vector<DisplayObject*>::iterator iter;
    for (iter = display_objects.begin(); iter != display_objects.end(); iter++) {
        (*iter)->update(dt);
        (*iter)->draw();
    }
}
