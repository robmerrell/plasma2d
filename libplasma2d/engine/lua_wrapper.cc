/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "lua_wrapper.h"

p2d::LuaWrapper::LuaWrapper() {
    lua = lua_open();
	luaL_openlibs(lua);    
}


p2d::LuaWrapper::~LuaWrapper() {
    lua_close(lua);
}


lua_State* p2d::LuaWrapper::getVM() {
    return lua;
}


void p2d::LuaWrapper::bootstrap() {
    std::string file = script_path + "/bootstrap.lua";
    if (luaL_dofile(lua, file.c_str()))
        printf("%s\n", lua_tostring(lua, -1));
}


void p2d::LuaWrapper::setScriptPath(std::string _script_path) {
    script_path = _script_path;
}


std::string p2d::LuaWrapper::getScriptPath() {
    return script_path;
}