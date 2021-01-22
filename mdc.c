#include <stdio.h>

int mdc(long int n1, long int n2) {
    int result = n1%n2;

    while (result != 0) {
        n1 = n2;
        n2 = result;
        result = n1%n2;
    }

    return n2;
}

int main(void) {
    long int num1, num2, resultado;

    scanf("%ld %ld", &num1, &num2);

    resultado = mdc(num1, num2);
    printf("%ld", resultado);
    return 0;
}