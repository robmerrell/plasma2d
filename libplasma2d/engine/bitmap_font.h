/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_BITMAP_FONT_H
#define P2D_BITMAP_FONT_H

#include <string>

#include "../external/tinyxml/tinyxml.h"

#include "../external/glm/glm.hpp"
#include "../external/glm/gtc/matrix_transform.hpp"
#include "../external/glm/gtc/type_ptr.hpp"

#include "texture.h"

namespace p2d {
    
    struct font_char {
        int id;
        float x;
        float y;
        float width;
        float height;
        float xoffset;
        float yoffset;
        float xadvance;
        char letter; // only doing 1 byte per character right now
    };
    
    class BitmapFont {
    private:
        std::string font_name;
        std::string full_font_path;
        
        // font info
        int scale_width;
        int scale_height;
        int font_size;
        
        // TODO: fix the parser so that it doesn't crash on more than 256 characters
        font_char char_collection[256]; // settle on 256 for now
        
        Texture* texture;
        
    public:
        BitmapFont() {};
        BitmapFont(std::string _text, Texture* _texture, float _x, float _y);
        
        void loadFont(std::string _font_name, std::string _full_font_path);
        
        void setFontTexture(Texture*);
        Texture* getFontTexture();
        
        void parse();
        
        int getFontSize();
        
        /**
         * Get verticies and texture map info for specific characters
         */
        glm::mat4x3 generateVertsForLetter(char _char);
        glm::mat4 generateTexCoordsForLetter(char _char);
        
        /**
         * Get char specific info
         */
        float getXAdvanceForLetter(char _char);
        float getXOffsetForLetter(char _char);
        float getYOffsetForLetter(char _char);
    };
    
}

#endif