/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "test_scene.h"


TestScene::TestScene() {
    char *me = "something";
    p2d::Actor *actor = new p2d::Actor(p2d::pxy(0.0f, 0.0f), me);
    actor->setAnchor(p2d::pxy(0.5f, 0.5f));
    addObject(actor);
    
    p2d::Actor *actor2 = new p2d::Actor(p2d::pxy(300.0f, 300.0f), me);
    addObject(actor2);
}