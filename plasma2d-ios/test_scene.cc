/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "test_scene.h"
#include <iostream>

TestScene::TestScene() {
    p2d::Actor *actor = new p2d::Actor(p2d::pxy(100.0f, 100.0f), "img_test.bmp");
    addObject(actor);
    
    p2d::Actor *actor2 = new p2d::Actor(p2d::pxy(300.0f, 300.0f), "img_test.png");
    actor2->setScale(3.0f);
    addObject(actor2);
}