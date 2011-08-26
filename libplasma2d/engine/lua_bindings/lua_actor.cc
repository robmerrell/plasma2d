/*
** Lua binding: actor
** Generated automatically by tolua++-1.0.92 on Thu Aug 25 21:39:56 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_actor_open (lua_State* tolua_S);

#include "actor.h"
#include "display_object.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_p2d__DisplayObject (lua_State* tolua_S)
{
 p2d::DisplayObject* self = (p2d::DisplayObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_p2d__Actor (lua_State* tolua_S)
{
 p2d::Actor* self = (p2d::Actor*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"p2d::Texture");
 tolua_usertype(tolua_S,"p2d::Actor");
 tolua_usertype(tolua_S,"p2d::DisplayObject");
}

/* method: new of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_new00
static int tolua_actor_p2d_DisplayObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::DisplayObject* tolua_ret = (p2d::DisplayObject*)  Mtolua_new((p2d::DisplayObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::DisplayObject");
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

/* method: new_local of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_new00_local
static int tolua_actor_p2d_DisplayObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::DisplayObject* tolua_ret = (p2d::DisplayObject*)  Mtolua_new((p2d::DisplayObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::DisplayObject");
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

/* method: setXY of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_set_coords00
static int tolua_actor_p2d_DisplayObject_set_coords00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
  float _y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setXY'", NULL);
#endif
  {
   self->setXY(_x,_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_coords'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getX of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_get_x00
static int tolua_actor_p2d_DisplayObject_get_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_x'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getY of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_get_y00
static int tolua_actor_p2d_DisplayObject_get_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_y'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngle of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_set_angle00
static int tolua_actor_p2d_DisplayObject_set_angle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
  float _angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngle'", NULL);
#endif
  {
   self->setAngle(_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngle of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_get_angle00
static int tolua_actor_p2d_DisplayObject_get_angle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngle'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_set_scale00
static int tolua_actor_p2d_DisplayObject_set_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
  float _scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(_scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_get_scale00
static int tolua_actor_p2d_DisplayObject_get_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchor of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_set_anchor00
static int tolua_actor_p2d_DisplayObject_set_anchor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
  float _x = ((float)  tolua_tonumber(tolua_S,2,0));
  float _y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchor'", NULL);
#endif
  {
   self->setAnchor(_x,_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_anchor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorX of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_get_anchor_x00
static int tolua_actor_p2d_DisplayObject_get_anchor_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAnchorX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_anchor_x'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorY of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_DisplayObject_get_anchor_y00
static int tolua_actor_p2d_DisplayObject_get_anchor_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAnchorY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_anchor_y'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  p2d::Actor */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_Actor_new00
static int tolua_actor_p2d_Actor_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Actor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Actor* tolua_ret = (p2d::Actor*)  Mtolua_new((p2d::Actor)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Actor");
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

/* method: new_local of class  p2d::Actor */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_Actor_new00_local
static int tolua_actor_p2d_Actor_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Actor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Actor* tolua_ret = (p2d::Actor*)  Mtolua_new((p2d::Actor)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Actor");
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

/* method: setImage of class  p2d::Actor */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_Actor_set_texture00
static int tolua_actor_p2d_Actor_set_texture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Actor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"p2d::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Actor* self = (p2d::Actor*)  tolua_tousertype(tolua_S,1,0);
  p2d::Texture* _texture = ((p2d::Texture*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImage'", NULL);
#endif
  {
   self->setImage(_texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_texture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDimensions of class  p2d::Actor */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_Actor_set_dimensions00
static int tolua_actor_p2d_Actor_set_dimensions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Actor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Actor* self = (p2d::Actor*)  tolua_tousertype(tolua_S,1,0);
  float _width = ((float)  tolua_tonumber(tolua_S,2,0));
  float _height = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDimensions'", NULL);
#endif
  {
   self->setDimensions(_width,_height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_dimensions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  p2d::Actor */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_Actor_get_width00
static int tolua_actor_p2d_Actor_get_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Actor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Actor* self = (p2d::Actor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  p2d::Actor */
#ifndef TOLUA_DISABLE_tolua_actor_p2d_Actor_get_height00
static int tolua_actor_p2d_Actor_get_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Actor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Actor* self = (p2d::Actor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_actor_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"p2d",0);
  tolua_beginmodule(tolua_S,"p2d");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"DisplayObject","p2d::DisplayObject","",tolua_collect_p2d__DisplayObject);
   #else
   tolua_cclass(tolua_S,"DisplayObject","p2d::DisplayObject","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"DisplayObject");
    tolua_function(tolua_S,"new",tolua_actor_p2d_DisplayObject_new00);
    tolua_function(tolua_S,"new_local",tolua_actor_p2d_DisplayObject_new00_local);
    tolua_function(tolua_S,".call",tolua_actor_p2d_DisplayObject_new00_local);
    tolua_function(tolua_S,"set_coords",tolua_actor_p2d_DisplayObject_set_coords00);
    tolua_function(tolua_S,"get_x",tolua_actor_p2d_DisplayObject_get_x00);
    tolua_function(tolua_S,"get_y",tolua_actor_p2d_DisplayObject_get_y00);
    tolua_function(tolua_S,"set_angle",tolua_actor_p2d_DisplayObject_set_angle00);
    tolua_function(tolua_S,"get_angle",tolua_actor_p2d_DisplayObject_get_angle00);
    tolua_function(tolua_S,"set_scale",tolua_actor_p2d_DisplayObject_set_scale00);
    tolua_function(tolua_S,"get_scale",tolua_actor_p2d_DisplayObject_get_scale00);
    tolua_function(tolua_S,"set_anchor",tolua_actor_p2d_DisplayObject_set_anchor00);
    tolua_function(tolua_S,"get_anchor_x",tolua_actor_p2d_DisplayObject_get_anchor_x00);
    tolua_function(tolua_S,"get_anchor_y",tolua_actor_p2d_DisplayObject_get_anchor_y00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Actor","p2d::Actor","p2d::DisplayObject",tolua_collect_p2d__Actor);
   #else
   tolua_cclass(tolua_S,"Actor","p2d::Actor","p2d::DisplayObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Actor");
    tolua_function(tolua_S,"new",tolua_actor_p2d_Actor_new00);
    tolua_function(tolua_S,"new_local",tolua_actor_p2d_Actor_new00_local);
    tolua_function(tolua_S,".call",tolua_actor_p2d_Actor_new00_local);
    tolua_function(tolua_S,"set_texture",tolua_actor_p2d_Actor_set_texture00);
    tolua_function(tolua_S,"set_dimensions",tolua_actor_p2d_Actor_set_dimensions00);
    tolua_function(tolua_S,"get_width",tolua_actor_p2d_Actor_get_width00);
    tolua_function(tolua_S,"get_height",tolua_actor_p2d_Actor_get_height00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_actor (lua_State* tolua_S) {
 return tolua_actor_open(tolua_S);
};
#endif

