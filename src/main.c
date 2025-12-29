#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "float3.h"
#include "tetrazoon_list.h"
#include "tetrazoon.h"
#include "tetracyte.h"
#include "instruction.h"


int main (int argc, char *argv[]) {
    // Might implement later
    (void) argc;
    (void) argv;

//Creating variables before the main simulation loop

//List of Tetrazoons
Tetrazoon_list tetrazoon_list;

//Make initial Space
initialize_list(&tetrazoon_list,100);

//Test point
Pos3 point1 = create_float3(1,0,0);
Pos3 point2 = create_float3(-0.5,0.866,0);
Pos3 point3 = create_float3(-0.5,-0.866,0);
Pos3 point4 = create_float3(0,0,1);

//Add first tetrazoon into list
add_tetrazoon(&tetrazoon_list,point1,point2,point3,point4);

//Functions before main loop

int sim_dimensions = 1000;

//Main Loop
    return 0;
}