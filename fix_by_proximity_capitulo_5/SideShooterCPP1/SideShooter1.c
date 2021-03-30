#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "objects1.h"

//GLOBALS==============================
const int WIDTH = 800;
const int HEIGHT = 400;

//prototypes
void InitShip(struct SpaceShip *ship);
void DrawShip(struct SpaceShip *ship);

int main(void) {
	//primitive variable
	bool done = false;

	//object variables
	struct SpaceShip ship;

	//Allegro variables
	ALLEGRO_DISPLAY *display = NULL;

	//Initialization Functions
	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(WIDTH, HEIGHT);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();
	InitShip(&ship);

	while(!done) {
		DrawShip(&ship);
		
		al_flip_display();
		al_clear_to_color(al_map_rgb(0,0,0));
	}

	al_destroy_display(display);						//destroy our display object

	return 0;
}

void InitShip(struct SpaceShip *ship) {
	ship->x = 20;
	ship->y = HEIGHT / 2;
	ship->ID = PLAYER;
	ship->lives = 3;
	ship->speed = 7;
	ship->boundx = 6;
	ship->boundy = 7;
	ship->score = 0;
}

void DrawShip(struct SpaceShip *ship) {
	al_draw_filled_rectangle(ship->x, ship->y - 9, ship->x + 10, ship->y - 7, al_map_rgb(255, 0, 0));
	al_draw_filled_rectangle(ship->x, ship->y + 9, ship->x + 10, ship->y + 7, al_map_rgb(255, 0, 0));

	al_draw_filled_triangle(ship->x - 12, ship->y - 17, ship->x + 12, ship->y, ship->x - 12, ship->y + 17, al_map_rgb(0, 255, 0));
	al_draw_filled_rectangle(ship->x - 12, ship->y - 2, ship->x + 15, ship->y + 2, al_map_rgb(0, 0, 255));
}