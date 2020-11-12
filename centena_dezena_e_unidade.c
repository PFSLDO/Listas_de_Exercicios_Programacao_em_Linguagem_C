#define VPL_MOODLE
#include <stdio.h>
int main() {
    int x, u, d, c;
    #ifndef VPL_MOODLE
    printf("Digite um valor inteiro até 999:");
    #endif
    scanf("%d", &x);
    u = x % 10;
    x = x - (x % 10);
    d = (x / 10) % 10;
    x = (x / 10) - d;
    c = x / 10;
    printf("%d %d %d", c, d, u);
return 0;
}