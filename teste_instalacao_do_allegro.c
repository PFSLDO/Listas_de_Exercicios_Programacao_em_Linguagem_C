// TRÊS CONFIGURAÇÕES
// 1. PROJECT/BUILD OPTIONS/SEARCH DIRECTORIES ->  C:\ALLEGRO\INCLUDE
// 2. PROJECT/BLUID OPTIONS/LINKER SETTINGS/LINK LIBRARIES -> C:\ALLEGRO\LIB\liballegro_monolith.dll.a
// 3. FORA DO ALLEGRO, COPIAR C:\ALLEGRO\BIN\allegro_monolith-5.2.dll PARA DENTRO DA PASTA DO PROJETO

//Fix by Proximity 3.1
// http://fixbyproximity.com/2011/07/30/2d-game-dev-part-3-1-keyboard-input-part-1/
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>				//Our primitive header file

int main(void) {
	int width = 640;
	int height = 480;

	bool done = false;
	int pos_x = width / 2;
	int pos_y = height / 2;

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;

	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(width, height);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();

	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_keyboard_event_source());

	while(!done)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch(ev.keyboard.keycode)
			{
				case ALLEGRO_KEY_UP:
					pos_y -= 10;
					break;
				case ALLEGRO_KEY_DOWN:
					pos_y += 10;
					break;
				case ALLEGRO_KEY_RIGHT:
					pos_x += 10;
					break;
				case ALLEGRO_KEY_LEFT:
					pos_x -= 10;
					break;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_UP)
		{
			if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
				done = true;
		}
		al_draw_filled_circle(pos_x, pos_y, 50, al_map_rgb(255,194,34));
		al_flip_display();
		al_clear_to_color(al_map_rgb(135,206,235));
	}

	al_destroy_event_queue(event_queue);
	al_destroy_display(display);						//destroy our display object

	return 0;
}