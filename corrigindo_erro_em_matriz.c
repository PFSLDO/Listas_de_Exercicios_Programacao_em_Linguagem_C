#include <stdio.h>
#define LIN 3
#define COL 4

int main() {
  int t, i, M[LIN][COL];
  int matriz = 1;
    
  //preencher matriz
  for (t=0; t<LIN; t++) {
    for (i=0; i<COL; i++) {
      M[t][i] = matriz++;
    }
  }
  
  //mostrar matriz
  for (t=0; t<LIN; t++) {
    for (i=0; i<COL; i++) {
      printf ("%d ", M[t][i]);
    }
    printf("\n");
  }
  return(0);
}