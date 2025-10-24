#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    /*
     * Nível Novato - Movimentação das Peças
     *
     * Requisitos (conforme README):
     *  - Bispo: 5 casas na diagonal superior direita
     *  - Torre: 5 casas para a direita
     *  - Rainha: 8 casas para a esquerda
     *
     * Os movimentos devem ser simulados usando estruturas de repetição
     * e imprimir as direções usando as strings básicas: Cima, Baixo, Esquerda, Direita
     */

    const int BISPO_PASSOS = 5;
    const int TORRE_PASSOS = 5;
    const int RAINHA_PASSOS = 8;

    int i;

    printf("Nível Novato - Movimentação das Peças\n\n");

    /* Movimentação do Bispo: diagonal para cima e para a direita */
    printf("Bispo: %d casas na diagonal superior direita\n", BISPO_PASSOS);
    for (i = 1; i <= BISPO_PASSOS; ++i) {
        /* combinação de direções básicas em uma única saída */
        printf("  Passo %d: Cima Direita\n", i);
    }
    printf("\n");

    /* Movimentação da Torre: para a direita */
    printf("Torre: %d casas para a direita\n", TORRE_PASSOS);
    for (i = 1; i <= TORRE_PASSOS; ++i) {
        printf("  Passo %d: Direita\n", i);
    }
    printf("\n");

    /* Movimentação da Rainha: para a esquerda */
    printf("Rainha: %d casas para a esquerda\n", RAINHA_PASSOS);
    for (i = 1; i <= RAINHA_PASSOS; ++i) {
        printf("  Passo %d: Esquerda\n", i);
    }
    printf("\n");

    return 0;
}
