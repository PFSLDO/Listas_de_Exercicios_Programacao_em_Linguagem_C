#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, y;
    #ifndef VPL_MOODLE
    printf("Digite um valor inteiro para obter a tabuada:\n");
    #endif
    scanf("%d", &x);
    for (y = 1; y <= 10; y ++) {
        printf("%d x %d = %d\n", x, y, x*y);
    }
return 0;
}