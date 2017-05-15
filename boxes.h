//
// Created by nicko on 14/05/17.
//

#ifndef INC_8_QUEENS_TRACK_BOXES_H
#define INC_8_QUEENS_TRACK_BOXES_H

#include <allegro5.h>
#include <allegro_primitives.h>
#include "Definer.h"

class boxes {

public:
    boxes(int pos_x, int pos_y, int red, int green, int blue);
    void set_posx(int pos_x);
    void set_posy(int pos_y);

    void setRGB(int red, int green, int blue);
    ALLEGRO_COLOR getRGB();

private:
    struct color {
        int red = 0;
        int green = 0;
        int blue = 0;
    } RGB;

private:
    int pos_x = 0;
    int pos_y = 0;

};


#endif //INC_8_QUEENS_TRACK_BOXES_H
