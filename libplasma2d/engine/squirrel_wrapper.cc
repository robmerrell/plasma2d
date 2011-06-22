/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "squirrel_wrapper.h"


void p2d::squirrel_functions::printfunc(HSQUIRRELVM vm, const SQChar *s, ...) {
    va_list arglist;
    va_start(arglist, s);
    vprintf(s, arglist);
    va_end(arglist);
}

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
    sceneClass.Func("addObject", &p2d::Scene::addObject);
    sceneClass.Func("addObjectWithAnimator", &p2d::Scene::addObjectWithAnimator);
    Sqrat::RootTable(vm).Bind("Scene", sceneClass);
    
    // Actor
    Sqrat::Class<p2d::Actor> actorClass(vm);
    actorClass.Func("setImage", &p2d::Actor::setImage);
    actorClass.Func("setXY", &p2d::Actor::setXY);
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