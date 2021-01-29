#include <stdio.h>

void calc_area_comp(float raio, float *area, float *comprimento) {
  *comprimento = 2*3.14159265359*raio;
  *area = raio*raio*3.14159265359;
}

int main(void) {
  float r, a, c;
  printf("Digite o valor do raio\n");
  scanf("%f", &r);
  calc_area_comp(r, &a, &c);
  printf("Comprimento da circunferência: %f\nÁrea da circunferência: %f", c, a);
  return 0;
}