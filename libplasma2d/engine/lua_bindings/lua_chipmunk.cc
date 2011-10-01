/*
** Lua binding: chipmunk
** Generated automatically by tolua++-1.0.92 on Sat Oct  1 15:31:35 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_chipmunk_open (lua_State* tolua_S);

#include "chipmunk.h"
#include <stdint.h>
#include <math.h>

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_cpVect (lua_State* tolua_S)
{
 cpVect* self = (cpVect*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_cpBB (lua_State* tolua_S)
{
 cpBB* self = (cpBB*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_cpBool (lua_State* tolua_S)
{
 cpBool* self = (cpBool*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"cpSpacePointQueryFunc");
 tolua_usertype(tolua_S,"cpConstraint");
 tolua_usertype(tolua_S,"cpCollisionBeginFunc");
 tolua_usertype(tolua_S,"cpGroup");
 tolua_usertype(tolua_S,"cpBodyVelocityFunc");
 tolua_usertype(tolua_S,"cpBool");
 tolua_usertype(tolua_S,"cpSegmentShape");
 tolua_usertype(tolua_S,"cpVect");
 tolua_usertype(tolua_S,"cpBodyShapeIteratorFunc");
 tolua_usertype(tolua_S,"cpSpaceBBQueryFunc");
 tolua_usertype(tolua_S,"cpBodyArbiterIteratorFunc");
 tolua_usertype(tolua_S,"cpCollisionPostSolveFunc");
 tolua_usertype(tolua_S,"cpSpace");
 tolua_usertype(tolua_S,"cpTimestamp");
 tolua_usertype(tolua_S,"cpBody");
 tolua_usertype(tolua_S,"cpLayers");
 tolua_usertype(tolua_S,"cpCollisionPreSolveFunc");
 tolua_usertype(tolua_S,"cpBodyConstraintIteratorFunc");
 tolua_usertype(tolua_S,"cpBB");
 tolua_usertype(tolua_S,"cpShape");
 tolua_usertype(tolua_S,"cpBodyPositionFunc");
 tolua_usertype(tolua_S,"cpPostStepFunc");
 tolua_usertype(tolua_S,"cpSpaceBodyIteratorFunc");
 tolua_usertype(tolua_S,"cpSpaceShapeIteratorFunc");
 tolua_usertype(tolua_S,"cpSegmentQueryInfo");
 tolua_usertype(tolua_S,"cpSpaceConstraintIteratorFunc");
 tolua_usertype(tolua_S,"cpSpaceShapeQueryFunc");
 tolua_usertype(tolua_S,"cpSpaceSegmentQueryFunc");
 tolua_usertype(tolua_S,"cpDataPointer");
 tolua_usertype(tolua_S,"cpCircleShape");
 tolua_usertype(tolua_S,"cpCollisionSeparateFunc");
 tolua_usertype(tolua_S,"cpCollisionType");
}

/* get function: x of class  cpVect */
#ifndef TOLUA_DISABLE_tolua_get_cpVect_x
static int tolua_get_cpVect_x(lua_State* tolua_S)
{
  cpVect* self = (cpVect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  cpVect */
#ifndef TOLUA_DISABLE_tolua_set_cpVect_x
static int tolua_set_cpVect_x(lua_State* tolua_S)
{
  cpVect* self = (cpVect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  cpVect */
#ifndef TOLUA_DISABLE_tolua_get_cpVect_y
static int tolua_get_cpVect_y(lua_State* tolua_S)
{
  cpVect* self = (cpVect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  cpVect */
#ifndef TOLUA_DISABLE_tolua_set_cpVect_y
static int tolua_set_cpVect_y(lua_State* tolua_S)
{
  cpVect* self = (cpVect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cpvzero */
#ifndef TOLUA_DISABLE_tolua_get_chipmunk_cpvzero
static int tolua_get_chipmunk_cpvzero(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&cpvzero,"const cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpv */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpv00
static int tolua_chipmunk_chipmunk_cpv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float x = ((const float)  tolua_tonumber(tolua_S,1,0));
  const float y = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpv(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvlength */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvlength00
static int tolua_chipmunk_chipmunk_cpvlength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
    float tolua_ret = (  float)  cpvlength(v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvlength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvslerp */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvslerp00
static int tolua_chipmunk_chipmunk_cpvslerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const float t = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   cpVect tolua_ret = (cpVect)  cpvslerp(v1,v2,t);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvslerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvslerpconst */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvslerpconst00
static int tolua_chipmunk_chipmunk_cpvslerpconst00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const float a = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   cpVect tolua_ret = (cpVect)  cpvslerpconst(v1,v2,a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvslerpconst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvforangle */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvforangle00
static int tolua_chipmunk_chipmunk_cpvforangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float a = ((const float)  tolua_tonumber(tolua_S,1,0));
  {
   cpVect tolua_ret = (cpVect)  cpvforangle(a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvforangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvtoangle */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvtoangle00
static int tolua_chipmunk_chipmunk_cpvtoangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
    float tolua_ret = (  float)  cpvtoangle(v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvtoangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpveql */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpveql00
static int tolua_chipmunk_chipmunk_cpveql00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBool tolua_ret = (cpBool)  cpveql(v1,v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpveql'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvadd */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvadd00
static int tolua_chipmunk_chipmunk_cpvadd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpvadd(v1,v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvadd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvsub */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvsub00
static int tolua_chipmunk_chipmunk_cpvsub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpvsub(v1,v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvsub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvneg */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvneg00
static int tolua_chipmunk_chipmunk_cpvneg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
   cpVect tolua_ret = (cpVect)  cpvneg(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvneg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvmult */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvmult00
static int tolua_chipmunk_chipmunk_cpvmult00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const float s = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpvmult(v,s);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvmult'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvdot */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvdot00
static int tolua_chipmunk_chipmunk_cpvdot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  cpvdot(v1,v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvdot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvcross */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvcross00
static int tolua_chipmunk_chipmunk_cpvcross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  cpvcross(v1,v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvcross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvperp */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvperp00
static int tolua_chipmunk_chipmunk_cpvperp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
   cpVect tolua_ret = (cpVect)  cpvperp(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvperp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvrperp */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvrperp00
static int tolua_chipmunk_chipmunk_cpvrperp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
   cpVect tolua_ret = (cpVect)  cpvrperp(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvrperp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvproject */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvproject00
static int tolua_chipmunk_chipmunk_cpvproject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpvproject(v1,v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvproject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvrotate */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvrotate00
static int tolua_chipmunk_chipmunk_cpvrotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpvrotate(v1,v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvrotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvunrotate */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvunrotate00
static int tolua_chipmunk_chipmunk_cpvunrotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpvunrotate(v1,v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvunrotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvlengthsq */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvlengthsq00
static int tolua_chipmunk_chipmunk_cpvlengthsq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
   float tolua_ret = (float)  cpvlengthsq(v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvlengthsq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvlerp */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvlerp00
static int tolua_chipmunk_chipmunk_cpvlerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const float t = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   cpVect tolua_ret = (cpVect)  cpvlerp(v1,v2,t);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvlerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvnormalize */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvnormalize00
static int tolua_chipmunk_chipmunk_cpvnormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
   cpVect tolua_ret = (cpVect)  cpvnormalize(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvnormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvnormalize_safe */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvnormalize_safe00
static int tolua_chipmunk_chipmunk_cpvnormalize_safe00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  {
   cpVect tolua_ret = (cpVect)  cpvnormalize_safe(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvnormalize_safe'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvclamp */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvclamp00
static int tolua_chipmunk_chipmunk_cpvclamp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const float len = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpvclamp(v,len);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvclamp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvlerpconst */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvlerpconst00
static int tolua_chipmunk_chipmunk_cpvlerpconst00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpVect v1 = *((cpVect*)  tolua_tousertype(tolua_S,1,0));
  cpVect v2 = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
   float d = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   cpVect tolua_ret = (cpVect)  cpvlerpconst(v1,v2,d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvlerpconst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvdist */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvdist00
static int tolua_chipmunk_chipmunk_cpvdist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  cpvdist(v1,v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvdist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvdistsq */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvdistsq00
static int tolua_chipmunk_chipmunk_cpvdistsq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  cpvdistsq(v1,v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvdistsq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpvnear */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpvnear00
static int tolua_chipmunk_chipmunk_cpvnear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect v1 = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v2 = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const float dist = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   cpBool tolua_ret = (cpBool)  cpvnear(v1,v2,dist);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpvnear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpMomentForCircle */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpMomentForCircle00
static int tolua_chipmunk_chipmunk_cpMomentForCircle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float m = ((  float)  tolua_tonumber(tolua_S,1,0));
   float r1 = ((  float)  tolua_tonumber(tolua_S,2,0));
   float r2 = ((  float)  tolua_tonumber(tolua_S,3,0));
  cpVect offset = *((cpVect*)  tolua_tousertype(tolua_S,4,0));
  {
    float tolua_ret = (  float)  cpMomentForCircle(m,r1,r2,offset);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpMomentForCircle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpAreaForCircle */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpAreaForCircle00
static int tolua_chipmunk_chipmunk_cpAreaForCircle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float r1 = ((  float)  tolua_tonumber(tolua_S,1,0));
   float r2 = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
    float tolua_ret = (  float)  cpAreaForCircle(r1,r2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpAreaForCircle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpMomentForSegment */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpMomentForSegment00
static int tolua_chipmunk_chipmunk_cpMomentForSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float m = ((  float)  tolua_tonumber(tolua_S,1,0));
  cpVect a = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpVect b = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  {
    float tolua_ret = (  float)  cpMomentForSegment(m,a,b);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpMomentForSegment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpAreaForSegment */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpAreaForSegment00
static int tolua_chipmunk_chipmunk_cpAreaForSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpVect a = *((cpVect*)  tolua_tousertype(tolua_S,1,0));
  cpVect b = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
   float r = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
    float tolua_ret = (  float)  cpAreaForSegment(a,b,r);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpAreaForSegment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpMomentForPoly */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpMomentForPoly00
static int tolua_chipmunk_chipmunk_cpMomentForPoly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const cpVect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float m = ((  float)  tolua_tonumber(tolua_S,1,0));
  int numVerts = ((int)  tolua_tonumber(tolua_S,2,0));
  const cpVect* verts = ((const cpVect*)  tolua_tousertype(tolua_S,3,0));
  cpVect offset = *((cpVect*)  tolua_tousertype(tolua_S,4,0));
  {
    float tolua_ret = (  float)  cpMomentForPoly(m,numVerts,verts,offset);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpMomentForPoly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpAreaForPoly */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpAreaForPoly00
static int tolua_chipmunk_chipmunk_cpAreaForPoly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const int numVerts = ((const int)  tolua_tonumber(tolua_S,1,0));
  const cpVect* verts = ((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
    float tolua_ret = (  float)  cpAreaForPoly(numVerts,verts);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpAreaForPoly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpCentroidForPoly */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpCentroidForPoly00
static int tolua_chipmunk_chipmunk_cpCentroidForPoly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const int numVerts = ((const int)  tolua_tonumber(tolua_S,1,0));
  const cpVect* verts = ((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpCentroidForPoly(numVerts,verts);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpCentroidForPoly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpRecenterPoly */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpRecenterPoly00
static int tolua_chipmunk_chipmunk_cpRecenterPoly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const int numVerts = ((const int)  tolua_tonumber(tolua_S,1,0));
  cpVect* verts = ((cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpRecenterPoly(numVerts,verts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpRecenterPoly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpMomentForBox */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpMomentForBox00
static int tolua_chipmunk_chipmunk_cpMomentForBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float m = ((  float)  tolua_tonumber(tolua_S,1,0));
   float width = ((  float)  tolua_tonumber(tolua_S,2,0));
   float height = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
    float tolua_ret = (  float)  cpMomentForBox(m,width,height);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpMomentForBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpMomentForBox2 */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpMomentForBox200
static int tolua_chipmunk_chipmunk_cpMomentForBox200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float m = ((  float)  tolua_tonumber(tolua_S,1,0));
  cpBB box = *((cpBB*)  tolua_tousertype(tolua_S,2,0));
  {
    float tolua_ret = (  float)  cpMomentForBox2(m,box);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpMomentForBox2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: iterations of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_iterations
static int tolua_get_cpSpace_iterations(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'iterations'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->iterations);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: iterations of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_iterations
static int tolua_set_cpSpace_iterations(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'iterations'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->iterations = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: gravity of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_gravity
static int tolua_get_cpSpace_gravity(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravity'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->gravity,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: gravity of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_gravity
static int tolua_set_cpSpace_gravity(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravity'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->gravity = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: damping of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_damping
static int tolua_get_cpSpace_damping(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'damping'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->damping);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: damping of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_damping
static int tolua_set_cpSpace_damping(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'damping'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->damping = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: idleSpeedThreshold of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_idleSpeedThreshold
static int tolua_get_cpSpace_idleSpeedThreshold(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'idleSpeedThreshold'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->idleSpeedThreshold);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: idleSpeedThreshold of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_idleSpeedThreshold
static int tolua_set_cpSpace_idleSpeedThreshold(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'idleSpeedThreshold'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->idleSpeedThreshold = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sleepTimeThreshold of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_sleepTimeThreshold
static int tolua_get_cpSpace_sleepTimeThreshold(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sleepTimeThreshold'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->sleepTimeThreshold);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sleepTimeThreshold of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_sleepTimeThreshold
static int tolua_set_cpSpace_sleepTimeThreshold(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sleepTimeThreshold'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sleepTimeThreshold = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: collisionSlop of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_collisionSlop
static int tolua_get_cpSpace_collisionSlop(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collisionSlop'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->collisionSlop);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: collisionSlop of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_collisionSlop
static int tolua_set_cpSpace_collisionSlop(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collisionSlop'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->collisionSlop = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: collisionBias of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_collisionBias
static int tolua_get_cpSpace_collisionBias(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collisionBias'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->collisionBias);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: collisionBias of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_collisionBias
static int tolua_set_cpSpace_collisionBias(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collisionBias'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->collisionBias = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: collisionPersistence of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_collisionPersistence
static int tolua_get_cpSpace_collisionPersistence(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collisionPersistence'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->collisionPersistence,"cpTimestamp");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: collisionPersistence of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_collisionPersistence
static int tolua_set_cpSpace_collisionPersistence(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collisionPersistence'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpTimestamp",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->collisionPersistence = *((cpTimestamp*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: enableContactGraph of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_enableContactGraph
static int tolua_get_cpSpace_enableContactGraph(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'enableContactGraph'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->enableContactGraph,"cpBool");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: enableContactGraph of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_enableContactGraph
static int tolua_set_cpSpace_enableContactGraph(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'enableContactGraph'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBool",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->enableContactGraph = *((cpBool*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_data
static int tolua_get_cpSpace_data(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->data,"cpDataPointer");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_data
static int tolua_set_cpSpace_data(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpDataPointer",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data = *((cpDataPointer*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: staticBody of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_get_cpSpace_staticBody_ptr
static int tolua_get_cpSpace_staticBody_ptr(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'staticBody'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->staticBody,"cpBody");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: staticBody of class  cpSpace */
#ifndef TOLUA_DISABLE_tolua_set_cpSpace_staticBody_ptr
static int tolua_set_cpSpace_staticBody_ptr(lua_State* tolua_S)
{
  cpSpace* self = (cpSpace*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'staticBody'",NULL);
  if (!tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->staticBody = ((cpBody*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceSetDefaultCollisionHandler */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceSetDefaultCollisionHandler00
static int tolua_chipmunk_chipmunk_cpSpaceSetDefaultCollisionHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpCollisionBeginFunc",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpCollisionPreSolveFunc",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpCollisionPostSolveFunc",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"cpCollisionSeparateFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpCollisionBeginFunc begin = *((cpCollisionBeginFunc*)  tolua_tousertype(tolua_S,2,0));
  cpCollisionPreSolveFunc preSolve = *((cpCollisionPreSolveFunc*)  tolua_tousertype(tolua_S,3,0));
  cpCollisionPostSolveFunc postSolve = *((cpCollisionPostSolveFunc*)  tolua_tousertype(tolua_S,4,0));
  cpCollisionSeparateFunc separate = *((cpCollisionSeparateFunc*)  tolua_tousertype(tolua_S,5,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,6,0));
  {
   cpSpaceSetDefaultCollisionHandler(space,begin,preSolve,postSolve,separate,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceSetDefaultCollisionHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceAddCollisionHandler */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceAddCollisionHandler00
static int tolua_chipmunk_chipmunk_cpSpaceAddCollisionHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpCollisionType",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpCollisionType",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpCollisionBeginFunc",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"cpCollisionPreSolveFunc",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"cpCollisionPostSolveFunc",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"cpCollisionSeparateFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpCollisionType a = *((cpCollisionType*)  tolua_tousertype(tolua_S,2,0));
  cpCollisionType b = *((cpCollisionType*)  tolua_tousertype(tolua_S,3,0));
  cpCollisionBeginFunc begin = *((cpCollisionBeginFunc*)  tolua_tousertype(tolua_S,4,0));
  cpCollisionPreSolveFunc preSolve = *((cpCollisionPreSolveFunc*)  tolua_tousertype(tolua_S,5,0));
  cpCollisionPostSolveFunc postSolve = *((cpCollisionPostSolveFunc*)  tolua_tousertype(tolua_S,6,0));
  cpCollisionSeparateFunc separate = *((cpCollisionSeparateFunc*)  tolua_tousertype(tolua_S,7,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,8,0));
  {
   cpSpaceAddCollisionHandler(space,a,b,begin,preSolve,postSolve,separate,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceAddCollisionHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceRemoveCollisionHandler */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceRemoveCollisionHandler00
static int tolua_chipmunk_chipmunk_cpSpaceRemoveCollisionHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpCollisionType",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpCollisionType",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpCollisionType a = *((cpCollisionType*)  tolua_tousertype(tolua_S,2,0));
  cpCollisionType b = *((cpCollisionType*)  tolua_tousertype(tolua_S,3,0));
  {
   cpSpaceRemoveCollisionHandler(space,a,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceRemoveCollisionHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceAddShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceAddShape00
static int tolua_chipmunk_chipmunk_cpSpaceAddShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpShape* tolua_ret = (cpShape*)  cpSpaceAddShape(space,shape);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceAddShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceAddStaticShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceAddStaticShape00
static int tolua_chipmunk_chipmunk_cpSpaceAddStaticShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpShape* tolua_ret = (cpShape*)  cpSpaceAddStaticShape(space,shape);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceAddStaticShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceAddBody */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceAddBody00
static int tolua_chipmunk_chipmunk_cpSpaceAddBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBody* tolua_ret = (cpBody*)  cpSpaceAddBody(space,body);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceAddBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceAddConstraint */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceAddConstraint00
static int tolua_chipmunk_chipmunk_cpSpaceAddConstraint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpConstraint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpConstraint* constraint = ((cpConstraint*)  tolua_tousertype(tolua_S,2,0));
  {
   cpConstraint* tolua_ret = (cpConstraint*)  cpSpaceAddConstraint(space,constraint);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpConstraint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceAddConstraint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceRemoveShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceRemoveShape00
static int tolua_chipmunk_chipmunk_cpSpaceRemoveShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpSpaceRemoveShape(space,shape);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceRemoveShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceRemoveStaticShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceRemoveStaticShape00
static int tolua_chipmunk_chipmunk_cpSpaceRemoveStaticShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpSpaceRemoveStaticShape(space,shape);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceRemoveStaticShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceRemoveBody */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceRemoveBody00
static int tolua_chipmunk_chipmunk_cpSpaceRemoveBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,2,0));
  {
   cpSpaceRemoveBody(space,body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceRemoveBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceRemoveConstraint */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceRemoveConstraint00
static int tolua_chipmunk_chipmunk_cpSpaceRemoveConstraint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpConstraint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpConstraint* constraint = ((cpConstraint*)  tolua_tousertype(tolua_S,2,0));
  {
   cpSpaceRemoveConstraint(space,constraint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceRemoveConstraint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceContainsShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceContainsShape00
static int tolua_chipmunk_chipmunk_cpSpaceContainsShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBool tolua_ret = (cpBool)  cpSpaceContainsShape(space,shape);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceContainsShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceContainsBody */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceContainsBody00
static int tolua_chipmunk_chipmunk_cpSpaceContainsBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBool tolua_ret = (cpBool)  cpSpaceContainsBody(space,body);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceContainsBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceContainsConstraint */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceContainsConstraint00
static int tolua_chipmunk_chipmunk_cpSpaceContainsConstraint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpConstraint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpConstraint* constraint = ((cpConstraint*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBool tolua_ret = (cpBool)  cpSpaceContainsConstraint(space,constraint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceContainsConstraint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceAddPostStepCallback */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceAddPostStepCallback00
static int tolua_chipmunk_chipmunk_cpSpaceAddPostStepCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpPostStepFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpPostStepFunc func = *((cpPostStepFunc*)  tolua_tousertype(tolua_S,2,0));
  void* obj = ((void*)  tolua_touserdata(tolua_S,3,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,4,0));
  {
   cpSpaceAddPostStepCallback(space,func,obj,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceAddPostStepCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpacePointQuery */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpacePointQuery00
static int tolua_chipmunk_chipmunk_cpSpacePointQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpLayers",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpGroup",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"cpSpacePointQueryFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpVect point = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpLayers layers = *((cpLayers*)  tolua_tousertype(tolua_S,3,0));
  cpGroup group = *((cpGroup*)  tolua_tousertype(tolua_S,4,0));
  cpSpacePointQueryFunc func = *((cpSpacePointQueryFunc*)  tolua_tousertype(tolua_S,5,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,6,0));
  {
   cpSpacePointQuery(space,point,layers,group,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpacePointQuery'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpacePointQueryFirst */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpacePointQueryFirst00
static int tolua_chipmunk_chipmunk_cpSpacePointQueryFirst00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpLayers",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpGroup",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpVect point = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpLayers layers = *((cpLayers*)  tolua_tousertype(tolua_S,3,0));
  cpGroup group = *((cpGroup*)  tolua_tousertype(tolua_S,4,0));
  {
   cpShape* tolua_ret = (cpShape*)  cpSpacePointQueryFirst(space,point,layers,group);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpacePointQueryFirst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceSegmentQuery */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceSegmentQuery00
static int tolua_chipmunk_chipmunk_cpSpaceSegmentQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpLayers",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"cpGroup",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"cpSpaceSegmentQueryFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpVect start = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpVect end = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  cpLayers layers = *((cpLayers*)  tolua_tousertype(tolua_S,4,0));
  cpGroup group = *((cpGroup*)  tolua_tousertype(tolua_S,5,0));
  cpSpaceSegmentQueryFunc func = *((cpSpaceSegmentQueryFunc*)  tolua_tousertype(tolua_S,6,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,7,0));
  {
   cpSpaceSegmentQuery(space,start,end,layers,group,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceSegmentQuery'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceSegmentQueryFirst */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceSegmentQueryFirst00
static int tolua_chipmunk_chipmunk_cpSpaceSegmentQueryFirst00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpLayers",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"cpGroup",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,6,"cpSegmentQueryInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpVect start = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpVect end = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  cpLayers layers = *((cpLayers*)  tolua_tousertype(tolua_S,4,0));
  cpGroup group = *((cpGroup*)  tolua_tousertype(tolua_S,5,0));
  cpSegmentQueryInfo* out = ((cpSegmentQueryInfo*)  tolua_tousertype(tolua_S,6,0));
  {
   cpShape* tolua_ret = (cpShape*)  cpSpaceSegmentQueryFirst(space,start,end,layers,group,out);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceSegmentQueryFirst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceBBQuery */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceBBQuery00
static int tolua_chipmunk_chipmunk_cpSpaceBBQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBB",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpLayers",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpGroup",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"cpSpaceBBQueryFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpBB bb = *((cpBB*)  tolua_tousertype(tolua_S,2,0));
  cpLayers layers = *((cpLayers*)  tolua_tousertype(tolua_S,3,0));
  cpGroup group = *((cpGroup*)  tolua_tousertype(tolua_S,4,0));
  cpSpaceBBQueryFunc func = *((cpSpaceBBQueryFunc*)  tolua_tousertype(tolua_S,5,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,6,0));
  {
   cpSpaceBBQuery(space,bb,layers,group,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceBBQuery'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceShapeQuery */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceShapeQuery00
static int tolua_chipmunk_chipmunk_cpSpaceShapeQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpSpaceShapeQueryFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  cpSpaceShapeQueryFunc func = *((cpSpaceShapeQueryFunc*)  tolua_tousertype(tolua_S,3,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,4,0));
  {
   cpBool tolua_ret = (cpBool)  cpSpaceShapeQuery(space,shape,func,data);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceShapeQuery'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceActivateShapesTouchingShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceActivateShapesTouchingShape00
static int tolua_chipmunk_chipmunk_cpSpaceActivateShapesTouchingShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpSpaceActivateShapesTouchingShape(space,shape);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceActivateShapesTouchingShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceEachBody */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceEachBody00
static int tolua_chipmunk_chipmunk_cpSpaceEachBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpSpaceBodyIteratorFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpSpaceBodyIteratorFunc func = *((cpSpaceBodyIteratorFunc*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   cpSpaceEachBody(space,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceEachBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceEachShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceEachShape00
static int tolua_chipmunk_chipmunk_cpSpaceEachShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpSpaceShapeIteratorFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpSpaceShapeIteratorFunc func = *((cpSpaceShapeIteratorFunc*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   cpSpaceEachShape(space,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceEachShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceEachConstraint */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceEachConstraint00
static int tolua_chipmunk_chipmunk_cpSpaceEachConstraint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpSpaceConstraintIteratorFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpSpaceConstraintIteratorFunc func = *((cpSpaceConstraintIteratorFunc*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   cpSpaceEachConstraint(space,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceEachConstraint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceReindexStatic */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceReindexStatic00
static int tolua_chipmunk_chipmunk_cpSpaceReindexStatic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  {
   cpSpaceReindexStatic(space);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceReindexStatic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceReindexShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceReindexShape00
static int tolua_chipmunk_chipmunk_cpSpaceReindexShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpSpaceReindexShape(space,shape);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceReindexShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSpaceReindexShapesForBody */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSpaceReindexShapesForBody00
static int tolua_chipmunk_chipmunk_cpSpaceReindexShapesForBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSpace",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSpace* space = ((cpSpace*)  tolua_tousertype(tolua_S,1,0));
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,2,0));
  {
   cpSpaceReindexShapesForBody(space,body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSpaceReindexShapesForBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: velocity_func of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_velocity_func
static int tolua_get_cpBody_velocity_func(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'velocity_func'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->velocity_func,"cpBodyVelocityFunc");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: velocity_func of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_velocity_func
static int tolua_set_cpBody_velocity_func(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'velocity_func'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBodyVelocityFunc",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->velocity_func = *((cpBodyVelocityFunc*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: position_func of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_position_func
static int tolua_get_cpBody_position_func(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position_func'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->position_func,"cpBodyPositionFunc");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: position_func of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_position_func
static int tolua_set_cpBody_position_func(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position_func'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBodyPositionFunc",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->position_func = *((cpBodyPositionFunc*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_m
static int tolua_get_cpBody_m(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_m
static int tolua_set_cpBody_m(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_inv of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_m_inv
static int tolua_get_cpBody_m_inv(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_inv'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_inv);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_inv of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_m_inv
static int tolua_set_cpBody_m_inv(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_inv'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_inv = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: i of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_i
static int tolua_get_cpBody_i(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'i'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->i);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: i of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_i
static int tolua_set_cpBody_i(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'i'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->i = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: i_inv of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_i_inv
static int tolua_get_cpBody_i_inv(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'i_inv'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->i_inv);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: i_inv of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_i_inv
static int tolua_set_cpBody_i_inv(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'i_inv'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->i_inv = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: p of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_p
static int tolua_get_cpBody_p(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'p'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->p,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: p of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_p
static int tolua_set_cpBody_p(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'p'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->p = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: v of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_v
static int tolua_get_cpBody_v(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'v'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->v,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: v of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_v
static int tolua_set_cpBody_v(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'v'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->v = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: f of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_f
static int tolua_get_cpBody_f(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'f'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->f,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: f of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_f
static int tolua_set_cpBody_f(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'f'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->f = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_a
static int tolua_get_cpBody_a(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_a
static int tolua_set_cpBody_a(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_w
static int tolua_get_cpBody_w(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_w
static int tolua_set_cpBody_w(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: t of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_t
static int tolua_get_cpBody_t(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 't'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->t);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: t of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_t
static int tolua_set_cpBody_t(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 't'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->t = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rot of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_rot
static int tolua_get_cpBody_rot(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rot'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->rot,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rot of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_rot
static int tolua_set_cpBody_rot(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rot'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->rot = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_data
static int tolua_get_cpBody_data(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->data,"cpDataPointer");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_data
static int tolua_set_cpBody_data(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpDataPointer",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data = *((cpDataPointer*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: v_limit of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_v_limit
static int tolua_get_cpBody_v_limit(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'v_limit'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->v_limit);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: v_limit of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_v_limit
static int tolua_set_cpBody_v_limit(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'v_limit'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->v_limit = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w_limit of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_get_cpBody_w_limit
static int tolua_get_cpBody_w_limit(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w_limit'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w_limit);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w_limit of class  cpBody */
#ifndef TOLUA_DISABLE_tolua_set_cpBody_w_limit
static int tolua_set_cpBody_w_limit(lua_State* tolua_S)
{
  cpBody* self = (cpBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w_limit'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w_limit = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyAlloc */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyAlloc00
static int tolua_chipmunk_chipmunk_cpBodyAlloc00(lua_State* tolua_S)
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
   cpBody* tolua_ret = (cpBody*)  cpBodyAlloc();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyAlloc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyInit */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyInit00
static int tolua_chipmunk_chipmunk_cpBodyInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
   float m = ((  float)  tolua_tonumber(tolua_S,2,0));
   float i = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   cpBody* tolua_ret = (cpBody*)  cpBodyInit(body,m,i);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyInit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyNew */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyNew00
static int tolua_chipmunk_chipmunk_cpBodyNew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float m = ((  float)  tolua_tonumber(tolua_S,1,0));
   float i = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   cpBody* tolua_ret = (cpBody*)  cpBodyNew(m,i);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyNew'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyInitStatic */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyInitStatic00
static int tolua_chipmunk_chipmunk_cpBodyInitStatic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBody* tolua_ret = (cpBody*)  cpBodyInitStatic(body);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyInitStatic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyNewStatic */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyNewStatic00
static int tolua_chipmunk_chipmunk_cpBodyNewStatic00(lua_State* tolua_S)
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
   cpBody* tolua_ret = (cpBody*)  cpBodyNewStatic();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyNewStatic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyDestroy */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyDestroy00
static int tolua_chipmunk_chipmunk_cpBodyDestroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBodyDestroy(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyDestroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyFree */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyFree00
static int tolua_chipmunk_chipmunk_cpBodyFree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBodyFree(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyFree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyActivate */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyActivate00
static int tolua_chipmunk_chipmunk_cpBodyActivate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBodyActivate(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyActivate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyActivateStatic */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyActivateStatic00
static int tolua_chipmunk_chipmunk_cpBodyActivateStatic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  cpShape* filter = ((cpShape*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBodyActivateStatic(body,filter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyActivateStatic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodySleep */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodySleep00
static int tolua_chipmunk_chipmunk_cpBodySleep00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBodySleep(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodySleep'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodySleepWithGroup */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodySleepWithGroup00
static int tolua_chipmunk_chipmunk_cpBodySleepWithGroup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  cpBody* group = ((cpBody*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBodySleepWithGroup(body,group);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodySleepWithGroup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyIsSleeping */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyIsSleeping00
static int tolua_chipmunk_chipmunk_cpBodyIsSleeping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpBody* body = ((const cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBool tolua_ret = (cpBool)  cpBodyIsSleeping(body);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyIsSleeping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyIsStatic */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyIsStatic00
static int tolua_chipmunk_chipmunk_cpBodyIsStatic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpBody* body = ((const cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBool tolua_ret = (cpBool)  cpBodyIsStatic(body);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyIsStatic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyIsRogue */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyIsRogue00
static int tolua_chipmunk_chipmunk_cpBodyIsRogue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpBody* body = ((const cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBool tolua_ret = (cpBool)  cpBodyIsRogue(body);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyIsRogue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyLocal2World */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyLocal2World00
static int tolua_chipmunk_chipmunk_cpBodyLocal2World00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpBody* body = ((const cpBody*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpBodyLocal2World(body,v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyLocal2World'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyWorld2Local */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyWorld2Local00
static int tolua_chipmunk_chipmunk_cpBodyWorld2Local00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpBody* body = ((const cpBody*)  tolua_tousertype(tolua_S,1,0));
  const cpVect v = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpVect tolua_ret = (cpVect)  cpBodyWorld2Local(body,v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyWorld2Local'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyResetForces */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyResetForces00
static int tolua_chipmunk_chipmunk_cpBodyResetForces00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBodyResetForces(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyResetForces'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyApplyForce */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyApplyForce00
static int tolua_chipmunk_chipmunk_cpBodyApplyForce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  const cpVect f = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const cpVect r = *((const cpVect*)  tolua_tousertype(tolua_S,3,0));
  {
   cpBodyApplyForce(body,f,r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyApplyForce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyApplyImpulse */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyApplyImpulse00
static int tolua_chipmunk_chipmunk_cpBodyApplyImpulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  const cpVect j = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const cpVect r = *((const cpVect*)  tolua_tousertype(tolua_S,3,0));
  {
   cpBodyApplyImpulse(body,j,r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyApplyImpulse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyKineticEnergy */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyKineticEnergy00
static int tolua_chipmunk_chipmunk_cpBodyKineticEnergy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const cpBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpBody* body = ((const cpBody*)  tolua_tousertype(tolua_S,1,0));
  {
   float tolua_ret = (float)  cpBodyKineticEnergy(body);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyKineticEnergy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyEachShape */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyEachShape00
static int tolua_chipmunk_chipmunk_cpBodyEachShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBodyShapeIteratorFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  cpBodyShapeIteratorFunc func = *((cpBodyShapeIteratorFunc*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   cpBodyEachShape(body,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyEachShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyEachConstraint */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyEachConstraint00
static int tolua_chipmunk_chipmunk_cpBodyEachConstraint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBodyConstraintIteratorFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  cpBodyConstraintIteratorFunc func = *((cpBodyConstraintIteratorFunc*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   cpBodyEachConstraint(body,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyEachConstraint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBodyEachArbiter */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBodyEachArbiter00
static int tolua_chipmunk_chipmunk_cpBodyEachArbiter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBodyArbiterIteratorFunc",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  cpBodyArbiterIteratorFunc func = *((cpBodyArbiterIteratorFunc*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   cpBodyEachArbiter(body,func,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBodyEachArbiter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: body of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_body_ptr
static int tolua_get_cpShape_body_ptr(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'body'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->body,"cpBody");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: body of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_body_ptr
static int tolua_set_cpShape_body_ptr(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'body'",NULL);
  if (!tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->body = ((cpBody*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bb of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_bb
static int tolua_get_cpShape_bb(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bb'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->bb,"cpBB");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bb of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_bb
static int tolua_set_cpShape_bb(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bb'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBB",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bb = *((cpBB*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sensor of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_sensor
static int tolua_get_cpShape_sensor(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sensor'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->sensor,"cpBool");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sensor of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_sensor
static int tolua_set_cpShape_sensor(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sensor'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpBool",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sensor = *((cpBool*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: e of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_e
static int tolua_get_cpShape_e(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'e'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->e);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: e of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_e
static int tolua_set_cpShape_e(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'e'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->e = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: u of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_u
static int tolua_get_cpShape_u(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'u'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->u);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: u of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_u
static int tolua_set_cpShape_u(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'u'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->u = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: surface_v of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_surface_v
static int tolua_get_cpShape_surface_v(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'surface_v'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->surface_v,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: surface_v of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_surface_v
static int tolua_set_cpShape_surface_v(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'surface_v'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->surface_v = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_data
static int tolua_get_cpShape_data(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->data,"cpDataPointer");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_data
static int tolua_set_cpShape_data(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpDataPointer",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data = *((cpDataPointer*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: collision_type of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_collision_type
static int tolua_get_cpShape_collision_type(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collision_type'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->collision_type,"cpCollisionType");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: collision_type of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_collision_type
static int tolua_set_cpShape_collision_type(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'collision_type'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpCollisionType",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->collision_type = *((cpCollisionType*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: group of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_group
static int tolua_get_cpShape_group(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'group'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->group,"cpGroup");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: group of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_group
static int tolua_set_cpShape_group(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'group'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpGroup",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->group = *((cpGroup*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: layers of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_get_cpShape_layers
static int tolua_get_cpShape_layers(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'layers'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->layers,"cpLayers");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: layers of class  cpShape */
#ifndef TOLUA_DISABLE_tolua_set_cpShape_layers
static int tolua_set_cpShape_layers(lua_State* tolua_S)
{
  cpShape* self = (cpShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'layers'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpLayers",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->layers = *((cpLayers*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpShapeDestroy */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpShapeDestroy00
static int tolua_chipmunk_chipmunk_cpShapeDestroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,1,0));
  {
   cpShapeDestroy(shape);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpShapeDestroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpShapeFree */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpShapeFree00
static int tolua_chipmunk_chipmunk_cpShapeFree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,1,0));
  {
   cpShapeFree(shape);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpShapeFree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpShapeCacheBB */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpShapeCacheBB00
static int tolua_chipmunk_chipmunk_cpShapeCacheBB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,1,0));
  {
   cpBB tolua_ret = (cpBB)  cpShapeCacheBB(shape);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBB)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBB));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpShapeCacheBB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpShapeUpdate */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpShapeUpdate00
static int tolua_chipmunk_chipmunk_cpShapeUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpShape",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,1,0));
  cpVect pos = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpVect rot = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  {
   cpBB tolua_ret = (cpBB)  cpShapeUpdate(shape,pos,rot);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBB)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBB));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpShapeUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpShapePointQuery */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpShapePointQuery00
static int tolua_chipmunk_chipmunk_cpShapePointQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpShape",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,1,0));
  cpVect p = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  {
   cpBool tolua_ret = (cpBool)  cpShapePointQuery(shape,p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpShapePointQuery'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpResetShapeIdCounter */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpResetShapeIdCounter00
static int tolua_chipmunk_chipmunk_cpResetShapeIdCounter00(lua_State* tolua_S)
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
   cpResetShapeIdCounter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpResetShapeIdCounter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpShapeSegmentQuery */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpShapeSegmentQuery00
static int tolua_chipmunk_chipmunk_cpShapeSegmentQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpShape",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"cpSegmentQueryInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,1,0));
  cpVect a = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpVect b = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  cpSegmentQueryInfo* info = ((cpSegmentQueryInfo*)  tolua_tousertype(tolua_S,4,0));
  {
   cpBool tolua_ret = (cpBool)  cpShapeSegmentQuery(shape,a,b,info);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpBool)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpBool));
     tolua_pushusertype(tolua_S,tolua_obj,"cpBool");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpShapeSegmentQuery'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSegmentQueryHitPoint */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSegmentQueryHitPoint00
static int tolua_chipmunk_chipmunk_cpSegmentQueryHitPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const cpSegmentQueryInfo",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect start = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect end = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const cpSegmentQueryInfo info = *((const cpSegmentQueryInfo*)  tolua_tousertype(tolua_S,3,0));
  {
   cpVect tolua_ret = (cpVect)  cpSegmentQueryHitPoint(start,end,info);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cpVect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cpVect));
     tolua_pushusertype(tolua_S,tolua_obj,"cpVect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSegmentQueryHitPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSegmentQueryHitDist */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSegmentQueryHitDist00
static int tolua_chipmunk_chipmunk_cpSegmentQueryHitDist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const cpSegmentQueryInfo",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const cpVect start = *((const cpVect*)  tolua_tousertype(tolua_S,1,0));
  const cpVect end = *((const cpVect*)  tolua_tousertype(tolua_S,2,0));
  const cpSegmentQueryInfo info = *((const cpSegmentQueryInfo*)  tolua_tousertype(tolua_S,3,0));
  {
   float tolua_ret = (float)  cpSegmentQueryHitDist(start,end,info);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSegmentQueryHitDist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: shape of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_get_cpCircleShape_shape
static int tolua_get_cpCircleShape_shape(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shape'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->shape,"cpShape");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: shape of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_set_cpCircleShape_shape
static int tolua_set_cpCircleShape_shape(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shape'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->shape = *((cpShape*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: c of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_get_cpCircleShape_c
static int tolua_get_cpCircleShape_c(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'c'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->c,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: c of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_set_cpCircleShape_c
static int tolua_set_cpCircleShape_c(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'c'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->c = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tc of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_get_cpCircleShape_tc
static int tolua_get_cpCircleShape_tc(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tc'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tc,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tc of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_set_cpCircleShape_tc
static int tolua_set_cpCircleShape_tc(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tc'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tc = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_get_cpCircleShape_r
static int tolua_get_cpCircleShape_r(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  cpCircleShape */
#ifndef TOLUA_DISABLE_tolua_set_cpCircleShape_r
static int tolua_set_cpCircleShape_r(lua_State* tolua_S)
{
  cpCircleShape* self = (cpCircleShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpCircleShapeAlloc */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpCircleShapeAlloc00
static int tolua_chipmunk_chipmunk_cpCircleShapeAlloc00(lua_State* tolua_S)
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
   cpCircleShape* tolua_ret = (cpCircleShape*)  cpCircleShapeAlloc();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpCircleShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpCircleShapeAlloc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpCircleShapeInit */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpCircleShapeInit00
static int tolua_chipmunk_chipmunk_cpCircleShapeInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpCircleShape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpCircleShape* circle = ((cpCircleShape*)  tolua_tousertype(tolua_S,1,0));
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,2,0));
   float radius = ((  float)  tolua_tonumber(tolua_S,3,0));
  cpVect offset = *((cpVect*)  tolua_tousertype(tolua_S,4,0));
  {
   cpCircleShape* tolua_ret = (cpCircleShape*)  cpCircleShapeInit(circle,body,radius,offset);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpCircleShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpCircleShapeInit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpCircleShapeNew */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpCircleShapeNew00
static int tolua_chipmunk_chipmunk_cpCircleShapeNew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
   float radius = ((  float)  tolua_tonumber(tolua_S,2,0));
  cpVect offset = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  {
   cpShape* tolua_ret = (cpShape*)  cpCircleShapeNew(body,radius,offset);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpCircleShapeNew'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: shape of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_shape
static int tolua_get_cpSegmentShape_shape(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shape'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->shape,"cpShape");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: shape of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_shape
static int tolua_set_cpSegmentShape_shape(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shape'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpShape",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->shape = *((cpShape*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_a
static int tolua_get_cpSegmentShape_a(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->a,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_a
static int tolua_set_cpSegmentShape_a(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_b
static int tolua_get_cpSegmentShape_b(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->b,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_b
static int tolua_set_cpSegmentShape_b(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: n of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_n
static int tolua_get_cpSegmentShape_n(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'n'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->n,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: n of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_n
static int tolua_set_cpSegmentShape_n(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'n'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->n = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ta of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_ta
static int tolua_get_cpSegmentShape_ta(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ta'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->ta,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ta of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_ta
static int tolua_set_cpSegmentShape_ta(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ta'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ta = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tb of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_tb
static int tolua_get_cpSegmentShape_tb(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tb'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tb,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tb of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_tb
static int tolua_set_cpSegmentShape_tb(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tb'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tb = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tn of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_tn
static int tolua_get_cpSegmentShape_tn(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tn'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tn,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tn of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_tn
static int tolua_set_cpSegmentShape_tn(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tn'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tn = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_r
static int tolua_get_cpSegmentShape_r(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_r
static int tolua_set_cpSegmentShape_r(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a_tangent of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_a_tangent
static int tolua_get_cpSegmentShape_a_tangent(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a_tangent'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->a_tangent,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a_tangent of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_a_tangent
static int tolua_set_cpSegmentShape_a_tangent(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a_tangent'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a_tangent = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b_tangent of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_get_cpSegmentShape_b_tangent
static int tolua_get_cpSegmentShape_b_tangent(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b_tangent'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->b_tangent,"cpVect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b_tangent of class  cpSegmentShape */
#ifndef TOLUA_DISABLE_tolua_set_cpSegmentShape_b_tangent
static int tolua_set_cpSegmentShape_b_tangent(lua_State* tolua_S)
{
  cpSegmentShape* self = (cpSegmentShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b_tangent'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b_tangent = *((cpVect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSegmentShapeAlloc */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSegmentShapeAlloc00
static int tolua_chipmunk_chipmunk_cpSegmentShapeAlloc00(lua_State* tolua_S)
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
   cpSegmentShape* tolua_ret = (cpSegmentShape*)  cpSegmentShapeAlloc();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpSegmentShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSegmentShapeAlloc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSegmentShapeInit */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSegmentShapeInit00
static int tolua_chipmunk_chipmunk_cpSegmentShapeInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpSegmentShape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpSegmentShape* seg = ((cpSegmentShape*)  tolua_tousertype(tolua_S,1,0));
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,2,0));
  cpVect a = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  cpVect b = *((cpVect*)  tolua_tousertype(tolua_S,4,0));
   float radius = ((  float)  tolua_tonumber(tolua_S,5,0));
  {
   cpSegmentShape* tolua_ret = (cpSegmentShape*)  cpSegmentShapeInit(seg,body,a,b,radius);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpSegmentShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSegmentShapeInit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSegmentShapeNew */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSegmentShapeNew00
static int tolua_chipmunk_chipmunk_cpSegmentShapeNew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
  cpVect a = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpVect b = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
   float radius = ((  float)  tolua_tonumber(tolua_S,4,0));
  {
   cpShape* tolua_ret = (cpShape*)  cpSegmentShapeNew(body,a,b,radius);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSegmentShapeNew'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpSegmentShapeSetNeighbors */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpSegmentShapeSetNeighbors00
static int tolua_chipmunk_chipmunk_cpSegmentShapeSetNeighbors00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpShape",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cpVect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"cpVect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpShape* shape = ((cpShape*)  tolua_tousertype(tolua_S,1,0));
  cpVect prev = *((cpVect*)  tolua_tousertype(tolua_S,2,0));
  cpVect next = *((cpVect*)  tolua_tousertype(tolua_S,3,0));
  {
   cpSegmentShapeSetNeighbors(shape,prev,next);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpSegmentShapeSetNeighbors'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cpBoxShapeNew */
#ifndef TOLUA_DISABLE_tolua_chipmunk_chipmunk_cpBoxShapeNew00
static int tolua_chipmunk_chipmunk_cpBoxShapeNew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cpBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cpBody* body = ((cpBody*)  tolua_tousertype(tolua_S,1,0));
   float width = ((  float)  tolua_tonumber(tolua_S,2,0));
   float height = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   cpShape* tolua_ret = (cpShape*)  cpBoxShapeNew(body,width,height);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cpShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cpBoxShapeNew'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_chipmunk_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"chipmunk",1);
  tolua_beginmodule(tolua_S,"chipmunk");
   tolua_constant(tolua_S,"INFINITY",INFINITY);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"cpVect","cpVect","",tolua_collect_cpVect);
   #else
   tolua_cclass(tolua_S,"cpVect","cpVect","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"cpVect");
    tolua_variable(tolua_S,"x",tolua_get_cpVect_x,tolua_set_cpVect_x);
    tolua_variable(tolua_S,"y",tolua_get_cpVect_y,tolua_set_cpVect_y);
   tolua_endmodule(tolua_S);
   tolua_variable(tolua_S,"cpvzero",tolua_get_chipmunk_cpvzero,NULL);
   tolua_function(tolua_S,"cpv",tolua_chipmunk_chipmunk_cpv00);
   tolua_function(tolua_S,"cpvlength",tolua_chipmunk_chipmunk_cpvlength00);
   tolua_function(tolua_S,"cpvslerp",tolua_chipmunk_chipmunk_cpvslerp00);
   tolua_function(tolua_S,"cpvslerpconst",tolua_chipmunk_chipmunk_cpvslerpconst00);
   tolua_function(tolua_S,"cpvforangle",tolua_chipmunk_chipmunk_cpvforangle00);
   tolua_function(tolua_S,"cpvtoangle",tolua_chipmunk_chipmunk_cpvtoangle00);
   tolua_function(tolua_S,"cpveql",tolua_chipmunk_chipmunk_cpveql00);
   tolua_function(tolua_S,"cpvadd",tolua_chipmunk_chipmunk_cpvadd00);
   tolua_function(tolua_S,"cpvsub",tolua_chipmunk_chipmunk_cpvsub00);
   tolua_function(tolua_S,"cpvneg",tolua_chipmunk_chipmunk_cpvneg00);
   tolua_function(tolua_S,"cpvmult",tolua_chipmunk_chipmunk_cpvmult00);
   tolua_function(tolua_S,"cpvdot",tolua_chipmunk_chipmunk_cpvdot00);
   tolua_function(tolua_S,"cpvcross",tolua_chipmunk_chipmunk_cpvcross00);
   tolua_function(tolua_S,"cpvperp",tolua_chipmunk_chipmunk_cpvperp00);
   tolua_function(tolua_S,"cpvrperp",tolua_chipmunk_chipmunk_cpvrperp00);
   tolua_function(tolua_S,"cpvproject",tolua_chipmunk_chipmunk_cpvproject00);
   tolua_function(tolua_S,"cpvrotate",tolua_chipmunk_chipmunk_cpvrotate00);
   tolua_function(tolua_S,"cpvunrotate",tolua_chipmunk_chipmunk_cpvunrotate00);
   tolua_function(tolua_S,"cpvlengthsq",tolua_chipmunk_chipmunk_cpvlengthsq00);
   tolua_function(tolua_S,"cpvlerp",tolua_chipmunk_chipmunk_cpvlerp00);
   tolua_function(tolua_S,"cpvnormalize",tolua_chipmunk_chipmunk_cpvnormalize00);
   tolua_function(tolua_S,"cpvnormalize_safe",tolua_chipmunk_chipmunk_cpvnormalize_safe00);
   tolua_function(tolua_S,"cpvclamp",tolua_chipmunk_chipmunk_cpvclamp00);
   tolua_function(tolua_S,"cpvlerpconst",tolua_chipmunk_chipmunk_cpvlerpconst00);
   tolua_function(tolua_S,"cpvdist",tolua_chipmunk_chipmunk_cpvdist00);
   tolua_function(tolua_S,"cpvdistsq",tolua_chipmunk_chipmunk_cpvdistsq00);
   tolua_function(tolua_S,"cpvnear",tolua_chipmunk_chipmunk_cpvnear00);
   tolua_function(tolua_S,"cpMomentForCircle",tolua_chipmunk_chipmunk_cpMomentForCircle00);
   tolua_function(tolua_S,"cpAreaForCircle",tolua_chipmunk_chipmunk_cpAreaForCircle00);
   tolua_function(tolua_S,"cpMomentForSegment",tolua_chipmunk_chipmunk_cpMomentForSegment00);
   tolua_function(tolua_S,"cpAreaForSegment",tolua_chipmunk_chipmunk_cpAreaForSegment00);
   tolua_function(tolua_S,"cpMomentForPoly",tolua_chipmunk_chipmunk_cpMomentForPoly00);
   tolua_function(tolua_S,"cpAreaForPoly",tolua_chipmunk_chipmunk_cpAreaForPoly00);
   tolua_function(tolua_S,"cpCentroidForPoly",tolua_chipmunk_chipmunk_cpCentroidForPoly00);
   tolua_function(tolua_S,"cpRecenterPoly",tolua_chipmunk_chipmunk_cpRecenterPoly00);
   tolua_function(tolua_S,"cpMomentForBox",tolua_chipmunk_chipmunk_cpMomentForBox00);
   tolua_function(tolua_S,"cpMomentForBox2",tolua_chipmunk_chipmunk_cpMomentForBox200);
   tolua_cclass(tolua_S,"cpSpace","cpSpace","",NULL);
   tolua_beginmodule(tolua_S,"cpSpace");
    tolua_variable(tolua_S,"iterations",tolua_get_cpSpace_iterations,tolua_set_cpSpace_iterations);
    tolua_variable(tolua_S,"gravity",tolua_get_cpSpace_gravity,tolua_set_cpSpace_gravity);
    tolua_variable(tolua_S,"damping",tolua_get_cpSpace_damping,tolua_set_cpSpace_damping);
    tolua_variable(tolua_S,"idleSpeedThreshold",tolua_get_cpSpace_idleSpeedThreshold,tolua_set_cpSpace_idleSpeedThreshold);
    tolua_variable(tolua_S,"sleepTimeThreshold",tolua_get_cpSpace_sleepTimeThreshold,tolua_set_cpSpace_sleepTimeThreshold);
    tolua_variable(tolua_S,"collisionSlop",tolua_get_cpSpace_collisionSlop,tolua_set_cpSpace_collisionSlop);
    tolua_variable(tolua_S,"collisionBias",tolua_get_cpSpace_collisionBias,tolua_set_cpSpace_collisionBias);
    tolua_variable(tolua_S,"collisionPersistence",tolua_get_cpSpace_collisionPersistence,tolua_set_cpSpace_collisionPersistence);
    tolua_variable(tolua_S,"enableContactGraph",tolua_get_cpSpace_enableContactGraph,tolua_set_cpSpace_enableContactGraph);
    tolua_variable(tolua_S,"data",tolua_get_cpSpace_data,tolua_set_cpSpace_data);
    tolua_variable(tolua_S,"staticBody",tolua_get_cpSpace_staticBody_ptr,tolua_set_cpSpace_staticBody_ptr);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"cpSpaceSetDefaultCollisionHandler",tolua_chipmunk_chipmunk_cpSpaceSetDefaultCollisionHandler00);
   tolua_function(tolua_S,"cpSpaceAddCollisionHandler",tolua_chipmunk_chipmunk_cpSpaceAddCollisionHandler00);
   tolua_function(tolua_S,"cpSpaceRemoveCollisionHandler",tolua_chipmunk_chipmunk_cpSpaceRemoveCollisionHandler00);
   tolua_function(tolua_S,"cpSpaceAddShape",tolua_chipmunk_chipmunk_cpSpaceAddShape00);
   tolua_function(tolua_S,"cpSpaceAddStaticShape",tolua_chipmunk_chipmunk_cpSpaceAddStaticShape00);
   tolua_function(tolua_S,"cpSpaceAddBody",tolua_chipmunk_chipmunk_cpSpaceAddBody00);
   tolua_function(tolua_S,"cpSpaceAddConstraint",tolua_chipmunk_chipmunk_cpSpaceAddConstraint00);
   tolua_function(tolua_S,"cpSpaceRemoveShape",tolua_chipmunk_chipmunk_cpSpaceRemoveShape00);
   tolua_function(tolua_S,"cpSpaceRemoveStaticShape",tolua_chipmunk_chipmunk_cpSpaceRemoveStaticShape00);
   tolua_function(tolua_S,"cpSpaceRemoveBody",tolua_chipmunk_chipmunk_cpSpaceRemoveBody00);
   tolua_function(tolua_S,"cpSpaceRemoveConstraint",tolua_chipmunk_chipmunk_cpSpaceRemoveConstraint00);
   tolua_function(tolua_S,"cpSpaceContainsShape",tolua_chipmunk_chipmunk_cpSpaceContainsShape00);
   tolua_function(tolua_S,"cpSpaceContainsBody",tolua_chipmunk_chipmunk_cpSpaceContainsBody00);
   tolua_function(tolua_S,"cpSpaceContainsConstraint",tolua_chipmunk_chipmunk_cpSpaceContainsConstraint00);
   tolua_function(tolua_S,"cpSpaceAddPostStepCallback",tolua_chipmunk_chipmunk_cpSpaceAddPostStepCallback00);
   tolua_function(tolua_S,"cpSpacePointQuery",tolua_chipmunk_chipmunk_cpSpacePointQuery00);
   tolua_function(tolua_S,"cpSpacePointQueryFirst",tolua_chipmunk_chipmunk_cpSpacePointQueryFirst00);
   tolua_function(tolua_S,"cpSpaceSegmentQuery",tolua_chipmunk_chipmunk_cpSpaceSegmentQuery00);
   tolua_function(tolua_S,"cpSpaceSegmentQueryFirst",tolua_chipmunk_chipmunk_cpSpaceSegmentQueryFirst00);
   tolua_function(tolua_S,"cpSpaceBBQuery",tolua_chipmunk_chipmunk_cpSpaceBBQuery00);
   tolua_function(tolua_S,"cpSpaceShapeQuery",tolua_chipmunk_chipmunk_cpSpaceShapeQuery00);
   tolua_function(tolua_S,"cpSpaceActivateShapesTouchingShape",tolua_chipmunk_chipmunk_cpSpaceActivateShapesTouchingShape00);
   tolua_function(tolua_S,"cpSpaceEachBody",tolua_chipmunk_chipmunk_cpSpaceEachBody00);
   tolua_function(tolua_S,"cpSpaceEachShape",tolua_chipmunk_chipmunk_cpSpaceEachShape00);
   tolua_function(tolua_S,"cpSpaceEachConstraint",tolua_chipmunk_chipmunk_cpSpaceEachConstraint00);
   tolua_function(tolua_S,"cpSpaceReindexStatic",tolua_chipmunk_chipmunk_cpSpaceReindexStatic00);
   tolua_function(tolua_S,"cpSpaceReindexShape",tolua_chipmunk_chipmunk_cpSpaceReindexShape00);
   tolua_function(tolua_S,"cpSpaceReindexShapesForBody",tolua_chipmunk_chipmunk_cpSpaceReindexShapesForBody00);
   tolua_cclass(tolua_S,"cpBody","cpBody","",NULL);
   tolua_beginmodule(tolua_S,"cpBody");
    tolua_variable(tolua_S,"velocity_func",tolua_get_cpBody_velocity_func,tolua_set_cpBody_velocity_func);
    tolua_variable(tolua_S,"position_func",tolua_get_cpBody_position_func,tolua_set_cpBody_position_func);
    tolua_variable(tolua_S,"m",tolua_get_cpBody_m,tolua_set_cpBody_m);
    tolua_variable(tolua_S,"m_inv",tolua_get_cpBody_m_inv,tolua_set_cpBody_m_inv);
    tolua_variable(tolua_S,"i",tolua_get_cpBody_i,tolua_set_cpBody_i);
    tolua_variable(tolua_S,"i_inv",tolua_get_cpBody_i_inv,tolua_set_cpBody_i_inv);
    tolua_variable(tolua_S,"p",tolua_get_cpBody_p,tolua_set_cpBody_p);
    tolua_variable(tolua_S,"v",tolua_get_cpBody_v,tolua_set_cpBody_v);
    tolua_variable(tolua_S,"f",tolua_get_cpBody_f,tolua_set_cpBody_f);
    tolua_variable(tolua_S,"a",tolua_get_cpBody_a,tolua_set_cpBody_a);
    tolua_variable(tolua_S,"w",tolua_get_cpBody_w,tolua_set_cpBody_w);
    tolua_variable(tolua_S,"t",tolua_get_cpBody_t,tolua_set_cpBody_t);
    tolua_variable(tolua_S,"rot",tolua_get_cpBody_rot,tolua_set_cpBody_rot);
    tolua_variable(tolua_S,"data",tolua_get_cpBody_data,tolua_set_cpBody_data);
    tolua_variable(tolua_S,"v_limit",tolua_get_cpBody_v_limit,tolua_set_cpBody_v_limit);
    tolua_variable(tolua_S,"w_limit",tolua_get_cpBody_w_limit,tolua_set_cpBody_w_limit);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"cpBodyAlloc",tolua_chipmunk_chipmunk_cpBodyAlloc00);
   tolua_function(tolua_S,"cpBodyInit",tolua_chipmunk_chipmunk_cpBodyInit00);
   tolua_function(tolua_S,"cpBodyNew",tolua_chipmunk_chipmunk_cpBodyNew00);
   tolua_function(tolua_S,"cpBodyInitStatic",tolua_chipmunk_chipmunk_cpBodyInitStatic00);
   tolua_function(tolua_S,"cpBodyNewStatic",tolua_chipmunk_chipmunk_cpBodyNewStatic00);
   tolua_function(tolua_S,"cpBodyDestroy",tolua_chipmunk_chipmunk_cpBodyDestroy00);
   tolua_function(tolua_S,"cpBodyFree",tolua_chipmunk_chipmunk_cpBodyFree00);
   tolua_function(tolua_S,"cpBodyActivate",tolua_chipmunk_chipmunk_cpBodyActivate00);
   tolua_function(tolua_S,"cpBodyActivateStatic",tolua_chipmunk_chipmunk_cpBodyActivateStatic00);
   tolua_function(tolua_S,"cpBodySleep",tolua_chipmunk_chipmunk_cpBodySleep00);
   tolua_function(tolua_S,"cpBodySleepWithGroup",tolua_chipmunk_chipmunk_cpBodySleepWithGroup00);
   tolua_function(tolua_S,"cpBodyIsSleeping",tolua_chipmunk_chipmunk_cpBodyIsSleeping00);
   tolua_function(tolua_S,"cpBodyIsStatic",tolua_chipmunk_chipmunk_cpBodyIsStatic00);
   tolua_function(tolua_S,"cpBodyIsRogue",tolua_chipmunk_chipmunk_cpBodyIsRogue00);
   tolua_function(tolua_S,"cpBodyLocal2World",tolua_chipmunk_chipmunk_cpBodyLocal2World00);
   tolua_function(tolua_S,"cpBodyWorld2Local",tolua_chipmunk_chipmunk_cpBodyWorld2Local00);
   tolua_function(tolua_S,"cpBodyResetForces",tolua_chipmunk_chipmunk_cpBodyResetForces00);
   tolua_function(tolua_S,"cpBodyApplyForce",tolua_chipmunk_chipmunk_cpBodyApplyForce00);
   tolua_function(tolua_S,"cpBodyApplyImpulse",tolua_chipmunk_chipmunk_cpBodyApplyImpulse00);
   tolua_function(tolua_S,"cpBodyKineticEnergy",tolua_chipmunk_chipmunk_cpBodyKineticEnergy00);
   tolua_function(tolua_S,"cpBodyEachShape",tolua_chipmunk_chipmunk_cpBodyEachShape00);
   tolua_function(tolua_S,"cpBodyEachConstraint",tolua_chipmunk_chipmunk_cpBodyEachConstraint00);
   tolua_function(tolua_S,"cpBodyEachArbiter",tolua_chipmunk_chipmunk_cpBodyEachArbiter00);
   tolua_cclass(tolua_S,"cpShape","cpShape","",NULL);
   tolua_beginmodule(tolua_S,"cpShape");
    tolua_variable(tolua_S,"body",tolua_get_cpShape_body_ptr,tolua_set_cpShape_body_ptr);
    tolua_variable(tolua_S,"bb",tolua_get_cpShape_bb,tolua_set_cpShape_bb);
    tolua_variable(tolua_S,"sensor",tolua_get_cpShape_sensor,tolua_set_cpShape_sensor);
    tolua_variable(tolua_S,"e",tolua_get_cpShape_e,tolua_set_cpShape_e);
    tolua_variable(tolua_S,"u",tolua_get_cpShape_u,tolua_set_cpShape_u);
    tolua_variable(tolua_S,"surface_v",tolua_get_cpShape_surface_v,tolua_set_cpShape_surface_v);
    tolua_variable(tolua_S,"data",tolua_get_cpShape_data,tolua_set_cpShape_data);
    tolua_variable(tolua_S,"collision_type",tolua_get_cpShape_collision_type,tolua_set_cpShape_collision_type);
    tolua_variable(tolua_S,"group",tolua_get_cpShape_group,tolua_set_cpShape_group);
    tolua_variable(tolua_S,"layers",tolua_get_cpShape_layers,tolua_set_cpShape_layers);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"cpShapeDestroy",tolua_chipmunk_chipmunk_cpShapeDestroy00);
   tolua_function(tolua_S,"cpShapeFree",tolua_chipmunk_chipmunk_cpShapeFree00);
   tolua_function(tolua_S,"cpShapeCacheBB",tolua_chipmunk_chipmunk_cpShapeCacheBB00);
   tolua_function(tolua_S,"cpShapeUpdate",tolua_chipmunk_chipmunk_cpShapeUpdate00);
   tolua_function(tolua_S,"cpShapePointQuery",tolua_chipmunk_chipmunk_cpShapePointQuery00);
   tolua_function(tolua_S,"cpResetShapeIdCounter",tolua_chipmunk_chipmunk_cpResetShapeIdCounter00);
   tolua_function(tolua_S,"cpShapeSegmentQuery",tolua_chipmunk_chipmunk_cpShapeSegmentQuery00);
   tolua_function(tolua_S,"cpSegmentQueryHitPoint",tolua_chipmunk_chipmunk_cpSegmentQueryHitPoint00);
   tolua_function(tolua_S,"cpSegmentQueryHitDist",tolua_chipmunk_chipmunk_cpSegmentQueryHitDist00);
   tolua_cclass(tolua_S,"cpCircleShape","cpCircleShape","",NULL);
   tolua_beginmodule(tolua_S,"cpCircleShape");
    tolua_variable(tolua_S,"shape",tolua_get_cpCircleShape_shape,tolua_set_cpCircleShape_shape);
    tolua_variable(tolua_S,"c",tolua_get_cpCircleShape_c,tolua_set_cpCircleShape_c);
    tolua_variable(tolua_S,"tc",tolua_get_cpCircleShape_tc,tolua_set_cpCircleShape_tc);
    tolua_variable(tolua_S,"r",tolua_get_cpCircleShape_r,tolua_set_cpCircleShape_r);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"cpCircleShapeAlloc",tolua_chipmunk_chipmunk_cpCircleShapeAlloc00);
   tolua_function(tolua_S,"cpCircleShapeInit",tolua_chipmunk_chipmunk_cpCircleShapeInit00);
   tolua_function(tolua_S,"cpCircleShapeNew",tolua_chipmunk_chipmunk_cpCircleShapeNew00);
   tolua_cclass(tolua_S,"cpSegmentShape","cpSegmentShape","",NULL);
   tolua_beginmodule(tolua_S,"cpSegmentShape");
    tolua_variable(tolua_S,"shape",tolua_get_cpSegmentShape_shape,tolua_set_cpSegmentShape_shape);
    tolua_variable(tolua_S,"a",tolua_get_cpSegmentShape_a,tolua_set_cpSegmentShape_a);
    tolua_variable(tolua_S,"b",tolua_get_cpSegmentShape_b,tolua_set_cpSegmentShape_b);
    tolua_variable(tolua_S,"n",tolua_get_cpSegmentShape_n,tolua_set_cpSegmentShape_n);
    tolua_variable(tolua_S,"ta",tolua_get_cpSegmentShape_ta,tolua_set_cpSegmentShape_ta);
    tolua_variable(tolua_S,"tb",tolua_get_cpSegmentShape_tb,tolua_set_cpSegmentShape_tb);
    tolua_variable(tolua_S,"tn",tolua_get_cpSegmentShape_tn,tolua_set_cpSegmentShape_tn);
    tolua_variable(tolua_S,"r",tolua_get_cpSegmentShape_r,tolua_set_cpSegmentShape_r);
    tolua_variable(tolua_S,"a_tangent",tolua_get_cpSegmentShape_a_tangent,tolua_set_cpSegmentShape_a_tangent);
    tolua_variable(tolua_S,"b_tangent",tolua_get_cpSegmentShape_b_tangent,tolua_set_cpSegmentShape_b_tangent);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"cpSegmentShapeAlloc",tolua_chipmunk_chipmunk_cpSegmentShapeAlloc00);
   tolua_function(tolua_S,"cpSegmentShapeInit",tolua_chipmunk_chipmunk_cpSegmentShapeInit00);
   tolua_function(tolua_S,"cpSegmentShapeNew",tolua_chipmunk_chipmunk_cpSegmentShapeNew00);
   tolua_function(tolua_S,"cpSegmentShapeSetNeighbors",tolua_chipmunk_chipmunk_cpSegmentShapeSetNeighbors00);
   tolua_function(tolua_S,"cpBoxShapeNew",tolua_chipmunk_chipmunk_cpBoxShapeNew00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_chipmunk (lua_State* tolua_S) {
 return tolua_chipmunk_open(tolua_S);
};
#endif

