/*
** Lua binding: tweening
** Generated automatically by tolua++-1.0.92 on Mon Sep  5 10:48:48 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tweening_open (lua_State* tolua_S);

#include "../../external/cpptweener/CppTweener.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* Open function */
TOLUA_API int tolua_tweening_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"tween",0);
  tolua_beginmodule(tolua_S,"tween");
   tolua_constant(tolua_S,"LINEAR",tween::LINEAR);
   tolua_constant(tolua_S,"SINE",tween::SINE);
   tolua_constant(tolua_S,"QUINT",tween::QUINT);
   tolua_constant(tolua_S,"QUART",tween::QUART);
   tolua_constant(tolua_S,"QUAD",tween::QUAD);
   tolua_constant(tolua_S,"EXPO",tween::EXPO);
   tolua_constant(tolua_S,"ELASTIC",tween::ELASTIC);
   tolua_constant(tolua_S,"CUBIC",tween::CUBIC);
   tolua_constant(tolua_S,"CIRC",tween::CIRC);
   tolua_constant(tolua_S,"BOUNCE",tween::BOUNCE);
   tolua_constant(tolua_S,"BACK",tween::BACK);
   tolua_constant(tolua_S,"EASE_IN",tween::EASE_IN);
   tolua_constant(tolua_S,"EASE_OUT",tween::EASE_OUT);
   tolua_constant(tolua_S,"EASE_IN_OUT",tween::EASE_IN_OUT);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tweening (lua_State* tolua_S) {
 return tolua_tweening_open(tolua_S);
};
#endif

