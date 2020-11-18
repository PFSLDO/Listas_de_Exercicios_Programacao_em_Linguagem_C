#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, y;
    #ifndef VPL_MOODLE
    printf("Digite um valor inteiro para obter uma linha de asteriscos com essa quantia:\n");
    #endif
    scanf("%d", &x);
    for (y = 1; y <= x; y ++) {
        printf("*");
    }
return 0;
}