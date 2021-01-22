#include <stdio.h>
#include <stdint.h>

int main(void) {
    int32_t va1=410000000, va2=320000000, va3;
    va3 = va1+va2;
    printf("1. Resultado de %ld + %ld = %ld\n", va1, va2, va3);

    int64_t vu1=3700000000, vu2=4200000000, vu3;
    vu3 = vu1+vu2;
    printf("2. Resultado de %ld + %ld = %ld\n", vu1, vu2, vu3);

    return 0;
}