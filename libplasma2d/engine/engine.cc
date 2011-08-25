/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "engine.h"


p2d::Engine::Engine() {
    fps = 0.0f;
}


p2d::Engine::~Engine() {
    // shutdown systems
    
    // TODO: unload all textures
    
    // TODO: unload all shader programs
    
    // TODO: destroy all shaders
}


void p2d::Engine::initialize(std::string _resource_path) {
    p2d::ShaderManager::Inst()->setShaderPath(_resource_path + "/shaders");
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    
    // build standard shaders
    p2d::ShaderManager::Inst()->compileShader("move_color.vert");
    p2d::ShaderManager::Inst()->compileShader("move_color.frag");
    p2d::ShaderManager::Inst()->buildProgram("move_color.vert", "move_color.frag", "move_color");
    
    glViewport(0, 0, 768, 1024);
    
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    luaWrapper.setScriptPath(_resource_path + "/examples");
    luaWrapper.bootstrap();
    
    luaWrapper.setResourcePath("images", (_resource_path + "/examples/assets/images").c_str());
    luaWrapper.setResourcePath("fonts", (_resource_path + "/examples/assets/fonts").c_str());
    
    luaWrapper.runMain();
}


void p2d::Engine::run() {    
    p2d::Director::Inst()->playScene(p2d::Director::Inst()->getCurrentScene());
}


p2d::LuaWrapper& p2d::Engine::getLuaWrapper() {
    return luaWrapper;
}


void p2d::Engine::tick() {
//    p2d::squirrel_functions::emitSceneUpdateEvent(getSqWrapper().getVM());
//    p2d::squirrel_functions::processEventQueue(sqWrapper.getVM());
    p2d::Director::Inst()->getCurrentScene()->tick(fps);
}


void p2d::Engine::setFPS(float _fps) {
    fps = _fps;
}