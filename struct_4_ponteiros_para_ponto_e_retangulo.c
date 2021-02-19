/* Struct 4 Ponteiros para Ponto e Retangulo*/

// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#define AVALIA_VPL_MOODLE

#include <stdio.h>

// organizacao ("estrutura") dos dados
// usando STRUCT
struct Ponto2D {
    float x; 
    float y;
};

struct Retangulo {
    struct Ponto2D pse;
    struct Ponto2D pid;
};


int main (void) {
  struct Ponto2D pA; // cria a instância
  struct Retangulo ret; // criar a instância
  
  struct Ponto2D *ptrpA = &pA;
  struct Retangulo *ptrret = &ret;

// leitura de dados
  scanf("%f", &pA.x);
  scanf("%f", &pA.y);

  scanf("%f", &ret.pse.x);
  scanf("%f", &ret.pse.y);

  scanf("%f", &ret.pid.x);
  scanf("%f", &ret.pid.y);

// apresentacao dos dados (para conferir se entrada está ok)
  printf ("Ponto A: (%.2f,%.2f)\n", ptrpA->x, ptrpA->y);
  printf ("Retangulo: canto S.E. (%.2f,%.2f)\n", ptrret->pse.x, ptrret->pse.y);
  printf ("Retangulo: canto I.D. (%.2f,%.2f)\n", ptrret->pid.x, ptrret->pid.y);

  return 0;
}
