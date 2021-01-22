#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, y, z, a, i;
    #ifndef VPL_MOODLE
    printf("Digite um valor inteiro para obter uma árvore de natal de asteriscos com este valor:\n");
    #endif
    scanf("%d", &x);
    printf("\n");
    for (y = 1; y <= (2*x)-1; y = y + 2) {
        for (a = -0.5*y + (2*x)/2; a >= 1; a = a - 1) {
            printf(" ");
        }
        for (z = 1; z <= y; z++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= (2*x/2)-2; i ++) {
        printf(" ");
    }
    printf("***\n");
return 0;
}