#include <stdio.h>
#include <stdint.h>

int main(void) {
    int8_t vi1=15, vi2=27, vi3;
    vi3 = vi1+vi2;
    printf("1. Resultado de %d + %d = %d\n", vi1, vi2, vi3);
    printf("1. Tamanho das variáveis: %d bytes\n", sizeof(vi3));
    
    int16_t vo1=127, vo2=120, vo3;
    vo3 = vo1+vo2;
    printf("2. Resultado de %d + %d = %d\n", vo1, vo2, vo3);
    
    return 0;
}