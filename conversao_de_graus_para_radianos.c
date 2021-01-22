#define VPL_MOODLE
#include <stdio.h>
#include <math.h> // use M_PI
float grau2rad(float ang_grau) {
  float rad;
  rad = ang_grau * 0.01745328;
  return rad;
}

int main(void) {
  float angulo_graus;
  float angulo_radianos;
  #ifndef VPL_MOODLE
  printf("Conversor de graus para radianos\n");
  printf("Digite um ângulo em graus: ");
  #endif
  scanf("%f", &angulo_graus);
    
  angulo_radianos = grau2rad(angulo_graus);
    
  #ifndef VPL_MOODLE
  printf("Em radianos, esse ângulo é: ");
  #endif
  printf("%.6f", angulo_radianos);
    
  return 0;
}