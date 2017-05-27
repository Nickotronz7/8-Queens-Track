#include <iostream>
#include "NQueenBacktrack.h"
#include "tinyxml2.h"
#include <allegro5.h>
#include <allegro_native_dialog.h>
#include <allegro_primitives.h>
#include <vector>

using namespace std;
using namespace tinyxml2;

int main() {

    /*
    ALLEGRO_DISPLAY* display;

    if(!al_init()){
        al_show_native_message_box(NULL, "Error", "Error al iniciar", "D:", "OK", true);
        return -1;
    }

    al_set_new_display_flags(ALLEGRO_WINDOWED);
    display = al_create_display(ScreenWidth, ScreenHeight);
    al_set_new_window_position(200, 100);
    al_set_window_title(display, "Nicko :D");

    if(!display){
        al_show_native_message_box(display, "Sample Title", "Display Settings", "Display Window was not created", NULL,
                                   ALLEGRO_MESSAGEBOX_ERROR);
    }

    al_init_primitives_addon();

    Board* tablero = new Board();
    cout << "tablero finalizado\n" << endl;
    */

    NQueenBacktrack* solution = new NQueenBacktrack();
    solution->solve();

    cout << "problema finalizado" << endl;

    /*
    al_flip_display();
    al_rest(3);
    al_destroy_display(display);
    */

    cout << "cero es false" << endl;
    cout << "uno es true" << endl;

    return 0;
}