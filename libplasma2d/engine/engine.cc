/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "engine.h"


p2d::Engine::Engine() {
    fps = 0.0f;
    processing = true;
}


p2d::Engine::~Engine() {
    // shutdown systems
    
    // TODO: unload all textures caches
    
    // TODO: unload all shader programs
    
    
    // TODO: destroy all shaders
}


void p2d::Engine::initialize(std::string _system_resource_path, std::string _user_resource_path) {
    p2d::ShaderManager::Inst()->setShaderPath(_system_resource_path + "/shaders");
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    
    // build standard shaders
    p2d::ShaderManager::Inst()->compileShader("move_color.vert");
    p2d::ShaderManager::Inst()->compileShader("move_color.frag");
    p2d::ShaderManager::Inst()->buildProgram("move_color.vert", "move_color.frag", "move_color");
    
    glViewport(0, 0, 768, 1024);
    
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    luaWrapper.setScriptPath(_user_resource_path);
    if (!luaWrapper.bootstrap()) stopProcessing();
    
    if (!luaWrapper.setResourcePath("images", (_user_resource_path + "/assets/images").c_str())) stopProcessing();
    if (!luaWrapper.setResourcePath("fonts", (_user_resource_path + "/assets/fonts").c_str())) stopProcessing();
    
    if (!luaWrapper.runMain()) stopProcessing();
}


void p2d::Engine::run() {    
    p2d::Director::Inst()->playScene(p2d::Director::Inst()->getCurrentScene());
}


p2d::LuaWrapper& p2d::Engine::getLuaWrapper() {
    return luaWrapper;
}


void p2d::Engine::tick(float _delta_time) {
    if (processing) {
        if (!luaWrapper.processEventQueue()) stopProcessing();
        if (!luaWrapper.emitSceneUpdateEvent()) stopProcessing();
        p2d::Director::Inst()->getCurrentScene()->tick(_delta_time);
    }
}


void p2d::Engine::setFPS(float _fps) {
    fps = _fps;
    p2d::Director::Inst()->setFPS(_fps);
}


void p2d::Engine::stopProcessing() {
    processing = false;
}