#define VPL_MOODLE
#include <stdio.h>
#include <string.h>

int main() {
    char texto[20];
    char reverso[20];
    int i = 0, y;

    #ifndef VPL_MOODLE
    printf("Digite um texto: ");
    #endif
    scanf("%19s", texto); //scanf não lê espaços. Em outro exercício, usamos fgets
    while (texto[i] != '\0') {
        i++;
    }
    for (y = 0; y <= i; y++) {
        reverso[y] = texto [i - y - 1];
    }
    if (strcmp (texto, reverso) == 0) {
        printf("%s é um palindromo\n", texto);
        return 0;
    }
    printf("%s não é um palíndromo\n", texto);
    return 0;
}