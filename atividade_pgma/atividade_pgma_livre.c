#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char NOME_ARQ[] = "image.pgm";

int main(void) {

  int image[20][20];
  int k, j;
  float d = 1, c = 1;
  FILE *fileptr;

  fileptr = fopen(NOME_ARQ, "a");
  if (fileptr == NULL) {
    printf ("Erro ao criar o arquivo.\n");
    return 0;
  }

  fprintf(fileptr, "P2\n");
  fprintf(fileptr, "20 20\n");
  fprintf(fileptr, "255\n");

  for(k=0; k<20; k++) {
    for(j=0; j<21; j++) {
      if(j==10) {
        image[k][j] = 255/c;
        c = c + 0.5;
      }
      else {
        image[k][j] = 255/d;
        d = d + 0.5;
      }
      fprintf(fileptr, "%d ", image[k][j]);
    }
    d = 1;
  }

  fclose(fileptr);
  return 0;
}