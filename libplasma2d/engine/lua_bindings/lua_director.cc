/*
** Lua binding: director
** Generated automatically by tolua++-1.0.92 on Wed Aug 31 00:54:19 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_director_open (lua_State* tolua_S);

#include "director.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"p2d::Scene");
}

/* function: p2d::BindingHelpers::Director_playScene */
#ifndef TOLUA_DISABLE_tolua_director_p2d_BindingHelpers_Director_playScene00
static int tolua_director_p2d_BindingHelpers_Director_playScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Scene* _scene = ((p2d::Scene*)  tolua_tousertype(tolua_S,1,0));
  {
   p2d::BindingHelpers::Director_playScene(_scene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Director_playScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: p2d::BindingHelpers::Director_getCurrentScene */
#ifndef TOLUA_DISABLE_tolua_director_p2d_BindingHelpers_Director_getCurrentScene00
static int tolua_director_p2d_BindingHelpers_Director_getCurrentScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Scene* tolua_ret = (p2d::Scene*)  p2d::BindingHelpers::Director_getCurrentScene();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Scene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Director_getCurrentScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: p2d::BindingHelpers::Director_getFPS */
#ifndef TOLUA_DISABLE_tolua_director_p2d_BindingHelpers_Director_getFPS00
static int tolua_director_p2d_BindingHelpers_Director_getFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  p2d::BindingHelpers::Director_getFPS();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Director_getFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_director_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"p2d",0);
  tolua_beginmodule(tolua_S,"p2d");
   tolua_module(tolua_S,"BindingHelpers",0);
   tolua_beginmodule(tolua_S,"BindingHelpers");
    tolua_function(tolua_S,"Director_playScene",tolua_director_p2d_BindingHelpers_Director_playScene00);
    tolua_function(tolua_S,"Director_getCurrentScene",tolua_director_p2d_BindingHelpers_Director_getCurrentScene00);
    tolua_function(tolua_S,"Director_getFPS",tolua_director_p2d_BindingHelpers_Director_getFPS00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_director (lua_State* tolua_S) {
 return tolua_director_open(tolua_S);
};
#endif

