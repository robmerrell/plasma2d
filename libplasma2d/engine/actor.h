/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_ACTOR_H
#define P2D_ACTOR_H

#include "display_object.h"
#include "director.h"

namespace p2d {
    
    class Actor : public DisplayObject {
    private:
        // vertices for the sprite geometry
        glm::mat4x3 sprite_verts;
        
        // texture coords
        glm::mat4 tex_coords;
        
        // image dimensions
        float width;
        float height;
        
        // image name
        std::string image;
        
    public:
        /**
         * Default constructor
         */
        Actor();
        
        /**
         * Destructor
         */
        ~Actor();
        
        /**
         * Set the actor's image
         */
        void setImage(std::string _image);
        
        /**
         * Set the actor's width and height
         */
        void setDimensions(float _width, float _height);
        float getWidth();
        float getHeight();
        
        /**
         * Recalculate and cache the actor's vertex info
         */
        void cacheVerts();
        
        /**
         * Recalculate and cache the actor's texture map coords
         */
        void cacheTextureCoords();
        
        /**
         * Draw the actor
         */
        void draw();
    };
    
}

#endif