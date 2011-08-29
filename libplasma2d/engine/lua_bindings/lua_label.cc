/*
** Lua binding: label
** Generated automatically by tolua++-1.0.92 on Sun Aug 28 19:48:09 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_label_open (lua_State* tolua_S);

#include "label.h"
#include "display_object.h"
#include "display_object.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_p2d__DisplayObject (lua_State* tolua_S)
{
 p2d::DisplayObject* self = (p2d::DisplayObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_p2d__Label (lua_State* tolua_S)
{
 p2d::Label* self = (p2d::Label*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"p2d::Label");
 tolua_usertype(tolua_S,"p2d::DisplayObject");
 tolua_usertype(tolua_S,"p2d::BitmapFont");
}

/* method: new of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_new00
static int tolua_label_p2d_DisplayObject_new00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_new00_local
static int tolua_label_p2d_DisplayObject_new00_local(lua_State* tolua_S)
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

/* get function: x of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_get_p2d__DisplayObject_x
static int tolua_get_p2d__DisplayObject_x(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_set_p2d__DisplayObject_x
static int tolua_set_p2d__DisplayObject_x(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_get_p2d__DisplayObject_y
static int tolua_get_p2d__DisplayObject_y(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_set_p2d__DisplayObject_y
static int tolua_set_p2d__DisplayObject_y(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angle of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_get_p2d__DisplayObject_angle
static int tolua_get_p2d__DisplayObject_angle(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angle);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angle of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_set_p2d__DisplayObject_angle
static int tolua_set_p2d__DisplayObject_angle(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angle = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scale of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_get_p2d__DisplayObject_scale
static int tolua_get_p2d__DisplayObject_scale(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->scale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_set_p2d__DisplayObject_scale
static int tolua_set_p2d__DisplayObject_scale(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->scale = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: anchor_x of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_get_p2d__DisplayObject_anchor_x
static int tolua_get_p2d__DisplayObject_anchor_x(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchor_x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->anchor_x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: anchor_x of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_set_p2d__DisplayObject_anchor_x
static int tolua_set_p2d__DisplayObject_anchor_x(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchor_x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->anchor_x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: anchor_y of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_get_p2d__DisplayObject_anchor_y
static int tolua_get_p2d__DisplayObject_anchor_y(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchor_y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->anchor_y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: anchor_y of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_set_p2d__DisplayObject_anchor_y
static int tolua_set_p2d__DisplayObject_anchor_y(lua_State* tolua_S)
{
  p2d::DisplayObject* self = (p2d::DisplayObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchor_y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->anchor_y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setXY of class  p2d::DisplayObject */
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_set_coords00
static int tolua_label_p2d_DisplayObject_set_coords00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_get_x00
static int tolua_label_p2d_DisplayObject_get_x00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_get_y00
static int tolua_label_p2d_DisplayObject_get_y00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_set_angle00
static int tolua_label_p2d_DisplayObject_set_angle00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_get_angle00
static int tolua_label_p2d_DisplayObject_get_angle00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_set_scale00
static int tolua_label_p2d_DisplayObject_set_scale00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_get_scale00
static int tolua_label_p2d_DisplayObject_get_scale00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_set_anchor00
static int tolua_label_p2d_DisplayObject_set_anchor00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_get_anchor_x00
static int tolua_label_p2d_DisplayObject_get_anchor_x00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_label_p2d_DisplayObject_get_anchor_y00
static int tolua_label_p2d_DisplayObject_get_anchor_y00(lua_State* tolua_S)
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

/* method: new of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_new00
static int tolua_label_p2d_Label_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Label* tolua_ret = (p2d::Label*)  Mtolua_new((p2d::Label)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Label");
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

/* method: new_local of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_new00_local
static int tolua_label_p2d_Label_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Label* tolua_ret = (p2d::Label*)  Mtolua_new((p2d::Label)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Label");
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

/* method: new of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_new01
static int tolua_label_p2d_Label_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::string _text = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  p2d::BitmapFont* _font = ((p2d::BitmapFont*)  tolua_tousertype(tolua_S,3,0));
  float _x = ((float)  tolua_tonumber(tolua_S,4,0));
  float _y = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   p2d::Label* tolua_ret = (p2d::Label*)  Mtolua_new((p2d::Label)(_text,_font,_x,_y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Label");
  }
 }
 return 1;
tolua_lerror:
 return tolua_label_p2d_Label_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_new01_local
static int tolua_label_p2d_Label_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::string _text = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  p2d::BitmapFont* _font = ((p2d::BitmapFont*)  tolua_tousertype(tolua_S,3,0));
  float _x = ((float)  tolua_tonumber(tolua_S,4,0));
  float _y = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   p2d::Label* tolua_ret = (p2d::Label*)  Mtolua_new((p2d::Label)(_text,_font,_x,_y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Label");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_label_p2d_Label_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_get_p2d__Label_text
static int tolua_get_p2d__Label_text(lua_State* tolua_S)
{
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->text);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_set_p2d__Label_text
static int tolua_set_p2d__Label_text(lua_State* tolua_S)
{
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->text = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: width of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_get_p2d__Label_width
static int tolua_get_p2d__Label_width(lua_State* tolua_S)
{
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_set_p2d__Label_width
static int tolua_set_p2d__Label_width(lua_State* tolua_S)
{
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->width = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_get_p2d__Label_height
static int tolua_get_p2d__Label_height(lua_State* tolua_S)
{
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_set_p2d__Label_height
static int tolua_set_p2d__Label_height(lua_State* tolua_S)
{
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->height = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFont of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_set_font00
static int tolua_label_p2d_Label_set_font00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"p2d::BitmapFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
  p2d::BitmapFont* _font = ((p2d::BitmapFont*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFont'", NULL);
#endif
  {
   self->setFont(_font);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_set_text00
static int tolua_label_p2d_Label_set_text00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
  std::string _text = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(_text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_text'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_get_text00
static int tolua_label_p2d_Label_get_text00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_text'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDimensions of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_set_dimensions00
static int tolua_label_p2d_Label_set_dimensions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getWidth of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_get_width00
static int tolua_label_p2d_Label_get_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getHeight of class  p2d::Label */
#ifndef TOLUA_DISABLE_tolua_label_p2d_Label_get_height00
static int tolua_label_p2d_Label_get_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Label",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Label* self = (p2d::Label*)  tolua_tousertype(tolua_S,1,0);
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
TOLUA_API int tolua_label_open (lua_State* tolua_S)
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
    tolua_function(tolua_S,"new",tolua_label_p2d_DisplayObject_new00);
    tolua_function(tolua_S,"new_local",tolua_label_p2d_DisplayObject_new00_local);
    tolua_function(tolua_S,".call",tolua_label_p2d_DisplayObject_new00_local);
    tolua_variable(tolua_S,"x",tolua_get_p2d__DisplayObject_x,tolua_set_p2d__DisplayObject_x);
    tolua_variable(tolua_S,"y",tolua_get_p2d__DisplayObject_y,tolua_set_p2d__DisplayObject_y);
    tolua_variable(tolua_S,"angle",tolua_get_p2d__DisplayObject_angle,tolua_set_p2d__DisplayObject_angle);
    tolua_variable(tolua_S,"scale",tolua_get_p2d__DisplayObject_scale,tolua_set_p2d__DisplayObject_scale);
    tolua_variable(tolua_S,"anchor_x",tolua_get_p2d__DisplayObject_anchor_x,tolua_set_p2d__DisplayObject_anchor_x);
    tolua_variable(tolua_S,"anchor_y",tolua_get_p2d__DisplayObject_anchor_y,tolua_set_p2d__DisplayObject_anchor_y);
    tolua_function(tolua_S,"set_coords",tolua_label_p2d_DisplayObject_set_coords00);
    tolua_function(tolua_S,"get_x",tolua_label_p2d_DisplayObject_get_x00);
    tolua_function(tolua_S,"get_y",tolua_label_p2d_DisplayObject_get_y00);
    tolua_function(tolua_S,"set_angle",tolua_label_p2d_DisplayObject_set_angle00);
    tolua_function(tolua_S,"get_angle",tolua_label_p2d_DisplayObject_get_angle00);
    tolua_function(tolua_S,"set_scale",tolua_label_p2d_DisplayObject_set_scale00);
    tolua_function(tolua_S,"get_scale",tolua_label_p2d_DisplayObject_get_scale00);
    tolua_function(tolua_S,"set_anchor",tolua_label_p2d_DisplayObject_set_anchor00);
    tolua_function(tolua_S,"get_anchor_x",tolua_label_p2d_DisplayObject_get_anchor_x00);
    tolua_function(tolua_S,"get_anchor_y",tolua_label_p2d_DisplayObject_get_anchor_y00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"p2d",0);
  tolua_beginmodule(tolua_S,"p2d");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Label","p2d::Label","p2d::DisplayObject",tolua_collect_p2d__Label);
   #else
   tolua_cclass(tolua_S,"Label","p2d::Label","p2d::DisplayObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Label");
    tolua_function(tolua_S,"new",tolua_label_p2d_Label_new00);
    tolua_function(tolua_S,"new_local",tolua_label_p2d_Label_new00_local);
    tolua_function(tolua_S,".call",tolua_label_p2d_Label_new00_local);
    tolua_function(tolua_S,"new",tolua_label_p2d_Label_new01);
    tolua_function(tolua_S,"new_local",tolua_label_p2d_Label_new01_local);
    tolua_function(tolua_S,".call",tolua_label_p2d_Label_new01_local);
    tolua_variable(tolua_S,"text",tolua_get_p2d__Label_text,tolua_set_p2d__Label_text);
    tolua_variable(tolua_S,"width",tolua_get_p2d__Label_width,tolua_set_p2d__Label_width);
    tolua_variable(tolua_S,"height",tolua_get_p2d__Label_height,tolua_set_p2d__Label_height);
    tolua_function(tolua_S,"set_font",tolua_label_p2d_Label_set_font00);
    tolua_function(tolua_S,"set_text",tolua_label_p2d_Label_set_text00);
    tolua_function(tolua_S,"get_text",tolua_label_p2d_Label_get_text00);
    tolua_function(tolua_S,"set_dimensions",tolua_label_p2d_Label_set_dimensions00);
    tolua_function(tolua_S,"get_width",tolua_label_p2d_Label_get_width00);
    tolua_function(tolua_S,"get_height",tolua_label_p2d_Label_get_height00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_label (lua_State* tolua_S) {
 return tolua_label_open(tolua_S);
};
#endif

