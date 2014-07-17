//Jared Rainwater --- integrator.h

#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "point3d.h"

class Integrator
{
private:
    Point3D point;
    float timestep;
public:
    Integrator(Point3D p=Point3D(1,1,1), double t=0.0001): point(p), timestep(t) {}

    float x_dot();
    float y_dot();
    float z_dot();
};

#endif