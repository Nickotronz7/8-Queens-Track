//
// Created by nicko on 14/05/17.
//

#ifndef INC_8_QUEENS_TRACK_BOARD_H
#define INC_8_QUEENS_TRACK_BOARD_H

#include <allegro5.h>
#include <allegro_primitives.h>
#include "boxes.h"
#include "Definer.h"

class Board {
public:
    Board();
    void update_state(int id, int* rbg);

private:
    struct board {
        boxes* casilla[N*N] = {NULL};
    } space;

};


#endif //INC_8_QUEENS_TRACK_BOARD_H
