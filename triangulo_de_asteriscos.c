#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, y, z;
    #ifndef VPL_MOODLE
    printf("Digite um valor inteiro para obter um triângulo de asteriscos com este valor:\n");
    #endif
    scanf("%d", &x);
    for (y = 1; y <= x; y = y + 1) {
        for (z = 1; z <= y; z = z + 1) {
            printf("*");
        }
        printf("\n");
    }
return 0;
}