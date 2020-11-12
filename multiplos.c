#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, y;
    #ifndef VPL_MOODLE
    printf("Digite dois números inteiros:");
    #endif
    scanf("%d %d", &x, &y);
    if (x%y == 0 || y%x == 0) {
        printf("Multiplos\n");
    }
    else {
        printf("NAO multiplos\n");
    }
return 0;
}