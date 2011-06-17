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
    
    // We are assuming that we only want one VM
    Sqrat::DefaultVM::Set(vm);
}


p2d::SquirrelWrapper::~SquirrelWrapper() {
    sq_close(vm);
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