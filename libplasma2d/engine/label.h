/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_LABEL_H
#define P2D_LABEL_H

#include <string>

#include "display_object.h"
#include "director.h"

namespace p2d {
    
    class Label : public DisplayObject {
    private:
        // text to be rendered by the label. It doesn't support
        // wrapping, so the programmer needs to handle that automatically
        std::string text;
        
        // dimensions
        float width;
        float height;
        
    public:
        Label();
        
        /**
         * Setter/Getter for the text
         */
        void setText(std::string);
        std::string getText();
        
        /**
         * Setter/Getter for the dimensions
         */
        void setDimensions(float, float);
        float getWidth();
        float getHeight();
        
        /**
         * Draw the label
         */
        void draw();
    };
    
}

#endif