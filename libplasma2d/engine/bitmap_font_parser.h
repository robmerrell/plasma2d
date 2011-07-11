/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_BITMAP_FONT_PARSER_H
#define P2D_BITMAP_FONT_PARSER_H

#include <string>
#include <vector>
#include "../external/tinyxml/tinyxml.h"

#include "../external/glm/glm.hpp"
#include "../external/glm/gtc/matrix_transform.hpp"
#include "../external/glm/gtc/type_ptr.hpp"

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
        std::string letter;
    };
    
    class BitmapFontParser {
    private:
        // the path to external resources (images, sounds, etc.)
        std::string resource_path;
        
        std::string filename;
        
        // font info
        int scale_width;
        int scale_height;
        int font_size;
        
        font_char char_collection[256]; // settle on 256 for now
        
    public:
        /**
         * Constructor
         */
        BitmapFontParser() {};
        BitmapFontParser(std::string _path);
        
        /**
         * Set the resource path
         */
        void setResourcePath(std::string _resource_path);
        
        /**
         * Prase the file
         */
        void parse(std::string _filename);
        
        /**
         * Generate a set of vertecies for a single letter based on the font
         */
        glm::mat4x3 generateVertsForLetter(char _char);
        
        /**
         * Generate the texture coordinates for a single letter based on the font
         */
        glm::mat4 generateTexCoordsForLetter(char _char);
        
        /**
         * Get the X Advance parameter for a letter
         */
        float getXAdvanceForLetter(char _char);
        
        /**
         * Get offsets for a letter
         */
        float getXOffsetForLetter(char _char);
        float getYOffsetForLetter(char _char);
    };
    
}

#endif