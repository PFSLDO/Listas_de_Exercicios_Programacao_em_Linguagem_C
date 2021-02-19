/* Etapa 5*/

// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#define AVALIA_VPL_MOODLE

#define NUM_DISCOS 8

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

int main (void)
{
// organizacao ("estrutura") dos dados
  char vinil_nome[NUM_DISCOS][20];
  int vinil_ano[NUM_DISCOS];
  float vinil_preco[NUM_DISCOS];
  int mais_antigo, mais_caro, k;
  int ncolunas, nlinha, num_discos_lidos;
  int opcao_entrada;
  char nome_arquivo[30];
  FILE *fptr;

// leitura de dados
  scanf("%d", &opcao_entrada);
  switch (opcao_entrada) {
    case 1: //cadastro manual
      for (k=0; k<NUM_DISCOS; k++) {
        le_dados_teclado(vinil_nome[k], &vinil_ano[k], &vinil_preco[k]);
      }
      num_discos_lidos = NUM_DISCOS;
      break;
    case 2: //leitura de arquivo
      scanf("%29s", nome_arquivo);
      fptr = fopen(nome_arquivo, "r");
      if (fptr == NULL) {
        printf("Erro ao abrir arquivo %s\n", nome_arquivo);
        return -1;
      }
      nlinha=0;
      while (nlinha<NUM_DISCOS) {
        ncolunas = fscanf(fptr, "%[^,],%d,%f\n", &vinil_nome[nlinha], &vinil_ano[nlinha], &vinil_preco[nlinha]);
        if (ncolunas==EOF) {
          break;
        }
        nlinha++;
      }
      num_discos_lidos = nlinha;
      printf("Foram lidos dados de %d discos\n", num_discos_lidos);
      break;

    default:
      printf("Opção inválida.\n");
      return 0;
  }

// Verifica qual é o mais antigo
  mais_antigo = verifica_mais_antigo(vinil_ano, num_discos_lidos);
  printf("O vinil mais antigo eh: %s, do ano de %d\n", vinil_nome[mais_antigo], vinil_ano[mais_antigo]);

// Verifica qual é o mais caro
  mais_caro = verifica_mais_caro(vinil_preco, num_discos_lidos);
  printf("O vinil mais caro eh: %s, com preco de %.2f\n", vinil_nome[mais_caro], vinil_preco[mais_caro]);

  return 0;
}