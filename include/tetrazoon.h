//Tetrazoon header file
#ifndef TETRAZOON_H
#define TETRAZOON_H

//Header files
#include "tetracyte.h"
#include "instruction.h"

//Standard libraries
#include <string.h>
typedef struct tetrazoon {
    //Tetracytes of the tetrazoon
    Tetracyte *tetracytes;
    //Number of tetracytes in the tetrazoon
    int num_tetracytes;
    //Age of the tetrazoon
    int age;
    //Energy of the tetrazoon
    int energy;
    //Genetic instructions for the tetrazoon
    instruction *instructions;
    //Genome of the tetrazoon
    char  *genome;
} Tetrazoon;

#endif