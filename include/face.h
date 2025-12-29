#ifndef FACE_H
#define FACE_H

#include "float3.h"  // provides Pos3 and Vec3

typedef struct face {
    Pos3 points[3];
    Vec3 edges[3];
    Vec3 normal;
    float area;
    Pos3 centroid;
} Face;

// Create a Face from three points (expects counter-clockwise order for normal).
Face create_face(Pos3 point1, Pos3 point2, Pos3 point3);

#endif