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
    
    // Actor
    Sqrat::Class<p2d::Actor> actorClass(vm);
    actorClass.Func("setImage", &p2d::Actor::setImage);
    actorClass.Func("setXY", &p2d::Actor::setXY);
    actorClass.Func("getX", &p2d::Actor::getX);
    actorClass.Func("getY", &p2d::Actor::getY);
    actorClass.Func("setAngle", &p2d::Actor::setAngle);
    actorClass.Func("getAngle", &p2d::Actor::getAngle);
    actorClass.Func("setScale", &p2d::Actor::setScale);
    actorClass.Func("getScale", &p2d::Actor::getScale);
    actorClass.Func("setAnchor", &p2d::Actor::setAnchor);
    actorClass.Func("getAnchorX", &p2d::Actor::getAnchorX);
    actorClass.Func("getAnchorY", &p2d::Actor::getAnchorY);
    Sqrat::RootTable(vm).Bind("Actor", actorClass);
}


void p2d::SquirrelWrapper::bootstrap() {
    Sqrat::Script script;
    script.CompileFile(script_path + "/src/bootstrap.nut");
    script.Run();
}


void p2d::SquirrelWrapper::setScriptPath(std::string _script_path) {
    script_path = _script_path;
}


std::string p2d::SquirrelWrapper::getScriptPath() {
    return script_path;
}


void p2d::squirrel_functions::printfunc(HSQUIRRELVM vm, const SQChar *s, ...) {
    va_list arglist;
    va_start(arglist, s);
    vprintf(s, arglist);
    va_end(arglist);
}


// TODO: Convert this to use Sqrat's function handling methods
void p2d::squirrel_functions::processEventQueue(HSQUIRRELVM vm) {
    int top = sq_gettop(vm);
    sq_pushroottable(vm);
    
    sq_pushstring(vm, _SC("processEvents"), -1);
    if (SQ_SUCCEEDED(sq_get(vm, -2))) {
        sq_pushroottable(vm);
        sq_call(vm, 1, SQFalse, SQFalse);
    }
    
    sq_settop(vm, top);
}


void p2d::squirrel_functions::emitTouchesBeganOrEndedEvent(HSQUIRRELVM _vm, const char* _proxy_function, float _x, float _y, int _tap_count) {
    Sqrat::Function func(Sqrat::RootTable(_vm), _proxy_function);
    func(_x, _y, _tap_count);
}

void p2d::squirrel_functions::emitTouchesMoved(HSQUIRRELVM _vm, float _prev_x, float _prev_y, float _cur_x, float _cur_y) {
    Sqrat::Function func(Sqrat::RootTable(_vm), "eventProxyTouchesMoved");
    func(_prev_x, _prev_y, _cur_x, _cur_y);    
}