/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "test_scene.h"
#include <iostream>

TestScene::TestScene() {
    p2d::Actor *actor = new p2d::Actor(p2d::pxy(100.0f, 105.0f), "img_test.bmp");
    actor->setAngle(45.0f);
    addObject(actor);
    
    p2d::Actor *actor2 = new p2d::Actor(p2d::pxy(400.0f, 400.0f), "img_test.png");
    actor2->setScale(3.0f);
    actor2->setAnchor(p2d::pxy(0.5f, 0.5f));
    addObject(actor2);
}