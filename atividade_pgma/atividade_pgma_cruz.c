#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char NOME_ARQ[] = "image.pgm";

int main(void) {

  int image[11][10];
  int k, j;
  FILE *fileptr;

  fileptr = fopen(NOME_ARQ, "a");
  if (fileptr == NULL) {
    printf ("Erro ao criar o arquivo.\n");
    return 0;
  }

  fprintf(fileptr, "P2\n");
  fprintf(fileptr, "11 10\n");
  fprintf(fileptr, "255\n");

  for(k=0; k<10; k++) {
    for(j=0; j<11; j++) {
      if(j==5) {
        image[k][j] = 255;
      }
      else if(k==6) {
        image[k][j] = 255;
      }
      else {
        image[k][j] = 0;
      }
      fprintf(fileptr, "%d ", image[k][j]);
    }
  }

  fclose(fileptr);
  return 0;
}