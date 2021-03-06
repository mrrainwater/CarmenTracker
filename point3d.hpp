//Jared Rainwater --- point3d.hpp
/*
    Description
    Implementation for templated functions..
    Since they require a pesky .hpp..
*/

#include "point3d.h"

template <typename T>
Point3D operator *(const Point3D& lhs, const T& scalar)
{
    Point3D result(lhs);
    result.x *= scalar;
    result.y *= scalar;
    result.z *= scalar;
    return result;
}

template <typename T>
Point3D& Point3D::operator *=(const T& scalar)
{
    *this = *this * scalar;
    return *this;
}

template <typename T>
Point3D operator /(const Point3D& lhs, const T& scalar)
{
    Point3D result(lhs);
    result.x /= scalar;
    result.y /= scalar;
    result.z /= scalar;
    return result;
}

template <typename T>
Point3D& Point3D::operator /=(const T& scalar)
{
    *this = *this / scalar;
    return *this;
}
