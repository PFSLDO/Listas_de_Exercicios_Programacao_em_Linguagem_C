/*Etapa 1*/

// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#define AVALIA_VPL_MOODLE

#include <stdio.h>
int main (void) {
// organizacao ("estrutura") dos dados
  char vinil1_nome[20], vinil2_nome[20];
  int vinil1_ano, vinil2_ano;
  float vinil1_preco, vinil2_preco;

// leitura de dados
  scanf("%19s", &vinil1_nome); // lembrar que com scanf não é possível colocar espaço na string
  scanf("%d", &vinil1_ano);
  scanf("%f", &vinil1_preco);
  scanf("%19s", &vinil2_nome); // lembrar que com scanf não é possível colocar espaço na string
  scanf("%d", &vinil2_ano);
  scanf("%f", &vinil2_preco);
  
// Verifica qual é o mais antigo
  if (vinil1_ano < vinil2_ano) {
      printf ("%s eh mais antigo que %s", vinil1_nome, vinil2_nome);
  }
  else {
      printf ("%s eh mais antigo que %s", vinil2_nome, vinil1_nome);
  }
  return 0;
}