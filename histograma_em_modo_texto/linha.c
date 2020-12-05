/****************************************************************
* Função desenha_linha(int n, char c)
* Entradas:
*   número de caracteres
*   caractere a desenhar
* Saída:
*    em tela, imprime n caracteres
* Retorno:
*    nenhum
*****************************************************************/

#include <stdio.h>

void desenha_linha(int n, char ch) {
    int i;

    for (i = 0; i < n; i ++) {
        printf("%c", ch);
    }
}