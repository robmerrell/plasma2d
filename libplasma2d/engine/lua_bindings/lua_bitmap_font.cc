/*
** Lua binding: bitmap_font
** Generated automatically by tolua++-1.0.92 on Sun Aug 28 00:08:33 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bitmap_font_open (lua_State* tolua_S);

#include "bitmap_font.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_p2d__BitmapFont (lua_State* tolua_S)
{
 p2d::BitmapFont* self = (p2d::BitmapFont*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"p2d::Texture");
 tolua_usertype(tolua_S,"p2d::BitmapFont");
}

/* method: new of class  p2d::BitmapFont */
#ifndef TOLUA_DISABLE_tolua_bitmap_font_p2d_BitmapFont_new00
static int tolua_bitmap_font_p2d_BitmapFont_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::BitmapFont* tolua_ret = (p2d::BitmapFont*)  Mtolua_new((p2d::BitmapFont)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::BitmapFont");
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

/* method: new_local of class  p2d::BitmapFont */
#ifndef TOLUA_DISABLE_tolua_bitmap_font_p2d_BitmapFont_new00_local
static int tolua_bitmap_font_p2d_BitmapFont_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::BitmapFont* tolua_ret = (p2d::BitmapFont*)  Mtolua_new((p2d::BitmapFont)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::BitmapFont");
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

/* method: loadFont of class  p2d::BitmapFont */
#ifndef TOLUA_DISABLE_tolua_bitmap_font_p2d_BitmapFont_load_font00
static int tolua_bitmap_font_p2d_BitmapFont_load_font00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::BitmapFont* self = (p2d::BitmapFont*)  tolua_tousertype(tolua_S,1,0);
  std::string _font_name = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  std::string _full_font_path = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadFont'", NULL);
#endif
  {
   self->loadFont(_font_name,_full_font_path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontTexture of class  p2d::BitmapFont */
#ifndef TOLUA_DISABLE_tolua_bitmap_font_p2d_BitmapFont_set_font_texture00
static int tolua_bitmap_font_p2d_BitmapFont_set_font_texture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"p2d::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::BitmapFont* self = (p2d::BitmapFont*)  tolua_tousertype(tolua_S,1,0);
  p2d::Texture* tolua_var_1 = ((p2d::Texture*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontTexture'", NULL);
#endif
  {
   self->setFontTexture(tolua_var_1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_font_texture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parse of class  p2d::BitmapFont */
#ifndef TOLUA_DISABLE_tolua_bitmap_font_p2d_BitmapFont_parse00
static int tolua_bitmap_font_p2d_BitmapFont_parse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::BitmapFont* self = (p2d::BitmapFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parse'", NULL);
#endif
  {
   self->parse();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontSize of class  p2d::BitmapFont */
#ifndef TOLUA_DISABLE_tolua_bitmap_font_p2d_BitmapFont_get_font_size00
static int tolua_bitmap_font_p2d_BitmapFont_get_font_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::BitmapFont* self = (p2d::BitmapFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontSize'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_font_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bitmap_font_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"p2d",0);
  tolua_beginmodule(tolua_S,"p2d");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"BitmapFont","p2d::BitmapFont","",tolua_collect_p2d__BitmapFont);
   #else
   tolua_cclass(tolua_S,"BitmapFont","p2d::BitmapFont","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"BitmapFont");
    tolua_function(tolua_S,"new",tolua_bitmap_font_p2d_BitmapFont_new00);
    tolua_function(tolua_S,"new_local",tolua_bitmap_font_p2d_BitmapFont_new00_local);
    tolua_function(tolua_S,".call",tolua_bitmap_font_p2d_BitmapFont_new00_local);
    tolua_function(tolua_S,"load_font",tolua_bitmap_font_p2d_BitmapFont_load_font00);
    tolua_function(tolua_S,"set_font_texture",tolua_bitmap_font_p2d_BitmapFont_set_font_texture00);
    tolua_function(tolua_S,"parse",tolua_bitmap_font_p2d_BitmapFont_parse00);
    tolua_function(tolua_S,"get_font_size",tolua_bitmap_font_p2d_BitmapFont_get_font_size00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bitmap_font (lua_State* tolua_S) {
 return tolua_bitmap_font_open(tolua_S);
};
#endif

