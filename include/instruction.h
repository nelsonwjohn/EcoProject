#ifndef INSTRUCTION_H
#define INSTRUCTION_H

//Header files
#include "float3.h"

typedef struct instruction {
    //What face is the new tetracyte is being created on
    int face;

    //Position of the new tetracyte vertex
    Pos3 position;
} instruction;

#endif