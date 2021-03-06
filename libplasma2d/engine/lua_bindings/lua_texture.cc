/*
** Lua binding: texture
** Generated automatically by tolua++-1.0.92 on Thu Aug 25 00:19:43 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_texture_open (lua_State* tolua_S);

#include "texture.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_p2d__Texture (lua_State* tolua_S)
{
 p2d::Texture* self = (p2d::Texture*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"p2d::Texture");
}

/* method: new of class  p2d::Texture */
#ifndef TOLUA_DISABLE_tolua_texture_p2d_Texture_new00
static int tolua_texture_p2d_Texture_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Texture* tolua_ret = (p2d::Texture*)  Mtolua_new((p2d::Texture)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Texture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  p2d::Texture */
#ifndef TOLUA_DISABLE_tolua_texture_p2d_Texture_new00_local
static int tolua_texture_p2d_Texture_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Texture* tolua_ret = (p2d::Texture*)  Mtolua_new((p2d::Texture)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Texture");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTexture of class  p2d::Texture */
#ifndef TOLUA_DISABLE_tolua_texture_p2d_Texture_load_texture00
static int tolua_texture_p2d_Texture_load_texture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Texture",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Texture* self = (p2d::Texture*)  tolua_tousertype(tolua_S,1,0);
  std::string _texture_name = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  std::string _full_texture_path = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTexture'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->loadTexture(_texture_name,_full_texture_path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load_texture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureName of class  p2d::Texture */
#ifndef TOLUA_DISABLE_tolua_texture_p2d_Texture_get_texture_name00
static int tolua_texture_p2d_Texture_get_texture_name00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Texture* self = (p2d::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureName'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getTextureName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_texture_name'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNativeWidth of class  p2d::Texture */
#ifndef TOLUA_DISABLE_tolua_texture_p2d_Texture_get_native_width00
static int tolua_texture_p2d_Texture_get_native_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Texture* self = (p2d::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNativeWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getNativeWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_native_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNativeHeight of class  p2d::Texture */
#ifndef TOLUA_DISABLE_tolua_texture_p2d_Texture_get_native_height00
static int tolua_texture_p2d_Texture_get_native_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Texture* self = (p2d::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNativeHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getNativeHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_native_height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_texture_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"p2d",0);
  tolua_beginmodule(tolua_S,"p2d");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Texture","p2d::Texture","",tolua_collect_p2d__Texture);
   #else
   tolua_cclass(tolua_S,"Texture","p2d::Texture","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Texture");
    tolua_function(tolua_S,"new",tolua_texture_p2d_Texture_new00);
    tolua_function(tolua_S,"new_local",tolua_texture_p2d_Texture_new00_local);
    tolua_function(tolua_S,".call",tolua_texture_p2d_Texture_new00_local);
    tolua_function(tolua_S,"load_texture",tolua_texture_p2d_Texture_load_texture00);
    tolua_function(tolua_S,"get_texture_name",tolua_texture_p2d_Texture_get_texture_name00);
    tolua_function(tolua_S,"get_native_width",tolua_texture_p2d_Texture_get_native_width00);
    tolua_function(tolua_S,"get_native_height",tolua_texture_p2d_Texture_get_native_height00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_texture (lua_State* tolua_S) {
 return tolua_texture_open(tolua_S);
};
#endif

