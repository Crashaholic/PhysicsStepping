#ifndef MYOBJECT_HPP
#define MYOBJECT_HPP

#include "Vector3.hpp"

namespace PhysStep {
    struct MyObject {
        Vector3 pos;
        Vector3 vel;
        double mass;

        MyObject();

        void SetMass(double mass);
        void SetVelocity(Vector3 v);
        void SetPosition(Vector3 p);
    };
}

#endif
