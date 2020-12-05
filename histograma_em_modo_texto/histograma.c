/****************************************************************
* Função histograma(int vet[], int tam, char c)
* Entradas:
*   vetor com valores inteiros
*   tamanho do vetor
*   caractere a desenhar
* Saída:
*    histograma em modo texto
*    (chama função desenha_linha para cada linha)
* Retorno:
*    nenhum
*****************************************************************/

#include <stdio.h>

void desenha_linha(int n, char c);

void histograma(int vet[], int tam, char c) {
    int i;

    for (i = 0; i < tam; i ++) {
        desenha_linha(vet[i], c);
        printf("\n");
    }
}