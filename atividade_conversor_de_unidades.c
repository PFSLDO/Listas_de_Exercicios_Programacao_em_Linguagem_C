/*****************************************
* Conversor de unidades
*
* Autor: Pamela Fialho
* Versão: 1.0
* IFSC - Florianópolis
******************************************/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  //Interface de menu
  int option; //Variável de controle do menu
  while (option < 1 || option > 2) //Mostra o menu até um número válido ser inserido
    {
      printf ("Escolha o conversor de unidades\n");
      printf ("Opção 1 - libra (lb) para quilograma (kg)\n");
      printf ("Opção 2 - milha (mi) para quilômetro (km)\n");
      
      scanf ("%d", &option);

      switch (option) {

        case 0: //Opção que faz voltar para o último while (menu)
          continue;
          break;

        case 1:
          printf ("Opção 1 foi escolhida: libra (lb) para quilograma (kg)\n");
          float lb, kg;
          printf("Digite um valor de massa em libra para ser convertido\n");
          scanf("%f", &lb);
          kg = lb / 2.20462;
          printf("%f libra(s) é(são) %f quilograma(s)\n", lb, kg);
          printf ("Caso queira realizar mais uma operação, volte ao menu principal digitando 0\n"); //Mostra a opção de voltar para o menu
          printf ("Para sair do programa, digite 100\n"); //Mostra a opção de parar o programa
          scanf ("%d", &option); //Lê a opção escolhida
          if (option == 100) //Sai do programa
          {
            exit(0);
          }
          break;

        case 2:
          printf ("Opção 2 foi escolhida: milha (mi) para quilômetro (km)\n");
          float mi, km;
          printf("Digite um valor de distância em milha para ser convertido\n");
          scanf("%f", &mi);
          km = mi * 1.609;
          printf("%f milha(s) é(são) %f quilômetro(s)\n", mi, km);
          printf ("Caso queira realizar mais uma operação, volte ao menu principal digitando 0\n"); //Mostra a opção de voltar para o menu
          printf ("Para sair do programa, digite 100\n"); //Mostra a opção de parar o programa
          scanf ("%d", &option); //Lê a opção escolhida
          if (option == 100) //Sai do programa
          {
            exit(0);
          }
          break;

        default:
          printf ("Opção inválida\n");
      }
    }
  return 0;
}