#define VPL_MOODLE
#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    char sobrenome[30];
    char nomecompleto[30];
    int i, y;
    
    #ifndef VPL_MOODLE
    printf("Digite o nome: ");
    #endif
    fgets(nome, sizeof(nome), stdin); // fgets consegue ler espaços. Problema é que lê o enter
    nome[strlen(nome)-1] = '\0'; // para retirar o enter capturado com fgets
    
    #ifndef VPL_MOODLE
    printf("Digite o sobrenome: ");
    #endif
    fgets(sobrenome, sizeof(sobrenome), stdin); // fgets consegue ler espaços. Problema é que lê o enter
    sobrenome[strlen(sobrenome)-1] = '\0'; // para retirar o enter capturado com fgets

    for (i = 0; i <= strlen(nome) - 1; i++) {
        nomecompleto[i] = nome[i];
    }
    nomecompleto[i] = ' ';
    
    for (y = strlen(nome) + 1; y <= strlen(sobrenome) + strlen(nome); y++) {
        nomecompleto[y] = sobrenome[y - strlen(nome) - 1];
    }
    
    printf("%s\n", nomecompleto);
    return 0;
}