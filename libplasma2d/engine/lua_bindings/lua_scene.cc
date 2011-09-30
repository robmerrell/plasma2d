/*
** Lua binding: scene
** Generated automatically by tolua++-1.0.92 on Wed Sep 28 21:58:30 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_scene_open (lua_State* tolua_S);

#include "scene.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_p2d__Scene (lua_State* tolua_S)
{
 p2d::Scene* self = (p2d::Scene*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"cpSpace");
 tolua_usertype(tolua_S,"p2d::DisplayObject");
 tolua_usertype(tolua_S,"p2d::Scene");
}

/* get function: space of class  p2d::Scene */
#ifndef TOLUA_DISABLE_tolua_get_p2d__Scene_space_ptr
static int tolua_get_p2d__Scene_space_ptr(lua_State* tolua_S)
{
  p2d::Scene* self = (p2d::Scene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'space'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->space,"cpSpace");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: space of class  p2d::Scene */
#ifndef TOLUA_DISABLE_tolua_set_p2d__Scene_space_ptr
static int tolua_set_p2d__Scene_space_ptr(lua_State* tolua_S)
{
  p2d::Scene* self = (p2d::Scene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'space'",NULL);
  if (!tolua_isusertype(tolua_S,2,"cpSpace",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->space = ((cpSpace*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  p2d::Scene */
#ifndef TOLUA_DISABLE_tolua_scene_p2d_Scene_new00
static int tolua_scene_p2d_Scene_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Scene* tolua_ret = (p2d::Scene*)  Mtolua_new((p2d::Scene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Scene");
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

/* method: new_local of class  p2d::Scene */
#ifndef TOLUA_DISABLE_tolua_scene_p2d_Scene_new00_local
static int tolua_scene_p2d_Scene_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"p2d::Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   p2d::Scene* tolua_ret = (p2d::Scene*)  Mtolua_new((p2d::Scene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"p2d::Scene");
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

/* method: addToScene of class  p2d::Scene */
#ifndef TOLUA_DISABLE_tolua_scene_p2d_Scene_add_to_scene00
static int tolua_scene_p2d_Scene_add_to_scene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"p2d::Scene",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"p2d::DisplayObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  p2d::Scene* self = (p2d::Scene*)  tolua_tousertype(tolua_S,1,0);
  p2d::DisplayObject* _object = ((p2d::DisplayObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addToScene'", NULL);
#endif
  {
   self->addToScene(_object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_to_scene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initPhysics of class  p2d::Scene */
#ifndef TOLUA_DISABLE_tolua_scene_p2d_Scene_init_physics00
static int tolua_scene_p2d_Scene_init_physics00(lua_State* tolua_S)
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
  p2d::Scene* self = (p2d::Scene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initPhysics'", NULL);
#endif
  {
   self->initPhysics();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init_physics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_scene_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"p2d",0);
  tolua_beginmodule(tolua_S,"p2d");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Scene","p2d::Scene","",tolua_collect_p2d__Scene);
   #else
   tolua_cclass(tolua_S,"Scene","p2d::Scene","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Scene");
    tolua_variable(tolua_S,"space",tolua_get_p2d__Scene_space_ptr,tolua_set_p2d__Scene_space_ptr);
    tolua_function(tolua_S,"new",tolua_scene_p2d_Scene_new00);
    tolua_function(tolua_S,"new_local",tolua_scene_p2d_Scene_new00_local);
    tolua_function(tolua_S,".call",tolua_scene_p2d_Scene_new00_local);
    tolua_function(tolua_S,"add_to_scene",tolua_scene_p2d_Scene_add_to_scene00);
    tolua_function(tolua_S,"init_physics",tolua_scene_p2d_Scene_init_physics00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_scene (lua_State* tolua_S) {
 return tolua_scene_open(tolua_S);
};
#endif

