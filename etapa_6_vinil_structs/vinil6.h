// O define seguinte serve para desativar saída de conferência de dados no VPL (ifndef)
// É necessário para executar a avaliação automática
// Para usar fora da avaliação automática, troque por:
// #undef AVALIA_VPL_MOODLE
#undef AVALIA_VPL_MOODLE

#include <stdio.h>

struct Vinil {
    char nome[20];
    int ano;
    float preco;
};

void le_dados_teclado(struct Vinil *vi);

int verifica_mais_antigo(const struct Vinil vi[], int tamanho_vetor);

int verifica_mais_caro(const struct Vinil vi[], int tamanho_vetor);