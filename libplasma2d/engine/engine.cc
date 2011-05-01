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
    
    // shut down squirrel
    sq_close(vm);
}


void p2d::Engine::initialize(std::string _resource_path) {
    // initialize squirrel
    vm = sq_open(1024);
    sqstd_seterrorhandlers(vm);
    sq_setprintfunc(vm, p2d::squirrel_printfunc, p2d::squirrel_printfunc);
    
    // save the resource path in the director so that
    // the other classes have access to it
    p2d::TextureManager::Inst()->setResourcePath(_resource_path);
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    
    // build standard shaders
    p2d::ShaderManager::Inst()->compileShader("move_color.vert");
    p2d::ShaderManager::Inst()->compileShader("move_color.frag");
    p2d::ShaderManager::Inst()->buildProgram("move_color.vert", "move_color.frag", "move_color");
    
    glViewport(0, 0, 768, 1024);
    
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}


void p2d::Engine::run(Scene* _scene) {
    // run the main.nut file
    // TODO: allow reading main.cnut
    // TODO: The resource path should be moved somewhere else
    sq_pushroottable(vm);
    std::string main_file = TextureManager::Inst()->getResourcePath() + "/src/main.nut";
    if (SQ_SUCCEEDED(sqstd_dofile(vm, _SC(main_file.c_str()), 0, 1))) {
        printf("%s \n", "it ran");
    } else {
        printf("%s \n", "it didn't run");
    }
    
    // TODO: read start scene from config file
    p2d::Director::Inst()->playScene(_scene);
}


void p2d::Engine::tick() {
    p2d::Director::Inst()->getCurrentScene()->tick(0.16f);
}


void p2d::squirrel_printfunc(HSQUIRRELVM vm, const SQChar *s, ...) {
    va_list arglist;
    va_start(arglist, s);
    vprintf(s, arglist);
    va_end(arglist);
}