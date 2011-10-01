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


void p2d::Scene::addToScene(DisplayObject* _object) {
    display_objects.push_back(_object);
}


void p2d::Scene::addObjectWithAnimator(DisplayObject* _object, char* _animator) {
    // TODO attach this to another animator
    display_objects.push_back(_object);
}


void p2d::Scene::tick(float _delta_time) {
    cpSpaceStep(space, 1.0f/60.0f); // TODO: this needs to use a timestep accumulator
    
    glClear(GL_COLOR_BUFFER_BIT);
    
    std::vector<DisplayObject*>::iterator iter;
    for (iter = display_objects.begin(); iter != display_objects.end(); iter++) {
        (*iter)->stepTween(_delta_time * 1000);
        (*iter)->update(_delta_time);
        (*iter)->draw();
    }
}


void p2d::Scene::initPhysics() {
    cpInitChipmunk();
    space = cpSpaceNew();
}


void p2d::updatePhysicsShapes(void* _data, void* _unused) {
    cpShape *shape = (cpShape*)_data;
    
    // make sure the shape is constructed correctly
    if(shape == NULL || shape->body == NULL || shape->data == NULL) {
        // TODO: add debugging here
        return;
    }
    
    DisplayObject *entity = (DisplayObject*)shape->data;
    
    entity->setXY(shape->body->p.x, shape->body->p.y);
    entity->setAngle(RAD2DEG(shape->body->a));
    
//    Sprite *sprite = (Sprite*)shape->data;
//    
//    sprite->setX(shape->body->p.x);
//    sprite->setY(shape->body->p.y);
//    
//    // rotate certain objects
//    if (sprite->getTag() == BOX_TAG || sprite->getTag() == GEAR_TAG || sprite->getTag() == PLATFORM_TAG) {
//        sprite->setAngle(RAD2DEG(shape->body->a));
//    }
}