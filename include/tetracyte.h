#ifndef TETRACYTE_H
#define TETRACYTE_H

//Header files
#include "float3.h"
#include "face.h"

//Structures
typedef struct tetracyte {
    //Vertices of the tetracyte
    Pos3 vertices[4];
    //Surface area of each face

    //volume
    int volume;

    //Faces of the tetracyte
    Face faces[4];

} Tetracyte;

// Factory: create a tetracyte from 4 points.
Tetracyte create_tetracyte(Pos3 point1, Pos3 point2, Pos3 point3, Pos3 point4);

#endif