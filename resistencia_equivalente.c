#define VPL_MOODLE
#include <stdio.h>
#include <string.h>

float resistencia_equiv(float r1, float r2, char tipo) {
  float result;

  if (tipo == 's') {
    result = r1 + r2;
    return result;
  }
  if (tipo == 'p') {
    result = (r1 * r2) / (r1 + r2);
    return result;
  }
  else result = -1;
  return result;
}

int main(void) {
  float res1, res2, req;
  char tipoconv;
  #ifndef VPL_MOODLE
  printf("Calculadora de resistência equivalente\n");
  printf("Digite s para série ou p para paralelo:\n");
  #endif
  scanf("%c", &tipoconv);

  #ifndef VPL_MOODLE
  printf("Agora, digite os 2 valores de resistência:\n");
  #endif
  scanf("%f", &res1);
  scanf("%f", &res2);
    
  req = resistencia_equiv(res1, res2, tipoconv);

  if (req == -1) {
    printf("conversão inválida\n");
    return -1;
  }

  #ifndef VPL_MOODLE
  printf("A resistência equivalente é: ");
  #endif
  printf("%.2f", req);
    
  return 0;
}