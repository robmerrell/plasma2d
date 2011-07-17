/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "squirrel_wrapper.h"

p2d::SquirrelWrapper::SquirrelWrapper() {
    vm = sq_open(1024);
    
    // define the error and print functions, just print both to stdout for now...
    sqstd_seterrorhandlers(vm);
    sq_setprintfunc(vm, p2d::squirrel_functions::printfunc, p2d::squirrel_functions::printfunc);
    
    sq_pushroottable(vm);
    sqstd_register_bloblib(vm);
    sqstd_register_iolib(vm);
    sqstd_register_stringlib(vm);
    
    // We are assuming that we only want one VM
    Sqrat::DefaultVM::Set(vm);
}


p2d::SquirrelWrapper::~SquirrelWrapper() {
    sq_close(vm);
}


HSQUIRRELVM p2d::SquirrelWrapper::getVM() {
    return vm;
}


void p2d::SquirrelWrapper::bindClasses() { 
    // global functions
    // TODO: Can we punt this crap and delete the entire manager
    Sqrat::RootTable().Func("preloadTexture", &p2d::BindingHelpers::TextureManager_preloadTexture);
    
    // system table used internally by the engine
    Sqrat::Table p2dSystemTable(vm);
    p2dSystemTable.SetValue("script_base_path", script_path);
    Sqrat::RootTable(vm).Bind("p2d_system", p2dSystemTable);
    
    // Director
    Sqrat::Table directorTable(vm);
    directorTable.Func("playScene", &p2d::BindingHelpers::Director_playScene);
    directorTable.Func("getCurrentScene", &p2d::BindingHelpers::Director_getCurrentScene);
    Sqrat::RootTable(vm).Bind("director", directorTable);
    
    // Scene
    Sqrat::Class<p2d::Scene> sceneClass(vm);
    sceneClass.Func("addToScene", &p2d::Scene::addToScene);
    sceneClass.Func("addObjectWithAnimator", &p2d::Scene::addObjectWithAnimator);
    Sqrat::RootTable(vm).Bind("Scene", sceneClass);
    
    // Texture
    Sqrat::Class<p2d::Texture> textureClass(vm);
    textureClass.Func("loadTexture", &p2d::Texture::loadTexture);
    textureClass.Func("getGLTexture", &p2d::Texture::getTexture);
    // TODO: this has something to do with returning std::string it seems. Same thing with method below...
//    textureClass.Func("getTextureName", &p2d::Texture::getTextureName);
    Sqrat::RootTable(vm).Bind("Texture", textureClass);
    
    // TextureCache
    Sqrat::RootTable().Func("cacheTexture", &p2d::BindingHelpers::TextureCache_cacheTexture);
    Sqrat::RootTable().Func("getCachedTexture", &p2d::BindingHelpers::TextureCache_getCachedTexture);
    Sqrat::RootTable().Func("removeFromTextureCache", &p2d::BindingHelpers::TextureCache_removeFromCache);
    
    // Actor
    Sqrat::Class<p2d::Actor> actorClass(vm);
    actorClass.Func("setImage", &p2d::Actor::setImage);
    actorClass.Func("setXY", &p2d::Actor::setXY);
    actorClass.Func("getX", &p2d::Actor::getX);
    actorClass.Func("getY", &p2d::Actor::getY);
    actorClass.Func("setDimensions", &p2d::Actor::setDimensions);
    actorClass.Func("getWidth", &p2d::Actor::getWidth);
    actorClass.Func("getHeight", &p2d::Actor::getHeight);
    actorClass.Func("setAngle", &p2d::Actor::setAngle);
    actorClass.Func("getAngle", &p2d::Actor::getAngle);
    actorClass.Func("setScale", &p2d::Actor::setScale);
    actorClass.Func("getScale", &p2d::Actor::getScale);
    actorClass.Func("setAnchor", &p2d::Actor::setAnchor);
    actorClass.Func("getAnchorX", &p2d::Actor::getAnchorX);
    actorClass.Func("getAnchorY", &p2d::Actor::getAnchorY);
    Sqrat::RootTable(vm).Bind("Actor", actorClass);
    
    // Label
    Sqrat::Class<p2d::Label> labelClass(vm);
    labelClass.Func("setText", &p2d::Label::setText);
    // TODO fix this
//    labelClass.Func("getText", &p2d::Label::getText);
    labelClass.Func("setXY", &p2d::Label::setXY);
    labelClass.Func("getX", &p2d::Label::getX);
    labelClass.Func("getY", &p2d::Label::getY);
    labelClass.Func("setDimensions", &p2d::Label::setDimensions);
    labelClass.Func("getWidth", &p2d::Label::getWidth);
    labelClass.Func("getHeight", &p2d::Label::getHeight);
    labelClass.Func("setAngle", &p2d::Label::setAngle);
    labelClass.Func("getAngle", &p2d::Label::getAngle);
    labelClass.Func("setScale", &p2d::Label::setScale);
    labelClass.Func("getScale", &p2d::Label::getScale);
    labelClass.Func("setAnchor", &p2d::Label::setAnchor);
    labelClass.Func("getAnchorX", &p2d::Label::getAnchorX);
    labelClass.Func("getAnchorY", &p2d::Label::getAnchorY);
    Sqrat::RootTable(vm).Bind("Label", labelClass);

}


void p2d::SquirrelWrapper::bootstrap() {
    Sqrat::Script script;
    script.CompileFile(script_path + "/bootstrap.nut");
    script.Run();
}


void p2d::SquirrelWrapper::runMain() {
    Sqrat::Script script;
    script.CompileFile(script_path + "/main.nut");
    script.Run();
}


void p2d::SquirrelWrapper::setScriptPath(std::string _script_path) {
    script_path = _script_path;
}


std::string p2d::SquirrelWrapper::getScriptPath() {
    return script_path;
}


void p2d::SquirrelWrapper::setResourcePath(const char* _type, const char* _path) {
    Sqrat::Function func(Sqrat::RootTable(vm), "setResourcePath");
    func(_type, _path);
}


// TODO: Convert this to use Sqrat's function handling methods
void p2d::squirrel_functions::processEventQueue(HSQUIRRELVM _vm) {
    int top = sq_gettop(_vm);
    sq_pushroottable(_vm);
    
    sq_pushstring(_vm, _SC("processEvents"), -1);
    if (SQ_SUCCEEDED(sq_get(_vm, -2))) {
        sq_pushroottable(_vm);
        sq_call(_vm, 1, SQFalse, SQFalse);
    }
    
    sq_settop(_vm, top);
}


void p2d::squirrel_functions::emitTouchesBeganOrEndedEvent(HSQUIRRELVM _vm, const char* _proxy_function, float _x, float _y, int _tap_count) {
    Sqrat::Function func(Sqrat::RootTable(_vm), _proxy_function);
    func(_x, _y, _tap_count);
}

void p2d::squirrel_functions::emitTouchesMoved(HSQUIRRELVM _vm, float _prev_x, float _prev_y, float _cur_x, float _cur_y) {
    Sqrat::Function func(Sqrat::RootTable(_vm), "eventProxyTouchesMoved");
    func(_prev_x, _prev_y, _cur_x, _cur_y);    
}

void p2d::squirrel_functions::emitSceneUpdateEvent(HSQUIRRELVM _vm) {
    Sqrat::Function func(Sqrat::RootTable(_vm), "eventProxySceneUpdate");
    func();
}

void p2d::squirrel_functions::printfunc(HSQUIRRELVM _vm, const SQChar* _s, ...) {
    va_list arglist;
    va_start(arglist, _s);
    vprintf(_s, arglist);
    va_end(arglist);
}