/* Etapa 4*/

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

int verifica_mais_antigo(int vi_ano[], int tamanho_vetor) {
  int k;
  int ano_mais_antigo=vi_ano[0];
  int indice_mais_antigo=0;
  for (k=0; k<tamanho_vetor; k++) {
    if (vi_ano[k]<ano_mais_antigo) {
      indice_mais_antigo = k;
      ano_mais_antigo = vi_ano[k];
    }
  }
  return indice_mais_antigo;
}

int verifica_mais_caro(float vi_preco[], int tamanho_vetor) {
  int k;
  float preco_mais_caro=vi_preco[0];
  int indice_mais_caro=0;
  for (k=0; k<tamanho_vetor; k++) {
    if (vi_preco[k]>preco_mais_caro) {
      indice_mais_caro = k;
      preco_mais_caro = vi_preco[k];
    }
  }
  return indice_mais_caro;
}

int main (void) {
// organizacao ("estrutura") dos dados
  char vinil_nome[4][20];
  int vinil_ano[4];
  float vinil_preco[4];
  int mais_antigo, mais_caro, k;

// leitura de dados
  for (k=0; k<4; k++) {
    le_dados_teclado(vinil_nome[k], &vinil_ano[k], &vinil_preco[k]);
  }

// Verifica qual é o mais antigo
  mais_antigo = verifica_mais_antigo(vinil_ano, 4);
  printf("O vinil mais antigo eh: %s, do ano de %d\n", vinil_nome[mais_antigo], vinil_ano[mais_antigo]);

// Verifica qual é o mais caro
  mais_caro = verifica_mais_caro(vinil_preco, 4);
  printf("O vinil mais caro eh: %s, com preco de %.2f\n", vinil_nome[mais_caro], vinil_preco[mais_caro]);

  return 0;
}