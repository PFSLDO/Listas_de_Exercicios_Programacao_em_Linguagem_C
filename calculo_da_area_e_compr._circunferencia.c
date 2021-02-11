#define VPL_MOODLE
#include <stdio.h>

void calc_area_comp(float raio, float *area, float *comprimento) {
  *comprimento = 2*3.14159265359*raio;
  *area = raio*raio*3.14159265359;
}

int main(void) {
  float r, a, c;
  #ifndef VPL_MOODLE
  printf("Digite o raio:\n");
  #endif
  scanf("%f", &r);
  calc_area_comp(r, &a, &c);
  #ifndef VPL_MOODLE
  printf("A área e o comprimento são, respectivamente, ");
  #endif
  printf("%.2f %.2f", a, c);
  return 0;
}