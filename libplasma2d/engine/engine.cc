/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "engine.h"

p2d::Engine::~Engine() {
    // shutdown systems
}


void p2d::Engine::initialize() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    
    glOrthof(0.0f, 768.0f, 1024.0f, 0.0f, -1.0f, 1.0f);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glEnable(GL_TEXTURE_2D);
}


void p2d::Engine::run(Scene* _scene) {
    // run the main script or run the scene from the config file?
    
    // TODO: read start scene from config file
    p2d::Director::Inst()->playScene(_scene);
}


void p2d::Engine::tick() {
    p2d::Director::Inst()->getCurrentScene()->tick(0.16f);
}