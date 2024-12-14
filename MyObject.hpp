#ifndef MYOBJECT_HPP
#define MYOBJECT_HPP

#include "Vector3.hpp"

namespace PhysStep {
    struct MyObject {
        Vector3 position;
        Vector3 velolcity;
        double mass;

        MyObject()
        {
            position = Vector3::zero();
            velolcity = Vector3::zero();
            mass = 0.0;
        }
    };
}

#endif
