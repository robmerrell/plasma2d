/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "engine.h"


p2d::Engine::~Engine() {
    // shutdown systems
    
    // TODO: unload all textures
    
    // TODO: unload all shader programs
    
    // TODO: destroy all shaders
}


void p2d::Engine::initialize(std::string _resource_path) {
    // save the resource path in the director so that
    // the other classes have access to it
    p2d::TextureManager::Inst()->setResourcePath(_resource_path);
    
    glClearColor(0.0f, 0.7f, 0.5f, 1.0f);
    
    // build standard shaders
    p2d::ShaderManager::Inst()->compileShader("move_color.vert");
    p2d::ShaderManager::Inst()->compileShader("move_color.frag");
    p2d::ShaderManager::Inst()->buildProgram("move_color.vert", "move_color.frag", "move_color");
    
    glViewport(0, 0, 768, 1024);
    
    /*
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    
    glOrthof(0.0f, 768.0f, 1024.0f, 0.0f, -1.0f, 1.0f);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glEnable(GL_TEXTURE_2D);
     */
}


void p2d::Engine::run(Scene* _scene) {
    // run the main script or run the scene from the config file?
    
    // TODO: read start scene from config file
    p2d::Director::Inst()->playScene(_scene);
}


void p2d::Engine::tick() {
    p2d::Director::Inst()->getCurrentScene()->tick(0.16f);
}