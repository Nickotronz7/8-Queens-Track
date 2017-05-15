//
// Created by nicko on 14/05/17.
//

#include "boxes.h"

boxes::boxes(int pos_x, int pos_y, int red, int green, int blue) {
    set_posx(pos_x);
    set_posy(pos_y);
    setRGB(red, green, blue);

    al_draw_filled_rectangle(pos_x, pos_y, pos_x + Widht, pos_y + Height, getRGB());
    //al_flip_display();
}

void boxes::set_posx(int pos_x) {
    boxes::pos_x = pos_x;
}

void boxes::set_posy(int pos_y) {
    boxes::pos_y = pos_y;
}

void boxes::setRGB(int red, int green, int blue) {
    boxes::RGB.red = red;
    boxes::RGB.green = green;
    boxes::RGB.blue = blue;
    al_flip_display();
}

ALLEGRO_COLOR boxes::getRGB() {
    return al_map_rgb(RGB.red, RGB.green, RGB.blue);
}