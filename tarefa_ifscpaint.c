//Fix by Proximity 3.1
// http://fixbyproximity.com/2011/07/30/2d-game-dev-part-3-1-keyboard-input-part-1/
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>				//Our primitive header file
#include <allegro5/allegro_native_dialog.h>

int main(void) {
	//guarda o título da caixa de texto
    char tcaixa[50] = "INFORMAÇÕES";
    //o título da mensagem dentro da caixa
    char titulo[100] = "Fique por dentro dos comandos";
    //o conteúdo da mensagem exibida
    char texto[500] = "- Movimente-se com as setas do teclado;\n- Mude a cor do pincel utilizando as teclas R (vermelho), G (verde), B (azul) ou W (branco);\n- Você pode apagar o que foi feito clicando na tecla C, assim, seu pincel ficará na mesma cor do fundo;\n- Você pode aumentar (caps lock) ou diminuir (alt/option) o tamanho do seu pincel;\n- Sempre que precisar consulta os comandos, aperte F1 e esta aba irá aparecer.\n\nBOA PINTURA!\n";
    //mostra a caixa de texto

	int width = 640;
	int height = 480;
	int color[] = {255,255,255};
	int e = 0;

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
				case ALLEGRO_KEY_R:
					color[0] = 255;
					color[1] = 0;
					color[2] = 0;
					break;
				case ALLEGRO_KEY_G:
					color[0] = 0;
					color[1] = 255;
					color[2] = 0;
					break;
				case ALLEGRO_KEY_B:
					color[0] = 0;
					color[1] = 0;
					color[2] = 255;
					break;
				case ALLEGRO_KEY_W:
					color[0] = 255;
					color[1] = 255;
					color[2] = 255;
					break;
				case ALLEGRO_KEY_C:
					color[0] = 0;
					color[1] = 0;
					color[2] = 0;
					break;
				case ALLEGRO_KEY_ALT:
					e += 10;
					break;
				case ALLEGRO_KEY_CAPSLOCK:
					e -= 10;
					break;
				case ALLEGRO_KEY_F1:
					printf("%i",al_show_native_message_box(NULL,tcaixa,titulo,texto,NULL,ALLEGRO_MESSAGEBOX_OK_CANCEL));
					break;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_UP) {
			if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
				done = true;
			}
		}

		al_draw_filled_rectangle(pos_x+e, pos_y+e, pos_x + 30, pos_y + 30, al_map_rgb(color[0],color[1],color[2]));
		al_flip_display();
	}

	al_destroy_event_queue(event_queue);
	al_destroy_display(display);						//destroy our display object

	return 0;
}