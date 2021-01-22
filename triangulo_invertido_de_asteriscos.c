#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, y, z;
    #ifndef VPL_MOODLE
    printf("Digite um valor inteiro para obter um triângulo invertido de asteriscos com este valor:\n");
    #endif
    scanf("%d", &x);
    for (y = x; y >= 1; y --) {
        for (z = 1; z <= y; z ++) {
            printf("*");
        }
        printf("\n");
    }
return 0;
}