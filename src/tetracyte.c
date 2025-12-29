//Header files
#include "tetracyte.h"
#include "float3.h"
#include "face.h"
//Standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//Function to determine the volume of a tetracyte
Tetracyte create_tetracyte(Pos3 point1, Pos3 point2, Pos3 point3, Pos3 point4) {
    Tetracyte tetracyte;
    //Define points
    tetracyte.vertices[0] = point1;
    tetracyte.vertices[1] = point2;
    tetracyte.vertices[2] = point3;
    tetracyte.vertices[3] = point4;
    //Create Faces
    tetracyte.faces[0] = create_face(point1,point2,point3);
    tetracyte.faces[1] = create_face(point1,point2,point4);
    tetracyte.faces[2] = create_face(point1,point3,point4);
    tetracyte.faces[3] = create_face(point2,point3,point4);

    //Calculate Volume
    tetracyte.volume = fabs(dot_product3(tetracyte.faces[0].edges[0],cross_product3(tetracyte.faces[0].edges[1],tetracyte.faces[1].edges[1])))/6;

    return tetracyte;
}