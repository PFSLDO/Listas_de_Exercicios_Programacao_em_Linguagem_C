#include <avr/io.h>
#include <util/delay.h>
#define SET_BIT(p,bit) ((p)|=(1<<(bit)))
#define CLR_BIT(p,bit) ((p)&=~(1<<(bit)))
#define TST_BIT(p,bit) ((p)&(1<<(bit)))
#define CPL_BIT(p,bit) ((p)^=(1<<(bit)))
#define SELECAO PB1

int main(void) {
	DDRD = 0b11111111; //habilita todos os PDs como saída
    PORTD = 0b11111111; //define todos os leds como apagados; resistor de pull-up habilitado em todos os pinos
    DDRB = 0b11111100; //habilita os dois botões como entrada
    PORTB = 0b11111111; //resistor de pull-up habilitado em todos os pinos PBs
    while(1) {
      	if(!TST_BIT(PINB,SELECAO)) {
            PORTD = PORTD << 1; //desloca bit
            SET_BIT(PORTD,PORTD); //acende o led decorrente do deslocamento anterior
            if(PORTD == 0b11111111) { //acende o primeiro led quando todos estiverem apagados
                PORTD = 0b11111110;
            }
          	if(PORTD == 0b01111110) { //correção de bug causado pela condição anterior; sem a correção, o primeiro led acende quando o último ainda está aceso, por causa do deslocamento de bit
                PORTD = 0b01111111;
            }
            _delay_ms(100);
    	}
  	}
}