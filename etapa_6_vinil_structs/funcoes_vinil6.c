#include "vinil6.h"

void le_dados_teclado(struct Vinil *vi) {
  scanf("%19s", vi->nome);
  scanf("%d", vi->ano);
  scanf("%f", vi->preco);
}

int verifica_mais_antigo(const struct Vinil vi[], int tamanho_vetor) {
  int k;
  int ano_mais_antigo=vi[0].ano;
  int indice_mais_antigo=0;
  for (k=0; k<tamanho_vetor; k++) {
    if (vi[k].ano<ano_mais_antigo) {
      indice_mais_antigo = k;
      ano_mais_antigo = vi[k].ano;
    }
  }
  return indice_mais_antigo;
}

int verifica_mais_caro(const struct Vinil vi[], int tamanho_vetor) {
  int k;
  float preco_mais_caro=vi[0].preco;
  int indice_mais_caro=0;
  for (k=0; k<tamanho_vetor; k++) {
    if (vi[k].preco>preco_mais_caro) {
      indice_mais_caro = k;
      preco_mais_caro = vi[k].preco;
    }
  }
  return indice_mais_caro;
}
