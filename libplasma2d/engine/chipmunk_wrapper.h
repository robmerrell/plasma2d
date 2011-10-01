/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef P2D_CHIPMUNK_WRAPPER_H
#define P2D_CHIPMUNK_WRAPPER_H

#include "chipmunk.h"

namespace CP {    
    // moment helpers
    float momentForCircle(float _m, float _r1, float _r2, cpVect _offset);
    float momentForSegment(float _m, cpVect _a, cpVect _b);
    float momentForPoly(float _m, int _numVerts, const cpVect* _verts, cpVect _offset);
    float momentForBox(float _m, float _width, float _height);

    
    class Body {
    private:
        cpBody* body;
        
    public:
        Body(float _mass, float _inertia);
        ~Body();
        
        // getters and setters
        float getMass();
        void setMass(float _mass);
        
        float getMoment();
        void setMoment(float _moment);
        
        float getPosition();
        void setPos(float _x, float _y);
        
        float getVelocity();
        void setVelocity(float _x, float _y);
        
        float getAngle();
        void setAngle(float _angle);
        
        float getAngularVelocity();
        void setAngularVelocity(float _velocity);
        
        float getTorque();
        void setTorque(float _torque);
        
        float getVelocityLimit();
        void setVelocityLimit(float _limit);
        
        float getForceX();
        float getForceY();
        void setForce(float _x, float _y);
    };
    
    
    class Shape {
    private:
        cpShape* shape;
        
    public:
        Shape();
        ~Shape();
        
        // getters and setters
        bool isSensor();
        void setSensor(bool _set);
        
        float getElasticity();
        void setElasticity(float _elasticity);
        
        float getFriction();
        void setFriction(float _friction);
        
        float getSurfaceVelocity();
        void setSurfaceVelocity(float _x, float _y);

        cpCollisionType getCollissionType();
        void setCollisionType(cpCollisionType _type);
        
        cpGroup getGroup();
        void setGroup(cpGroup _group);
        
        cpLayers getLayers();
        void setLayers(cpLayers _layers);
    };
    
    
    class CircleShape : public Shape {
    public:
        CircleShape();
        ~CircleShape();
    };
}


#endif