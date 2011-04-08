/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "shader_manager.h"

p2d::ShaderManager* p2d::ShaderManager::obj = NULL;


p2d::ShaderManager* p2d::ShaderManager::Inst() {
    if (!obj) {
        obj = new ShaderManager();
    }
    
    return obj;
}


bool p2d::ShaderManager::compileShader(std::string _filename) {
    GLuint shader;
    GLint compiled;
    GLenum type;
    
    // extract the type based on the extension
    if (_filename.substr(_filename.size()-3, 3) == "vsh")
        type = GL_VERTEX_SHADER;
    else
        type = GL_FRAGMENT_SHADER;
    
    // generate the shader
    shader = glCreateShader(type);
    if (shader == 0) return false;
    
    // read the shader source
    std::ifstream shader_stream(_filename.c_str());
    std::stringstream buffer;
    buffer << shader_stream.rdbuf();
    
    // compile the shader source
    const GLchar* casted_source = buffer.str().c_str();
    glShaderSource(shader, 1, &casted_source, NULL);
    glCompileShader(shader);
    
    glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);
    
    // TODO: only do this in debug mode?
    if (!compiled) {
        GLchar messages[256];
        glGetShaderInfoLog(shader, sizeof(messages), 0, &messages[0]);
        std::cout << messages;
        return false;
    }
    
    obj->shaders[_filename] = shader;
    return true;
}


bool p2d::ShaderManager::buildProgram(std::string _vertex, std::string _fragment, std::string _name) {
    GLuint program_object = glCreateProgram();
    GLint linked;
    
    if (program_object == 0) return false;
    
    // attach the shaders
    glAttachShader(program_object, obj->shaders[_vertex]);
    glAttachShader(program_object, obj->shaders[_fragment]);
    
    glLinkProgram(program_object);
    glGetProgramiv(program_object, GL_LINK_STATUS, &linked);
    
    if (!linked) {
        GLchar messages[256];
        glGetShaderInfoLog(program_object, sizeof(messages), 0, &messages[0]);
        std::cout << messages;
        return false;   
    }
    
    obj->programs[_name] = program_object;
    return true;
}

