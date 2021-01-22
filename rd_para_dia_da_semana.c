/****************************************************************************
* Para escrever os dias da semana por extenso, use a mesma ideia do
* exercício que você já fez aqui no Moodle 26/11: Mês por extenso
* Use uma matriz para guardar o mapeamento número -> texto (dia da semana)
*****************************************************************************/
#define VPL_MOODLE
#include <stdio.h>
#include <string.h>

void rd2weekday(int rd, char lang[]) {

int l;
const char matriz[28][14] = {"domingo", "segunda-feira", "terça-feira", "quarta-feira", "quinta-feira", "sexta-feira", "sábado", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "domingo", "lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "igandea", "lastelehena", "asteartea", "asteazkena", "osteguna", "ostirala", "larunbata"};

    if (strcmp (lang, "pt") == 0) {
        l = 0;
    }
    if (strcmp (lang, "en") == 0) {
        l = 1;
    }
    if (strcmp (lang, "es") == 0) {
        l = 2;
    }
    if (strcmp (lang, "ba") == 0) {
        l = 3;
    }
    
    printf("%s\n", matriz[7*l+(rd%7)]);
}


int main(void) {
    int dia_rd;
    char codigo_lingua[3]; //dois caracteres + \0

    #ifndef VPL_MOODLE
    printf("Calculadora de dia da semana\n");
    printf("Digite um dia RD: ");
    #endif
    scanf("%d", &dia_rd);
    
    #ifndef VPL_MOODLE
    printf("Em que língua você quer o resultado?\n");
    printf("Digite um código de duas letras: ");
    #endif
    scanf("%2s", &codigo_lingua);

    rd2weekday(dia_rd, codigo_lingua); //chamada da função
    
    return 0;
}