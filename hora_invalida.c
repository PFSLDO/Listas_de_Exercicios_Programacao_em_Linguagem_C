#define VPL_MOODLE
#include <stdio.h>
int main() {
    int hora, minutos;
    #ifndef VPL_MOODLE
    printf("Digite a hora e os minutos:");
    #endif
    scanf("%d %d", &hora, &minutos);
    if (hora >= 6 && hora < 12) {
        printf("Manha\n");
    }
    if (hora >= 12 && hora < 18) {
        printf("Tarde\n");
    }
    if ((hora >= 18 && hora <= 23) || (hora < 6 && hora >= 0)) {
        printf("Noite\n");
    }
    if (hora < 0 || hora > 23) {
        printf("Invalida\n");
    }
return 0;
}