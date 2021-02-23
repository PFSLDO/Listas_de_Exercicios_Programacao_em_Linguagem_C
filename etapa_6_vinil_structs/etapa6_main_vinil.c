/* Etapa 6*/

#define NUM_MAX_DISCOS 8

#include "vinil6.h"

int main (void) {
// organizacao ("estrutura") dos dados
  struct Vinil vi[NUM_MAX_DISCOS];
  int mais_antigo, mais_caro, k;
  int ncolunas, nlinha, num_discos_lidos;
  int opcao_entrada;
  char nome_arquivo[30];
  FILE *fptr;

// leitura de dados
  scanf("%d", &opcao_entrada);
  switch (opcao_entrada) {
    case 1:
      for (k=0; k<NUM_MAX_DISCOS; k++) {
        le_dados_teclado(&vi[k]);
      }
      num_discos_lidos = NUM_MAX_DISCOS;
      break;
    case 2:
      scanf("%29s", nome_arquivo);

      fptr = fopen(nome_arquivo, "r");
      if (!fptr) {
        printf("Erro ao abrir arquivo %s\n", nome_arquivo);
        return -1;
      }
      nlinha=0;
      while (nlinha<NUM_MAX_DISCOS) {
        ncolunas = fscanf(fptr, "%[^,],%d,%f\n", &vi[nlinha].nome, &vi[nlinha].ano, &vi[nlinha].preco);
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
  mais_antigo = verifica_mais_antigo(vi, num_discos_lidos);
  printf("O vinil mais antigo eh: %s, do ano de %d\n", vi[mais_antigo].nome, vi[mais_antigo].ano);

  // Verifica qual é o mais caro
  mais_caro = verifica_mais_caro(vi, num_discos_lidos);
  printf("O vinil mais caro eh: %s, com preco de %.2f\n", vi[mais_caro].nome, vi[mais_caro].preco);

return 0;
}