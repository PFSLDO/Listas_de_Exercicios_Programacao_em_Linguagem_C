#define VPL_MOODLE
#include <stdio.h>

int max_vet(int vet[], int tam) {
  int maior = vet[0];
  int i;

  for (i = 1; i < tam; i ++) {
    if (vet[i] > maior) {
      maior = vet[i];
    }
  }
  return maior;
}

int main(void) {
  int vetor[50], tam, valor_max, i;
    
  #ifndef VPL_MOODLE
  printf("Encontrando o valor máximo em um vetor\n");
  printf("Quantos valores você vai digitar?\n");
  #endif
  scanf("%d", &tam);
  if (tam < 1 || tam > 50) {
    printf("Desculpe. Erro na entrada.");
    return -1;
  }

  #ifndef VPL_MOODLE
  printf("Agora digite os valores:\n");
  #endif

  for (i = 0; i < tam; i ++) {
    scanf("%d", &vetor[i]);
  }
    
  valor_max = max_vet(vetor, tam); //chamada da função
    
  #ifndef VPL_MOODLE
  printf("O maior valor é:\n");
  #endif
  printf("%d", valor_max);
    
  return 0;
}