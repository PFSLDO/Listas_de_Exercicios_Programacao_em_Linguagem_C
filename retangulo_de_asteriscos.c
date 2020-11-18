#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, y, z, a;
    #ifndef VPL_MOODLE
    printf("Digite dois valores inteiros para obter um retângulo de asteriscos com estes valores:\n");
    #endif
    scanf("%d %d", &x, &y);
    for(a = 1; a <= y; a ++) {
        for(z = 1; z <= x; z ++) {
            printf("*");
        }
        printf("\n");
        z = a;
    }
return 0;
}