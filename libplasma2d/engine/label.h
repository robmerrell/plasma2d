/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_LABEL_H
#define P2D_LABEL_H

#include <string>

#include "display_object.h"
#include "bitmap_font.h"

namespace p2d {
    
    class Label : public DisplayObject {
    private:
        // text to be rendered by the label. It doesn't support
        // wrapping, so the programmer needs to handle that automatically
        std::string text;
        
        // dimensions
        float width;
        float height;
        
        p2d::BitmapFont* bitmap_font;
        
    public:
        Label();
        
        void setFont(BitmapFont* _font);
        
        /**
         * Setter/Getter for the text
         */
        void setText(std::string _text);
        std::string getText();
        
        /**
         * Setter/Getter for the dimensions
         */
        void setDimensions(float _width, float _height);
        float getWidth();
        float getHeight();
        
        /**
         * Draw the label
         */
        void draw();
    };
    
}

#endif