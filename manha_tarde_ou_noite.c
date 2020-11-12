#define VPL_MOODLE
#include <stdio.h>
int main() {
    int hora, minutos;
    #ifndef VPL_MOODLE
    printf("Digite a hora e os minutos:");
    #endif
    scanf("%d %d", &hora, &minutos);
    if ((hora >= 6 && hora < 12 ) && (minutos >= 0 && minutos <= 59)) {
        printf("Manha\n");
    }
    if ((hora >= 12 && hora < 18) && (minutos >= 0 && minutos <= 59)) {
        printf("Tarde\n");
    }
    if (((hora >= 18 && hora <= 23) && (minutos >= 0 && minutos <= 59)) || ((hora < 6 && hora >= 0) && (minutos >= 0 && minutos <= 59))) {
        printf("Noite\n");
    }
    if (hora < 0 || hora > 23) {
        printf("Invalida\n");
    }
    if ((minutos < 0 || minutos > 59) && (hora >= 0 && hora <= 23)) {
        printf("Minuto invalido\n");
    }
return 0;
}