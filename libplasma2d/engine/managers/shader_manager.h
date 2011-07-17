/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

// TODO: Cache position calls for shader inputs
// TODO: Maybe we should use const ints to store the name of the shaders...

#ifndef SHADER_MANAGER_H
#define SHADER_MANAGER_H

#include <iostream> // TODO: do we use this?
#include <fstream>
#include <sstream>
#include <ext/hash_map>

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

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
        
        // the currently bound program
        GLuint current_program;
        
        __gnu_cxx::hash_map<std::string, GLuint, __gnu_cxx::hash<std::string>, eqstr> shaders;
        __gnu_cxx::hash_map<std::string, GLuint, __gnu_cxx::hash<std::string>, eqstr> programs;
        
    public:
        static ShaderManager* Inst();
        
        /**
         * setter/getter for the shader path
         */
        void setShaderPath(std::string _resource_path);
        std::string getShaderPath();
        
        /**
         * Loads and compiles the specified shader
         */
        bool compileShader(std::string _filename);
        
        /**
         * Build a shader program out of two shaders
         * The program is stored in a hash_map by name
         */
        bool buildProgram(std::string _vertex, std::string _fragment, std::string _name);
        
        /**
         * Retreive a shader program
         */
        void useProgram(std::string _name);
        
        // TODO: get rid of these
        /**
         * Get an attribute location
         */
        GLuint getAttribLocation(const GLchar* _attr);
        
        /**
         * Get a uniform location
         */
        GLuint getUniformLocation(const GLchar* _uniform);
    };
    
}

#endif