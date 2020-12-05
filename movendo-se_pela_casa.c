#define VPL_MOODLE
#include <stdio.h>

enum {RUA, SALA, QUARTO, COZINHA}; //Uma forma de representar números inteiros com um "apelido": RUA = 0, SALA = 1...

int main() {
  int state = RUA;
  char event;

  while (1) {
    #ifndef VPL_MOODLE
    printf("\nVocê está em %d. Para onde você quer ir? ", state);
    #else
    printf("%d\n", state);
    #endif
    scanf(" %c", &event); //Espaco na frente para consumir o 'enter'

    switch (state) {

      case RUA:
        if (event == 'S') {
          state = SALA;
          break;
        }
        if (event == 'F') {
          return 0;
        }
      break;

      case SALA:
        if (event == 'S') {
          state = COZINHA;
          break;
        }
        if (event == 'L') {
          state = QUARTO;
          break;
        }
        if (event == 'N') {
          state = RUA;
          break;
        }
      break;

      case COZINHA:
        if (event == 'O') {
          state = SALA;
          break;
        }
        if (event == 'L') {
          state = QUARTO;
          break;
        }
      break;

      case QUARTO:
        if (event == 'S') {
          state = COZINHA;
          break;
        }
        if (event == 'O') {
          state = SALA;
          break;
        }
      break;
    }
  }
  return 0;
}