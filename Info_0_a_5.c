#define VPL_MOODLE
#include <stdio.h>
int main() {
    int option;
    #ifndef VPL_MOODLE
    printf ("Digite um número de 0 a 5\n");
    #endif
    scanf ("%d", &option);
    switch (option) {

        case 0:
        case 2:
            printf ("par\n");
            break;

        case 3:
        case 5:
            printf ("primo\n");
            break;

        case 1:
        case 4:
            printf ("quadrado perfeito\n");
            break;

        default:
            printf ("invalido\n");
            break;
    }
return 0;
}