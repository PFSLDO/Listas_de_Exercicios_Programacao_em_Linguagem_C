#define VPL_MOODLE
#include <stdio.h>

int greg2rd(int ano, int mes, int dia);

int main(void) {
    int ano, mes, dia, dia_rd;
    #ifndef VPL_MOODLE
    printf("Conversor de calendários\n");
    printf("gregoriano para RD (rata die, Reingold & Dershowitz)\n");
    printf("Digite o ano, mês e dia: ");
    #endif
    scanf("%d %d %d", &ano, &mes, &dia);
    
    dia_rd = greg2rd(ano, mes, dia);
    
    #ifndef VPL_MOODLE
    printf("Em RD, é o dia: ");
    #endif
    printf("%d", dia_rd);
    
    return 0;
}