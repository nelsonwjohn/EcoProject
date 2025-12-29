//Header files
#include "face.h"
#include "float3.h"
#include "math_helper.h"
//Standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Face create_face(Pos3 point1, Pos3 point2, Pos3 point3)
{
    Face face;
    //Define points
    face.points[0] = point1;
    face.points[1] = point2;
    face.points[2] = point3;

    //Create Edges
    //Edge1
    face.edges[0].x = point2.x-point1.x;
    face.edges[0].y = point2.y-point1.y;
    face.edges[0].z = point2.z-point1.z;
    //Edge2
    face.edges[1].x = point3.x-point1.x;
    face.edges[1].y = point3.y-point1.y;
    face.edges[1].z = point3.z-point1.z;
    //Edge3
    face.edges[2].x = point3.x-point2.x;
    face.edges[2].y = point3.y-point2.y;
    face.edges[2].z = point3.z-point2.z;

    //Calculate area
    face.area = 0.5 * magnitude3(cross_product3(face.edges[0],face.edge[1]));

    //Calculate normal vector
    face.normal = cross_product3(face.edges[0],face.edges[1]);

    //Calculate Centriod
    face.centroid = centroid(face.points[0],face.points[1],face.points[2]);

    return face;
}
