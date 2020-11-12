#define VPL_MOODLE
#include <stdio.h>

int main() {
    int x, y;
    #ifndef VPL_MOODLE
    printf("Digite os valores de x e de y:");
    #endif
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
        printf("x e y zero\n");
    }
    else if (x == 0) {
        printf("soh x zero\n");
    }
    else printf("x nao zero\n");
return 0;
}