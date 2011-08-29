/*
** Lua binding: texture_cache
** Generated automatically by tolua++-1.0.92 on Sun Aug 28 22:47:38 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_texture_cache_open (lua_State* tolua_S);

#include "texture_cache.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"p2d::Texture");
}

/* function: p2d::BindingHelpers::TextureCache_cacheTexture */
#ifndef TOLUA_DISABLE_tolua_texture_cache_p2d_BindingHelpers_TextureCache_cacheTexture00
static int tolua_texture_cache_p2d_BindingHelpers_TextureCache_cacheTexture00(lua_State* tolua_S)
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
  p2d::Texture* _texture = ((p2d::Texture*)  tolua_tousertype(tolua_S,1,0));
  {
   p2d::BindingHelpers::TextureCache_cacheTexture(_texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TextureCache_cacheTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: p2d::BindingHelpers::TextureCache_getCachedTexture */
#ifndef TOLUA_DISABLE_tolua_texture_cache_p2d_BindingHelpers_TextureCache_getCachedTexture00
static int tolua_texture_cache_p2d_BindingHelpers_TextureCache_getCachedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string _texture_name = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  {
   p2d::Texture* tolua_ret = (p2d::Texture*)  p2d::BindingHelpers::TextureCache_getCachedTexture(_texture_name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Texture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TextureCache_getCachedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: p2d::BindingHelpers::TextureCache_removeFromCache */
#ifndef TOLUA_DISABLE_tolua_texture_cache_p2d_BindingHelpers_TextureCache_removeFromCache00
static int tolua_texture_cache_p2d_BindingHelpers_TextureCache_removeFromCache00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string _texture_name = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  {
   p2d::BindingHelpers::TextureCache_removeFromCache(_texture_name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TextureCache_removeFromCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_texture_cache_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"p2d",0);
  tolua_beginmodule(tolua_S,"p2d");
   tolua_module(tolua_S,"BindingHelpers",0);
   tolua_beginmodule(tolua_S,"BindingHelpers");
    tolua_function(tolua_S,"TextureCache_cacheTexture",tolua_texture_cache_p2d_BindingHelpers_TextureCache_cacheTexture00);
    tolua_function(tolua_S,"TextureCache_getCachedTexture",tolua_texture_cache_p2d_BindingHelpers_TextureCache_getCachedTexture00);
    tolua_function(tolua_S,"TextureCache_removeFromCache",tolua_texture_cache_p2d_BindingHelpers_TextureCache_removeFromCache00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_texture_cache (lua_State* tolua_S) {
 return tolua_texture_cache_open(tolua_S);
};
#endif

