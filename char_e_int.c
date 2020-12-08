#include <stdio.h>

int main(void) {
    char vc1=52, vc2=43, vc3;
    vc3 = vc1+vc2;
    printf("1. Resultado de %d + %d = %d\n", vc1, vc2, vc3);
    printf("1. Tamanho das variáveis: %d byte(s)\n", sizeof(vc3));

    unsigned char vi1=101, vi2=127, vi3;
    vi3 = vi1+vi2;
    printf("2. Resultado de %d + %d = %d\n", vi1, vi2, vi3);

    return 0;
}