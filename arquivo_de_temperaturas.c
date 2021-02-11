#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char NOME_ARQ[] = "dados_temperatura_thingspeak.csv";

void fahr2celsius(float mif, float maf, float *mic, float *mac) {
    *mic = (mif - 32) * 5/9;
    *mac = (maf - 32) * 5/9;
}

int main() {
    int h, m, n;
    float t, minf=80, maxf=0, minc, maxc;
    FILE  *fileptr;
    char texto[100];
    
    fileptr = fopen(NOME_ARQ, "r");
    if (fileptr == NULL) {
        printf ("Erro ao abrir o arquivo.\n");
        return 0;
    }
    while(1) {
        fgets(texto, sizeof(texto),fileptr);
        n=fscanf(fileptr, "%d, %d, %f", &h, &m, &t);
        if (n==EOF) {
            break;
        }
        if (t<minf) {
            minf = t;
        }
        if (t>maxf) {
            maxf = t;
        }
        //printf("Hora: %d Minuto: %d Temperatura: %f \n", h, m, t);
       
    }
    fclose(fileptr);
    fahr2celsius(minf, maxf, &minc, &maxc);
    printf("Maior temperatura: %.2f F = %.2f C\n", maxf, maxc);
    printf("Menor temperatura: %.2f F = %.2f C\n", minf, minc);
    return 0;
}