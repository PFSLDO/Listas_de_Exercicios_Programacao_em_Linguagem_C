#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include "objects3_Comets.h"

//GLOBALS==============================
const int WIDTH = 800;
const int HEIGHT = 400;
const int NUM_BULLETS = 5;
const int NUM_COMETS = 10;
enum KEYS{UP, DOWN, LEFT, RIGHT, SPACE, D};
bool keys[5] = {false, false, false, false, false};

//prototypes
void draw_debug_info(struct SpaceShip *ship, struct Comet comets[], int cSize, struct Bullet bullet[], int bSize, ALLEGRO_FONT *font);

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
void CollideBullet(struct Bullet bullet[], int bSize, struct Comet comets[], int cSize, struct SpaceShip *ship);

void InitComet(struct Comet comets[], int size);
void DrawComet(struct Comet comets[], int size);
void StartComet(struct Comet comets[], int size);
void UpdateComet(struct Comet comets[], int size);
void CollideComet(struct Comet comets[], int cSize, struct SpaceShip *ship);

int main(void) {
	//primitive variable
	bool done = false;
	bool redraw = true;
	const int FPS = 60;
	bool isGameOver = false;

	//object variables
	struct SpaceShip ship;
	struct Bullet bullets[NUM_BULLETS];
	struct Comet comets[NUM_COMETS];

	//Allegro variables
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_FONT *font18 = NULL;

	//Initialization Functions
	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(WIDTH, HEIGHT);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();
	al_init_font_addon();
	al_init_ttf_addon();

	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / FPS);

	srand(time(NULL));
	InitShip(&ship);
	InitBullet(bullets, NUM_BULLETS);
	InitComet(comets, NUM_COMETS);
	
	font18 = al_load_font("/Users/pamela_fialho/Documents/GitHub/Listas_de_Exercicios_Programacao_em_Linguagem_C/atividade_expansao_dos_cometas/arial.ttf", 18, 0);

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_start_timer(timer);
	while(!done) {
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_TIMER) {
			redraw = true;
			if(keys[UP])
				MoveShipUp(&ship);
			if(keys[DOWN])
				MoveShipDown(&ship);
			if(keys[LEFT])
				MoveShipLeft(&ship);
			if(keys[RIGHT])
				MoveShipRight(&ship);
			if(keys[D])
				draw_debug_info(&ship, comets, NUM_COMETS, bullets, NUM_BULLETS, font18);

			if(!isGameOver) {
				UpdateBullet(bullets, NUM_BULLETS);
				StartComet(comets, NUM_COMETS);
				UpdateComet(comets, NUM_COMETS);
				CollideBullet(bullets, NUM_BULLETS, comets, NUM_COMETS, &ship);
				CollideComet(comets, NUM_COMETS, &ship);

				if(ship.lives <= 0) {
					isGameOver = true;
				}
			}
		}
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			done = true;
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch(ev.keyboard.keycode) {
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
			case ALLEGRO_KEY_D:
				if(keys[D]) {
					keys[D] = false;
				}
				else if(!keys[D]) {
					keys[D] = true;
				}
				break;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_UP) {
			switch(ev.keyboard.keycode) {
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
			case ALLEGRO_KEY_D:
				if(keys[D]) {
					keys[D] = true;
				}
				else if(!keys[D]) {
					keys[D] = false;
				}
				break;
			}
		}

		if(redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false; 

			if(!isGameOver) {
				DrawShip(&ship);
				DrawBullet(bullets, NUM_BULLETS);
				DrawComet(comets, NUM_COMETS);

				al_draw_textf(font18, al_map_rgb(255, 0, 255), 5, 5, 0, "Player has %i lives left. Player has destroyed %i objects", ship.lives, ship.score);
			}
			else {
				al_draw_textf(font18, al_map_rgb(0, 255, 255), WIDTH / 2, HEIGHT / 2, ALLEGRO_ALIGN_CENTRE, "Game Over. Final Score: %i", ship.score);
			}
		
			al_flip_display();
			al_clear_to_color(al_map_rgb(0,0,0));
		}
	}

	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_font(font18);
	al_destroy_display(display);						//destroy our display object

	return 0;
}

void draw_debug_info(struct SpaceShip *ship, struct Comet comets[], int cSize, struct Bullet bullet[], int bSize, ALLEGRO_FONT *font) {
	al_draw_textf(font, al_map_rgb(255, 255, 255), 5, 30, 0, "Ship x %i y %i lives %i", ship->x, ship->y, ship->lives);
	al_draw_textf(font, al_map_rgb(255, 255, 255), 5, 55, 0, "Bullet 0 1 2 3 4");
	for (int i=0; i<bSize; i++) {
		al_draw_textf(font, al_map_rgb(bullet[i].live?0:255, bullet[i].live?255:0, 0), 60+i*15, 80, ALLEGRO_ALIGN_CENTRE, "%c", bullet[i].live?'V':'F');
	}
	al_draw_textf(font, al_map_rgb(255, 255, 255), 5, 105, 0, "Comet 0 1 2 3 4 5 6 7 8 9");
	for (int j=0; j<cSize; j++) {
		al_draw_textf(font, al_map_rgb(comets[j].live?0:255, comets[j].live?255:0, 0), 68+j*15, 130, ALLEGRO_ALIGN_CENTRE, "%c", comets[j].live?'V':'F');
	}
}

void InitShip(struct SpaceShip *ship) {
	ship->x = WIDTH/2;
	ship->y = HEIGHT-20;
	ship->ID = PLAYER;
	ship->lives = 3;
	ship->speed = 7;
	ship->boundx = 6;
	ship->boundy = 7;
	ship->score = 0;
}
void DrawShip(struct SpaceShip *ship)
{
	al_draw_filled_rectangle(ship->x - 7, ship->y, ship->x - 9, ship->y - 10, al_map_rgb(255, 0, 0));
	al_draw_filled_rectangle(ship->x + 7, ship->y, ship->x + 9, ship->y - 10, al_map_rgb(255, 0, 0));

	al_draw_filled_triangle(ship->x - 17, ship->y + 12, ship->x, ship->y-12, ship->x + 17, ship->y + 12, al_map_rgb(0, 255, 0));
	al_draw_filled_rectangle(ship->x + 2, ship->y + 12, ship->x - 2, ship->y - 15, al_map_rgb(0, 0, 255));
}
void MoveShipUp(struct SpaceShip *ship) {
	ship->y -= ship->speed;
	if(ship->y < HEIGHT - 150) {
		ship->y = HEIGHT - 150;
	}
}
void MoveShipDown(struct SpaceShip *ship) {
	ship->y += ship->speed;
	if(ship->y > HEIGHT) {
		ship->y = HEIGHT;
	}
}
void MoveShipLeft(struct SpaceShip *ship) {
	ship->x -= ship->speed;
	if(ship->x < 0) {
		ship->x = 0;
	}
}
void MoveShipRight(struct SpaceShip *ship) {
	ship->x += ship->speed;
	if(ship->x > WIDTH) {
		ship->x = WIDTH;
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
			bullet[i].x = ship->x;
			bullet[i].y = ship->y - 17;
			bullet[i].live = true;
			break;
		}
	}
}
void UpdateBullet(struct Bullet bullet[], int size) {
	for(int i = 0; i < size; i++) {
		if(bullet[i].live) {
			bullet[i].y -= bullet[i].speed;
			if(bullet[i].y < 0) {
				bullet[i].live = false;
			}
		}
	}
}
void CollideBullet(struct Bullet bullet[], int bSize, struct Comet comets[], int cSize, struct SpaceShip *ship) {
	for(int i = 0; i < bSize; i++) {
		if(bullet[i].live) {
			for(int j =0; j < cSize; j++) {
				if(comets[j].live) {
					ship->boundx = comets[j].x/20;
					ship->boundy = comets[j].y/20;
					if(bullet[i].x > (comets[j].x - comets[j].boundx) &&
						bullet[i].x < (comets[j].x + comets[j].boundx) &&
						bullet[i].y > (comets[j].y - comets[j].boundy) &&
						bullet[i].y < (comets[j].y + comets[j].boundy)) {
						bullet[i].live = false;
						comets[j].live = false;
						ship->score++;
					}
				}
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
			al_draw_filled_circle(comets[i].x, comets[i].y, comets[i].y/10, al_map_rgb(rand() % 255, rand() % 255, rand() % 255));
		}
	}
}
void StartComet(struct Comet comets[], int size) {
	for(int i = 0; i < size; i++) {
		if(!comets[i].live) {
			if(rand() % 500 == 0) {
				comets[i].live = true;
				comets[i].x = 30 + rand() % (WIDTH - 60);
				comets[i].y = 0;
				break;
			}
		}
	}
}
void UpdateComet(struct Comet comets[], int size) {
	for(int i = 0; i < size; i++) {
		if(comets[i].live) {
			comets[i].y += comets[i].speed;
		}
	}
}
void CollideComet(struct Comet comets[], int cSize, struct SpaceShip *ship) {
	for(int i = 0; i < cSize; i++) {
		if(comets[i].live) {
			ship->boundx = comets[i].x/20;
			ship->boundy = comets[i].y/20;
			if(comets[i].x - comets[i].boundx < ship->x + ship->boundx &&
				comets[i].x + comets[i].boundx > ship->x - ship->boundx &&
				comets[i].y - comets[i].boundy < ship->y + ship->boundy &&
				comets[i].y + comets[i].boundy > ship->y - ship->boundy) {
				ship->lives--;
				comets[i].live = false;
			}
			else if(comets[i].x < 0) {
				comets[i].live = false;
				ship->lives--;
			}
		}
	}
}