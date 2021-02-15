#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int image[10][10];
  int k, j;

  fprintf(fp, "P2\n");
  fprintf(fp, "10 10\n");
  fprintf(fp, "255\n");

  for(k=0; k<10; k++) {
    for(j=0; j<10; j++) {
      image[k][j];
      fprintf(fp, "%d", image[k][j]);
    }
  }
  return 0;
}