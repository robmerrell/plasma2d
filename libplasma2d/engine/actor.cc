/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#include "actor.h"

p2d::Actor::Actor(p2d::pxyCoords _coords, std::string _image) {
    pos = _coords;
    
    // load the image
    image = _image;
    p2d::TextureManager::Inst()->loadTexture(_image);
    
    // get the dimensions of the image
    dim_x = 64.0f;
    dim_y = 64.0f;
    
    t1 = 0.0f;
    count = 1;
}


p2d::Actor::~Actor() {
    // TODO: see if we need to remove the texture
}


/*
void p2d::Actor::transformForAnchor() {
    if (anchor.x != 0.0f || anchor.y != 0.0f) {
        glLoadIdentity();
        glTranslatef(dim_x * -anchor.x, dim_y * -anchor.y, 0.0f);
    }
}


inline void p2d::Actor::transformForScale() {
    scaled_dim_x = dim_x * scale;
    scaled_dim_y = dim_y * scale;
}
*/

void p2d::Actor::draw() {
//    scaled_dim_x = 64.0f;
//    scaled_dim_y = 64.0f;
////    // TODO: this shouldn't be rebuilt every frame...
//    static const GLfloat squareVertices[] = {
//        0.0f, 0.0f, 0.0f,
//        scaled_dim_x, 0.0f, 0.0f,
//        0.0f, scaled_dim_y, 0.0f,
//        scaled_dim_x, scaled_dim_y, 0.0f
//    };
    
    if (count == 1) {
        t1++;
//        std::cout << t1 << std::endl;
        count = 0;
    }
    count++;
    
    p2d::matrix projection_matrix;
    p2d::generateIdentityMatrix(&projection_matrix);
//    p2d::setProjection(&projection_matrix, 60.0f, (768.0f/1024.0f), 1.0f, 20.0f);
//    p2d::generateFrustumMatrix(&projection_matrix, 0.0f, 1.0f, 0.0f, 1.0f, 0.1f, 100.0f);


    p2d::matrix actor_matrix;
    p2d::generateIdentityMatrix(&actor_matrix);
    p2d::translateMatrix(&actor_matrix, -1.0, 0.0f, 0.0f);
    p2d::rotateMatrix(&actor_matrix, t1, 0.0f, 0.0f, 1.0f);
    
    static const GLfloat squareVertices[] = {
        -0.5f, -0.33f, 0.0f,
        0.5f, -0.33f, 0.0f,
        -0.5f,  0.33f, 0.0f,
        0.5f,  0.33f, 0.0f
    };
    
    p2d::ShaderManager::Inst()->useProgram("move_color");
    
    GLuint pos = p2d::ShaderManager::Inst()->getAttribLocation("position");
    GLuint modelview = p2d::ShaderManager::Inst()->getUniformLocation("modelview");
    GLuint projection_view = p2d::ShaderManager::Inst()->getUniformLocation("projection");

    glVertexAttribPointer(pos, 3, GL_FLOAT, 0, 0, squareVertices);
    glUniformMatrix4fv(modelview, 1, GL_FALSE, (GLfloat*) &actor_matrix.m[0][0] );
    glUniformMatrix4fv(projection_view, 1, GL_FALSE, (GLfloat*) &projection_matrix.m[0][0] );
    glEnableVertexAttribArray(pos);
    
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}

//void p2d::Actor::draw() {
//    transformForScale();
//    
//    static const GLfloat squareVertices[] = {
//        0.0f, 0.0f, 0.0f,
//        scaled_dim_x, 0.0f, 0.0f,
//        0.0f, scaled_dim_y, 0.0f,
//        scaled_dim_x, scaled_dim_y, 0.0f
//    };
//    
//    static const GLfloat textureVerticies[] = {
//        0.0f, 0.0f, 0.0f,
//        1.0f, 0.0f, 0.0f,
//        0.0f, 1.0f, 0.0f,
//        1.0f, 1.0f, 0.0f
//    };
//
//    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
//    p2d::TextureManager::Inst()->bindTexture(image);
//    
//    // move and rotate the geometry
//    transformForAnchor();
//    glLoadIdentity();
//    glTranslatef(pos.x, pos.y, 0.0f);
//    
//    // handle states and draw the geometry and texture
//    glEnableClientState(GL_VERTEX_ARRAY);
//    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
//    
//    glVertexPointer(3, GL_FLOAT, 0, squareVertices);
//    glTexCoordPointer(3, GL_FLOAT, 0, textureVerticies);
//    
//    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
//
//    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
//    glDisableClientState(GL_VERTEX_ARRAY);
// }