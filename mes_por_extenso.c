#define VPL_MOODLE
#include <stdio.h>

const char MExtenso[13][10] = {"inválido", "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

int main() {
    int mes;
    
    #ifndef VPL_MOODLE
    printf("Digite um número correspondente a um mês (1 a 12)\n");
    #endif
    scanf("%d",&mes);
    if ((mes>=1) && (mes<=12))  {
        printf("Você digitou o número: %s\n", MExtenso[mes]);
    }
    else  {
        printf("%s\n", MExtenso[0]);
    }

    return 0;
}