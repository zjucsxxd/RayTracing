#ifndef SURFACE3D_HPP
#define SURFACE3D_HPP

#include "geometry/Point3D.hpp"
#include "geometry/Range3D.hpp"
#include "geometry/LocalVector3D.hpp"

template <typename T>
class ISurface3D {
public:
    virtual LocalVector3D<T> getNormalVector(const Point3D<T>& point) = 0;
    /* Virtual destructor */
    virtual ~ISurface3D() {}
};

#endif
