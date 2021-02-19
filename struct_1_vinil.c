/* Struct 1 Vinil*/

// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#define AVALIA_VPL_MOODLE

#include <stdio.h>

// organizacao ("estrutura") dos dados
// usando STRUCT

struct Vinil {
    char nome[20]; 
    int ano;
    float preco;
};

int main (void)
{
  struct Vinil vi1; // cria a instância vi1

// leitura de dados
  scanf("%19s", &vi1.nome); // lembrar que com scanf não é possível colocar espaço na string
  scanf("%d", &vi1.ano);
  scanf("%f", &vi1.preco);

// apresentacao dos dados
  printf ("Nome: %s\n", vi1.nome);
  printf ("Ano: %d\n", vi1.ano);
  printf ("Preco: %.2f", vi1.preco);

  return 0;
}
