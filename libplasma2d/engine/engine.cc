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
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glViewport(0, 0, 1024, 768);
    glOrthof(0.0f, 1024, 768, 0.0f, 1000.0f, -1000.0f);
}