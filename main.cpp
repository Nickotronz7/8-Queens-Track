//C++ Program to Solve N-Queen Problem

#include <iostream>
#include <allegro5.h>
#include <allegro_native_dialog.h>
#include "NQueenBacktrack.h"

using namespace std;

int main() {

    ALLEGRO_DISPLAY* display;

    if(!al_init()){
        al_show_native_message_box(NULL, "Error", "Error al iniciar", "D:", "OK", true);
    }

    display = al_create_display(800, 600);

    al_set_window_title(display, "Nicko ROCKS");

    if(!display){
        al_show_native_message_box(NULL, "Error", "Error al crear la ventana", "Dx", "OK", true);
    }

    al_rest(2.0);

    NQueenBacktrack* prueba = new NQueenBacktrack();
    prueba->solve();

    return 0;
}