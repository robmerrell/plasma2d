/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_LOADING_SCENE_H
#define P2D_LOADING_SCENE_H

#include "plasma2d.h"

namespace p2d {
    
    class LoadingScene : public Scene {
    private:
        p2d::Texture *logo_texture;
        p2d::Actor *logo;
        
    public:
        LoadingScene(std::string _texture_path);
        ~LoadingScene();
    };
    
}


#endif
