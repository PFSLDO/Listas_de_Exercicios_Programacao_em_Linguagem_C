//Fonte do arquivo csv usado para leitura de dados: https://thingspeak.com/channels/935349
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char NOME_ARQ[] = "concentration.csv";

int main() {
    int n, ig;
    float c, max;
    char date[50], maxdate[50];
    FILE  *fileptr;
    char texto[100];
    
    fileptr = fopen(NOME_ARQ, "r");
    if (fileptr == NULL) {
        printf ("Erro ao abrir o arquivo.\n");
        return 0;
    }
    while(1) {
        fgets(texto, sizeof(texto),fileptr);
        n=fscanf(fileptr, "%[^,], %d, %f", &date[0], &ig, &c);
        if (n==EOF) {
            break;
        }
        if (c>max) {
            max = c;
            strcpy(maxdate, date);
        }
    }
    fclose(fileptr);
    printf("A data na qual ocorreu o evento com maior valor foi %s\n", maxdate);
    return 0;
}