#include <iostream>
#include <allegro5.h>
#include <allegro_native_dialog.h>
#include <allegro_primitives.h>
#include "NQueenBacktrack.h"

using namespace std;

int main() {

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
    cout << "tablero finalizado" << endl;
    NQueenBacktrack* solution = new NQueenBacktrack(tablero);
    solution->solve();
    cout << "problema finalizado" << endl;

//    float points[8] = {0, 0, 400, 100, 50, 200, ScreenWidth, ScreenHeight};
//
//    al_draw_triangle(10, 10, 20, 10, 15, 50, al_map_rgb(255, 0, 0), 1.0); //hace un triangulo rojo
//    al_draw_filled_rounded_rectangle(10, 10, 100, 100, 5, 5, al_map_rgb(0, 255, 0)); /** hcae un rectangulo con los bordes redondos creo...*/
//    al_draw_rectangle(400, 400, 450, 500, al_map_rgb(255, 98, 100), 9.0); // un rectangulo comun y corriente
//    al_draw_circle(ScreenWidth/2, ScreenHeight/2, 10, al_map_rgb(255, 255, 0), 3.0); // un circulo :o
//    al_draw_ellipse(ScreenWidth/2, ScreenHeight - 100, 10, 5, al_map_rgb(255, 0, 255), 4.0); // elipse...
//    al_draw_arc(10, ScreenHeight - 100, 10, 0, 4.0, al_map_rgb(255, 0, 0), 2.0);
//    al_draw_line(100, 500, 300, 500, electricblue, 6.0);
//    al_draw_pixel(500, 500, electricblue);
//    al_draw_spline(points, electricblue, 1.0);

    al_flip_display();
    al_rest(20.0);
    al_destroy_display(display);

    cout << "cero es false" << endl;
    cout << "uno es true" << endl;

    return 0;
}