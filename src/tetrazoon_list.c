//Header files
#include "tetrazoon_list.h"
#include "tetrazoon.h"
#include "float3.h"

//Standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initialize_list(Tetrazoon_list* tetrazoon_list, int increment) 
{
    if (!tetrazoon_list || increment <= 0) return;

    tetrazoon_list->increment = increment;
    tetrazoon_list->tetrazoons = malloc((size_t)increment * sizeof(Tetrazoon));
    if (!tetrazoon_list->tetrazoons) {
        tetrazoon_list->capacity = 0;
        tetrazoon_list->tetrazoon_count = 0;
        return;
    }
    tetrazoon_list->capacity = increment;
    tetrazoon_list->tetrazoon_count = 0;
}

void add_tetrazoon(Tetrazoon_list* tetrazoon_list, Pos3 point1, Pos3 point2, Pos3 point3, Pos3 point4)
{
    if (!tetrazoon_list) return;

    //Check if space is avail
    if (tetrazoon_list->tetrazoon_count >= tetrazoon_list->capacity) {
        //If not make new space
        int new_capacity = tetrazoon_list->capacity + tetrazoon_list->increment;
        void *temp = realloc(tetrazoon_list->tetrazoons,(size_t)new_capacity * sizeof(Tetrazoon));
        if (!temp) return;
        //Update Capcity
        tetrazoon_list->tetrazoons = temp;
        tetrazoon_list->capacity = new_capacity;
    }
    //Add new Tetrazoon to list 
    tetrazoon_list->tetrazoons[tetrazoon_list->tetrazoon_count].tetracytes = malloc((size_t)tetrazoon_list->increment * sizeof(Tetracyte));
    if (!tetrazoon_list->tetrazoons[tetrazoon_list->tetrazoon_count].tetracytes) {
        return;
    }
    tetrazoon_list->tetrazoons[tetrazoon_list->tetrazoon_count].num_tetracytes = 1;
    tetrazoon_list->tetrazoons[tetrazoon_list->tetrazoon_count].tetracytes[0] = create_tetracyte(point1,point2,point3,point4);
    //Update to shift index for next tetrazoon
    tetrazoon_list->tetrazoon_count++;
}