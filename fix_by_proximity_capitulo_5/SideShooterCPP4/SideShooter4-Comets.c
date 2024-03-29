#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "objects3_Comets.h"

//GLOBALS==============================
const int WIDTH = 800;
const int HEIGHT = 400;
const int NUM_BULLETS = 5;
const int NUM_COMETS = 10;
enum KEYS{UP, DOWN, LEFT, RIGHT, SPACE};
bool keys[5] = {false, false, false, false, false};

//prototypes
void InitShip(struct SpaceShip *ship);
void DrawShip(struct SpaceShip *ship);
void MoveShipUp(struct SpaceShip *ship);
void MoveShipDown(struct SpaceShip *ship);
void MoveShipLeft(struct SpaceShip *ship);
void MoveShipRight(struct SpaceShip *ship);

void InitBullet(struct Bullet bullet[], int size);
void DrawBullet(struct Bullet bullet[], int size);
void FireBullet(struct Bullet bullet[], int size, struct SpaceShip *ship);
void UpdateBullet(struct Bullet bullet[], int size);

void InitComet(struct Comet comets[], int size);
void DrawComet(struct Comet comets[], int size);
void StartComet(struct Comet comets[], int size);
void UpdateComet(struct Comet comets[], int size);

int main(void)
{
	//primitive variable
	bool done = false;
	bool redraw = true;
	const int FPS = 60;

	//object variables
	struct SpaceShip ship;
	struct Bullet bullets[NUM_BULLETS];
	struct Comet comets[NUM_COMETS];

	//Allegro variables
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;

	//Initialization Functions
	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(WIDTH, HEIGHT);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();

	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / FPS);

	srand(time(NULL));
	InitShip(&ship);
	InitBullet(bullets, NUM_BULLETS);
	InitComet(comets, NUM_COMETS);

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_start_timer(timer);
	while(!done)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_TIMER)
		{
			redraw = true;
			if(keys[UP])
				MoveShipUp(&ship);
			if(keys[DOWN])
				MoveShipDown(&ship);
			if(keys[LEFT])
				MoveShipLeft(&ship);
			if(keys[RIGHT])
				MoveShipRight(&ship);

			UpdateBullet(bullets, NUM_BULLETS);
			StartComet(comets, NUM_COMETS);
			UpdateComet(comets, NUM_COMETS);
		}
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			done = true;
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			case ALLEGRO_KEY_UP:
				keys[UP] = true;
				break;
			case ALLEGRO_KEY_DOWN:
				keys[DOWN] = true;
				break;
			case ALLEGRO_KEY_LEFT:
				keys[LEFT] = true;
				break;
			case ALLEGRO_KEY_RIGHT:
				keys[RIGHT] = true;
				break;
			case ALLEGRO_KEY_SPACE:
				keys[SPACE] = true;
				FireBullet(bullets, NUM_BULLETS, &ship);
				break;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_UP)
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			case ALLEGRO_KEY_UP:
				keys[UP] = false;
				break;
			case ALLEGRO_KEY_DOWN:
				keys[DOWN] = false;
				break;
			case ALLEGRO_KEY_LEFT:
				keys[LEFT] = false;
				break;
			case ALLEGRO_KEY_RIGHT:
				keys[RIGHT] = false;
				break;
			case ALLEGRO_KEY_SPACE:
				keys[SPACE] = false;
				break;
			}
		}

		if(redraw && al_is_event_queue_empty(event_queue))
		{
			redraw = false; 

			DrawShip(&ship);
			DrawBullet(bullets, NUM_BULLETS);
			DrawComet(comets, NUM_COMETS);
		
			al_flip_display();
			al_clear_to_color(al_map_rgb(0,0,0));
		}
	}

	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
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

	al_draw_filled_triangle(ship->x - 12, ship->y - 17, ship->x +12, ship->y, ship->x - 12, ship->y + 17, al_map_rgb(0, 255, 0));
	al_draw_filled_rectangle(ship->x - 12, ship->y - 2, ship->x +15, ship->y + 2, al_map_rgb(0, 0, 255));
}
void MoveShipUp(struct SpaceShip *ship) {
	ship->y -= ship->speed;
	if(ship->y < 0) {
		ship->y = 0;
	}
}
void MoveShipDown(struct SpaceShip *ship) {
	ship->y += ship->speed;
	if(ship->y > HEIGHT) {
		ship->y = HEIGHT;
	}
}
void MoveShipLeft(struct SpaceShip *ship){
	ship->x -= ship->speed;
	if(ship->x < 0) {
		ship->x = 0;
	}
}
void MoveShipRight(struct SpaceShip *ship) {
	ship->x += ship->speed;
	if(ship->x > 300) {
		ship->x = 300;
	}
}

void InitBullet(struct Bullet bullet[], int size) {
	for(int i = 0; i < size; i++) {
		bullet[i].ID = BULLET;
		bullet[i].speed = 10;
		bullet[i].live = false;
	}
}
void DrawBullet(struct Bullet bullet[], int size) {
	for( int i = 0; i < size; i++) {
		if(bullet[i].live) {
			al_draw_filled_circle(bullet[i].x, bullet[i].y, 2, al_map_rgb(255, 255, 255));
		}
	}
}
void FireBullet(struct Bullet bullet[], int size, struct SpaceShip *ship) {
	for( int i = 0; i < size; i++) {
		if(!bullet[i].live) {
			bullet[i].x = ship->x + 17;
			bullet[i].y = ship->y;
			bullet[i].live = true;
			break;
		}
	}
}
void UpdateBullet(struct Bullet bullet[], int size) {
	for(int i = 0; i < size; i++) {
		if(bullet[i].live) {
			bullet[i].x += bullet[i].speed;
			if(bullet[i].x > WIDTH) {
				bullet[i].live = false;
			}
		}
	}
}

void InitComet(struct Comet comets[], int size) {
	for(int i = 0; i < size; i++) {
		comets[i].ID = ENEMY;
		comets[i].live = false;
		comets[i].speed = 5;
		comets[i].boundx = 18;
		comets[i].boundy = 18;
	}
}
void DrawComet(struct Comet comets[], int size) {
	for(int i = 0; i < size; i++) {
		if(comets[i].live) {
			al_draw_filled_circle(comets[i].x, comets[i].y, 20, al_map_rgb(255, 0, 0));
		}
	}
}
void StartComet(struct Comet comets[], int size) {
	for(int i = 0; i < size; i++) {
		if(!comets[i].live) {
			if(rand() % 500 == 0) {
				comets[i].live = true;
				comets[i].x = WIDTH;
				comets[i].y = 30 + rand() % (HEIGHT - 60);
				break;
			}
		}
	}
}
void UpdateComet(struct Comet comets[], int size) {
	for(int i = 0; i < size; i++) {
		if(comets[i].live) {
			comets[i].x -= comets[i].speed;
			if(comets[i].x < 0) {
				comets[i].live = false;
			}
		}
	}
}