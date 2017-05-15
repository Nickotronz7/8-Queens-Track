//
// Created by nicko on 14/05/17.
//

#include "Board.h"

Board::Board() {

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(!(i%2)){
                if(!(j%2)){
                    Board::space.casilla[i*10+j] = new boxes(j*Widht, i*Height, 0,0,0);
                } else {
                    Board::space.casilla[i*10+j] = new boxes(j*Widht, i*Height, 255,255,255);
                }
            } else {
                if(!(j%2)){
                    Board::space.casilla[i*10+j] = new boxes(j*Widht, i*Height, 255,255,255);
                } else {
                    Board::space.casilla[i*10+j] = new boxes(j*Widht, i*Height, 0,0,0);
                }
            }
        }
    }
    //Board::space.casilla[0]->setRGB(255,0,0);
    //cout << "box creada y pintada" << endl;
    //al_flip_display();
}

void Board::update_state(int id, int *rbg) {
    Board::space.casilla[id]->setRGB(rbg[0], rbg[1], rbg[2]);
}
