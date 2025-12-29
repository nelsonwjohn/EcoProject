// Tetrazoon list header
#ifndef TETRAZOON_LIST_H
#define TETRAZOON_LIST_H

#include "tetrazoon.h"

typedef struct tetrazoon_list {
    Tetrazoon* tetrazoons;
    int capacity;
    int tetrazoon_count;
    int increment;
} Tetrazoon_list;

// Initializes the dynamic list with given increment size.
void initialize_list(Tetrazoon_list* tetrazoon_list, int increment);

// Adds a tetrazoon to the list by constructing from four points (one tetracyte seed).
void add_tetrazoon(Tetrazoon_list* tetrazoon_list,
                   Pos3 point1,
                   Pos3 point2,
                   Pos3 point3,
                   Pos3 point4);

#endif
