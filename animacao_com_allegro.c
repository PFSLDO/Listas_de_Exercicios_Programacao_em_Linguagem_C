// Enterprise

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>				//Our primitive header file

int main(void) {
	int width = 600;
	int height = 480;
	int w = 640;
	int h = 480;
	int i, v, x, y, k;

	ALLEGRO_DISPLAY *display = NULL;

	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(w, h);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();

	while(1) {
		//estrelas
		for (i=0; i<50; i++) {
			al_clear_to_color(al_map_rgb(0,0,0));
			v = rand() % 7 + 1;
			x = rand() % 640;
			y = rand() % 480;
			al_draw_filled_circle(x+v, y, 1, al_map_rgb(255,255,255));
		}
		if (x>w) {
			x = 0;
		}

		//enterprise
		al_draw_filled_triangle(width/2 + 65, height/2 - 16, width/2 + 65, height/2 - 21, width/2 + 70, height/2 - 18.5, al_map_rgb(255,111,156)); //fogo de cima
		al_draw_filled_triangle(width/2 + 65, height/2 + 16, width/2 + 65, height/2 + 21, width/2 + 70, height/2 + 18.5, al_map_rgb(255,111,156)); //fogo de baixo
		al_draw_filled_circle(width/2 + 28, height/2 - 18.5, 3, al_map_rgb(255,127,0)); //parte de cima turbina de cima
		al_draw_filled_circle(width/2 + 28, height/2 + 18.5, 3, al_map_rgb(255,127,0)); //parte de cima turbina de baixo
		al_draw_filled_rectangle(width/2 + 28, height/2 - 21, width/2 + 65, height/2 - 16, al_map_rgb(200,200,200)); //turbina de cima
		al_draw_filled_rectangle(width/2 + 28, height/2 + 16, width/2 + 65, height/2 + 21, al_map_rgb(200,200,200)); //turbina de baixo
		al_draw_filled_rectangle(width/2 + 33, height/2 - 16, width/2 + 36, height/2 + 16, al_map_rgb(180,180,180)); //conexao das turbinas
		al_draw_line(width/2 + 33, height/2 - 13, width/2 + 36, height/2 - 13, al_map_rgb(130,130,130), 3);
		al_draw_line(width/2 + 33, height/2 - 8, width/2 + 36, height/2 - 8, al_map_rgb(130,130,130), 3);
		al_draw_line(width/2 + 33, height/2 + 8, width/2 + 36, height/2 + 8, al_map_rgb(130,130,130), 3);
		al_draw_line(width/2 + 33, height/2 + 13, width/2 + 36, height/2 + 13, al_map_rgb(130,130,130), 3);
		al_draw_filled_rounded_rectangle(width/2 + 20, height/2 - 4, width/2 + 40, height/2 + 4, 10, 1, al_map_rgb(200,200,200)); //conexao das traseiras com o circulo
		al_draw_filled_circle(width/2, height/2, 25, al_map_rgb(218,218,218)); //corpo circulo
		al_draw_filled_ellipse(width/2, height/2, 5, 3, al_map_rgb(200,200,200)); //detahe do circulo
	
		al_flip_display();
		al_rest(0.005);
		al_clear_to_color(al_map_rgb(0,0,0));
	}

	al_destroy_display(display);						//destroy our display object

	return 0;
}