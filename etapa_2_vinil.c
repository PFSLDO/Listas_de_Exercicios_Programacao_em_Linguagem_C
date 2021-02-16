/* Etapa 2*/

// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#define AVALIA_VPL_MOODLE

#include <stdio.h>
#include <string.h>

void le_dados_teclado(char *nome, int *ptr_ano, float *ptr_preco) {
  scanf("%19s", &*nome); // lembrar que com scanf não é possível colocar espaço na string
  scanf("%d", &*ptr_ano);
  scanf("%f", &*ptr_preco);
}

int verifica_mais_antigo(int v1_ano, int v2_ano) {
  int retorno=0;
  if (v1_ano < v2_ano) {
    retorno=1;
  }
  else {
    retorno=2;
  }
  return retorno;
}

int main (void) {
  // organizacao ("estrutura") dos dados
  char vinil1_nome[20], vinil2_nome[20];
  int vinil1_ano, vinil2_ano;
  float vinil1_preco, vinil2_preco;
  int mais_antigo;

  // leitura de dados
  le_dados_teclado(&vinil1_nome[0], &vinil1_ano, &vinil1_preco);
  le_dados_teclado(&vinil2_nome[0], &vinil2_ano, &vinil2_preco);
  // Verifica qual é o mais antigo
  mais_antigo = verifica_mais_antigo(vinil1_ano, vinil2_ano);

  if (mais_antigo==1) {
    printf ("%s eh mais antigo que %s", vinil1_nome, vinil2_nome);
  }
  else {
    printf ("%s eh mais antigo que %s", vinil2_nome, vinil1_nome);
  }
  return 0;
}