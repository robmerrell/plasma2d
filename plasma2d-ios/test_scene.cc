/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "test_scene.h"
#include <iostream>

TestScene::TestScene(const char* _resource) {
    std::cout << _resource << std::endl;
//    char *me = "/assets/images/img_test.bmp";
    
    std::string r = _resource;
    std::string file = "/img_test.png";
    std::string final = r + file;
    
    std::cout << final << std::endl;
    
//    p2d::Actor *actor = new p2d::Actor(p2d::pxy(0.0f, 0.0f), me);
//    actor->setAnchor(p2d::pxy(0.5f, 0.5f));
//    addObject(actor);
    
    p2d::Actor *actor2 = new p2d::Actor(p2d::pxy(300.0f, 300.0f), (char*)final.c_str());
    actor2->setScale(5.0f);
    addObject(actor2);
}