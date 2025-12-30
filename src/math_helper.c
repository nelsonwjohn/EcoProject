//Header files
#include "math_helper.h"
//Standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Calculates the cross product given edges
Vec3 cross_product3(Vec3 edge1, Vec3 edge2) {
    Vec3 vector3;
    vector3.x = (edge1.y * edge2.z) - (edge1.z * edge2.y);
    vector3.y = (edge1.z * edge2.x) - (edge1.x * edge2.z);
    vector3.z = (edge1.x * edge2.y) - (edge1.y * edge2.x);
    return vector3;
}

//Calculate the magnitude
float magnitude3(Vec3 vector1) {
    return sqrt((pow(vector1.x,2)+pow(vector1.y,2)+pow(vector1.z,2)));
}

//Calculates centroid of a triangle
Pos3 centroid(Pos3 point1, Pos3 point2, Pos3 point3) {
    Pos3 center;
    center.x = (point1.x + point2.x + point3.x) / 3;
    center.y = (point1.y + point2.y + point3.y) / 3;
    center.z = (point1.z + point2.z + point3.z) / 3;
    return center;
}

//Calculates the dot product of two vectors
float dot_product3(Vec3 vector1, Vec3 vector2) 
{
    return ((vector1.x * vector2.x) + (vector1.y * vector2.y) + (vector1.z * vector2.z));
}

Pos3 aabb_min(Pos3 point1,Pos3 point2,Pos3 point3,Pos3 point4) {
    Pos3 min;
    min.x = fminf(fminf(point1.x, point2.x),fminf(point3.x,point4.x));
    min.y = fminf(fminf(point1.y, point2.y),fminf(point3.y,point4.y));
    min.z = fminf(fminf(point1.z, point2.z),fminf(point3.z,point4.z));
    return min;
}

Pos3 aabb_max(Pos3 point1,Pos3 point2,Pos3 point3,Pos3 point4) {
    Pos3 max;
    max.x = fmaxf(fmaxf(point1.x, point2.x),fmaxf(point3.x,point4.x));
    max.y = fmaxf(fmaxf(point1.y, point2.y),fmaxf(point3.y,point4.y));
    max.z = fmaxf(fmaxf(point1.z, point2.z),fmaxf(point3.z,point4.z));
    return max;
}
