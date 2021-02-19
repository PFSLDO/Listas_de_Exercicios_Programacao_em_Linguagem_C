/* Struct 3 Função com struct*/

// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#define AVALIA_VPL_MOODLE

#include <stdio.h>
#include <math.h>

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

/* Recebe dois pontos e calcula distância (Euclidiana) entre eles
 * Entrada: duas instâncias da struct Ponto2D (com campos float x e y)
 * Retorno: valor da distância (double)
*/
double distancia_pontos(struct Ponto2D p1, struct Ponto2D p2) {
    float d = sqrt(((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y)));
    return d;
}

int main (void) {

  struct Ponto2D pA; // cria a instância
  struct Retangulo ret; // criar a instância

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

  float d = distancia_pontos(pA, ret.pse);
  printf("A distancia entre o ponto A e o canto superior esquerdo do retangulo: %.2f\n", d);    

  d = distancia_pontos(ret.pse, ret.pid);
  printf("A diagonal do retangulo: %.2f", d);    

  return 0;
}