#define VPL_MOODLE
#include <stdio.h>

void desenha_linha(int n, char c);
void histograma(int vet[], int tam, char c);

int main(void) {
    int vetor[50];
    int tam, i;
    char caractere;

    #ifndef VPL_MOODLE
    printf("Histograma em modo texto\n");
    printf("Quantos valores você vai digitar?\n");
    #endif

    scanf("%d", &tam);
    
    if (tam < 1 || tam > 50) {
        printf("Desculpe. Erro na entrada.");
        return -1;
    }

    #ifndef VPL_MOODLE
    printf("Agora digite os valores:");
    #endif

    for (i = 0; i < tam; i ++) {
        scanf("%d", &vetor[i]);
    }
    
    #ifndef VPL_MOODLE
    printf("Qual caractere você quer na visualização? ");
    #endif
    
    scanf("\n%c", &caractere);
    
    histograma(vetor, tam, caractere); //chamada da função
    
    return 0;
}