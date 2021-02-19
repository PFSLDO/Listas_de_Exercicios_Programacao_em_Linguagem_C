/* Struct 5 Ponteiros na Função cálculo da distância*/

// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#define AVALIA_VPL_MOODLE

#include <stdio.h>
#include "struct5.h"

int main (void) {
  struct Ponto2D pA; // cria a instância
  struct Retangulo ret; // cria a instância

// leitura de dados
  scanf("%f", &pA.x);
  scanf("%f", &pA.y);

  scanf("%f", &ret.pse.x);
  scanf("%f", &ret.pse.y);

  scanf("%f", &ret.pid.x);
  scanf("%f", &ret.pid.y);

// apresentacao dos dados
  printf ("Ponto A: (%.2f,%.2f)\n", pA.x, pA.y);
  printf ("Retangulo: canto S.E. (%.2f,%.2f)\n", ret.pse.x, ret.pse.y);
  printf ("Retangulo: canto I.D. (%.2f,%.2f)\n", ret.pid.x, ret.pid.y);

  float d = distancia_pontos(&pA, &ret.pse);
  printf("A distancia entre o ponto A e o canto superior esquerdo do retangulo: %.2f\n", d);    

  d = distancia_pontos(&ret.pse, &ret.pid);
  printf("A diagonal do retangulo: %.2f\n", d);  

  return 0;
}

