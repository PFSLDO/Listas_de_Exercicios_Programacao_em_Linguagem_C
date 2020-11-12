#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, hundred, fifty, ten, five;
    #ifndef VPL_MOODLE
    printf("Digite um valor inteiro múltiplo de 5:\n");
    #endif
    scanf("%d", &x);
    if (x%5 != 0) {
        printf("Invalido\n");
    }
    if (x%5 == 0) {
        hundred = x / 100;
        x = x - hundred * 100;
        if (x / 10 >= 5) {
            fifty = 1;
        }
        else fifty = 0;
        x = x - fifty * 50;
        ten = x/10;
        x = x - ten * 10;
        five = x / 5;
        printf("%d %d %d %d\n", hundred, fifty, ten, five);
    }
return 0;
}