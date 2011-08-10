/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "loading_scene.h"

p2d::LoadingScene::LoadingScene(std::string _texture_path) {
    logo_texture = new Texture("logo.png", _texture_path);
    logo = new Actor(logo_texture, 100.0f, 100.0f);
    
    addToScene(logo);
}


p2d::LoadingScene::~LoadingScene() {
    delete logo_texture;
}
