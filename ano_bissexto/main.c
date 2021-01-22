#define VPL_MOODLE
#include <stdio.h>

int verifica_bissexto(int ano);

int main(void) {
    int ano;

    #ifndef VPL_MOODLE
    printf("Verificador de ano bissexto\n");
    printf("Digite um ano:\n");
    #endif
    scanf("%d", &ano);
    
    #ifndef VPL_MOODLE
    printf("Resultado:\n");
    #endif

    if (verifica_bissexto(ano) == 0) {
        printf("N");
        return 0;
    }
    if (verifica_bissexto(ano) == 1) {
        printf("S");
        return 0;
    }
}