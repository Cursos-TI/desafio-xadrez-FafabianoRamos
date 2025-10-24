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

    /* Nível Aventureiro - Movimentação do Cavalo (movimento em 'L')
     * Requisito: utilizar loops aninhados; um deles deve ser `for` e o outro
     * pode ser `while` ou `do-while`. O cavalo se moverá para baixo e para a esquerda.
     *
     * Estratégia aqui (simples e didática):
     * - Cada movimento em 'L' é composto por 2 passos para baixo seguidos de 1 passo para a esquerda.
     * - Usamos um `for` externo para controlar quantos movimentos em 'L' serão realizados
     *   (variável CAVALO_MOVIMENTOS).
     * - Dentro do `for` usamos um `while` para executar os 2 passos 'para baixo' (loop aninhado).
     */

    const int CAVALO_MOVIMENTOS = 2; /* número de movimentos em 'L' que o cavalo fará */
    const int CAVALO_PASSOS_BAIXO = 2; /* passos verticais (para baixo) por movimento em 'L' */

    printf("Cavalo: %d movimentos em 'L' (cada L = %d baixo + 1 esquerda)\n", CAVALO_MOVIMENTOS, CAVALO_PASSOS_BAIXO);
    int mov;
    for (mov = 1; mov <= CAVALO_MOVIMENTOS; ++mov) {
        /* loop aninhado: while para os passos verticais */
        int passos_baixo = CAVALO_PASSOS_BAIXO;
        int seq = 1;
        while (passos_baixo > 0) {
            printf("  Movimento %d - Passo %d.%d: Baixo\n", mov, mov, seq);
            passos_baixo--;
            seq++;
        }
        /* após os passos para baixo, faz 1 passo para a esquerda */
        printf("  Movimento %d - Passo %d.%d: Esquerda\n", mov, mov, seq);
    }
    printf("\n");

    return 0;
}
