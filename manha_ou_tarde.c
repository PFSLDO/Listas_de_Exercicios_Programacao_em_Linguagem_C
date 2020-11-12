#define VPL_MOODLE
#include <stdio.h>
int main() {
    int hora;
    #ifndef VPL_MOODLE
    printf("Digite a hora:");
    #endif
    scanf("%d", &hora);
    if (hora >= 6 && hora < 12) {
        printf("Manha\n");
    }
    if (hora >= 12 && hora < 18) {
        printf("Tarde\n");
    }
    if (hora >= 18 || hora < 6) {
        printf("Noite\n");
    }
return 0;
}