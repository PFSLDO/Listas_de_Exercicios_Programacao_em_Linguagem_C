#include <stdio.h>

float fahr2celsius(float tf); 

int main() {
    FILE  *fileptr;
    fileptr = fopen("dados_temperatura_thingspeak.csv", "r");
    if (fp == NULL) {
    printf ("Erro ao abrir o arquivo.\n"); exit(1);
    }
    printf ("Arquivo aberto com sucesso.\n"); fclose (fp);
    // Ler arquivo dados_temperatura_thingspeak.csv
    // Verificar qual maior temperatura e qual menor
    // Converter para Fahrenheit usando função
    // Mostrar
    
    //printf("Maior temperatura: %.2f F = %.2f C",);
    //printf("Menor temperatura: %.2f F = %.2f C",);
    return 0;
}