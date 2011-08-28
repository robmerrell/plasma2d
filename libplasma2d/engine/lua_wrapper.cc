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
    // create the p2d table
    lua_newtable(lua);
    
    // script base path
    lua_pushstring(lua, script_path.c_str());
    lua_setfield(lua, -2, "script_path");
    
    // version
    lua_pushstring(lua, "0.1");
    lua_setfield(lua, -2, "version");
    
    lua_setglobal(lua, "p2d");
    
    // open bound classes
    tolua_director_open(lua);
    tolua_scene_open(lua);
    tolua_texture_open(lua);
    tolua_display_object_open(lua);
    tolua_actor_open(lua);
    
    std::string file = script_path + "/bootstrap.lua";
    if (luaL_dofile(lua, file.c_str()))
        printf("%s\n", lua_tostring(lua, -1));
}


void p2d::LuaWrapper::runMain() {
    std::string file = script_path + "/main.lua";
    if (luaL_dofile(lua, file.c_str()))
        printf("%s\n", lua_tostring(lua, -1));
}


void p2d::LuaWrapper::setScriptPath(std::string _script_path) {
    script_path = _script_path;
}


std::string p2d::LuaWrapper::getScriptPath() {
    return script_path;
}


void p2d::LuaWrapper::setResourcePath(const char* _type, const char* _path) {
    lua_getglobal(lua, "set_resource_path");
    lua_pushstring(lua, _type);
    lua_pushstring(lua, _path);
    lua_pcall(lua, 2, 0, 0);
}


void p2d::LuaWrapper::processEventQueue() {
    lua_getglobal(lua, "process_events");
    lua_pcall(lua, 0, 0, 0);
}


void p2d::LuaWrapper::proxyTouchesBeganOrEndedEvent(std::string _proxy_function, float _x, float _y, int _tap_count) {
    lua_getglobal(lua, _proxy_function.c_str());
    lua_pushnumber(lua, _x);
    lua_pushnumber(lua, _y);
    lua_pushnumber(lua, _tap_count);
    lua_pcall(lua, 3, 0, 0);    
}


void p2d::LuaWrapper::proxyTouchesMoved(float _prev_x, float _prev_y, float _current_x, float _current_y) {
    lua_getglobal(lua, "event_proxy_touches_moved");
    lua_pushnumber(lua, _prev_x);
    lua_pushnumber(lua, _prev_y);
    lua_pushnumber(lua, _current_x);
    lua_pushnumber(lua, _current_y);
    lua_pcall(lua, 4, 0, 0);    
}