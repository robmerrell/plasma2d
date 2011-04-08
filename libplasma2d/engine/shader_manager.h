/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

// TODO: Cache position calls for shader inputs
// TODO: Maybe we should use const ints to store the name of the shaders...

#ifndef SHADER_MANAGER_H
#define SHADER_MANAGER_H

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ext/hash_map>

#include "hash_map_defs.h"

namespace p2d {
    
    class ShaderManager {
    private:
        ShaderManager() {};
        ShaderManager(const ShaderManager&);
        ShaderManager& operator=(const ShaderManager&);
        
        static ShaderManager* obj;
        
        // the path to the shaders
        std::string shader_path;
        
        __gnu_cxx::hash_map<std::string, GLuint, __gnu_cxx::hash<std::string>, eqstr> shaders;
        __gnu_cxx::hash_map<std::string, GLuint, __gnu_cxx::hash<std::string>, eqstr> programs;
        
    public:
        static ShaderManager* Inst();
        
        /**
         * Loads and compiles the specified shader
         */
        bool compileShader(std::string);
        
        /**
         * Build a shader program out of two shaders
         * The program is stored in a hash_map by name
         */
        bool buildProgram(std::string, std::string, std::string);
        
//        /**
//         * setter/getter for the resource path
//         */
//        void setResourcePath(std::string);
//        std::string getResourcePath();
//        
//        /**
//         * Load the specified texture
//         */
//        void loadTexture(std::string);
//        
//        /**
//         * Bind the referenced texture
//         */
//        void bindTexture(std::string);
//        
//        /**
//         * Unbind a texture
//         */
//        void unbindTexture();
//        
//        /**
//         * Delete a texture
//         */
//        void deleteTexture(std::string);
//        
//        /**
//         * Return the current texture refernce count
//         */
//        int getTextureRef();
        
    };
    
}

#endif