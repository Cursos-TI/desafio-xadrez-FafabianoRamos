#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/*
 * Funções para o Nível Mestre
 * - Bispo: função recursiva que imprime os passos na diagonal (cima + direita).
 *   A função também demonstra o uso de loops aninhados dentro da recursão
 *   (requisito do nível Mestre).
 * - Torre e Rainha: funções recursivas simples que imprimem seus passos.
 */

void bispo_recursivo(int passos, int atual) {
    if (atual > passos) return;

    /* loops aninhados (mesmo que com poucas iterações) para demonstrar
     * a combinação de recursão + loops aninhados exigida pelo enunciado.
     */
    int a, b;
    for (a = 0; a < 1; ++a) {
        for (b = 0; b < 1; ++b) {
            printf("  Passo %d: Cima Direita\n", atual);
        }
    }

    /* chamada recursiva para o próximo passo */
    bispo_recursivo(passos, atual + 1);
}

void torre_recursiva(int passos, int atual) {
    if (atual > passos) return;
    printf("  Passo %d: Direita\n", atual);
    torre_recursiva(passos, atual + 1);
}

void rainha_recursiva(int passos, int atual) {
    if (atual > passos) return;
    printf("  Passo %d: Esquerda\n", atual);
    rainha_recursiva(passos, atual + 1);
}

/* Implementação do Cavalo no Nível Mestre: loops com múltiplas variáveis e
 * condições, demonstrando o uso de `continue` e `break`. O cavalo fará um
 * movimento em 'L' para cima e para a direita.
 */
void cavalo_mestre(void) {
    const int CAVALO_MESTRE_MOVS = 1; /* 1 movimento em 'L' */
    const int VERT = 2; /* passos para cima */
    const int HOR = 1;  /* passos para a direita */

    printf("Cavalo (Mestre): %d movimento em 'L' (cada L = %d cima + %d direita)\n", CAVALO_MESTRE_MOVS, VERT, HOR);

    for (int mv = 1; mv <= CAVALO_MESTRE_MOVS; ++mv) {
        /* loop com múltiplas variáveis/condições e uso de continue */
        for (int up = 1; up <= VERT + 1; ++up) {
            /* demonstrar continue em uma iteração extra */
            if (up == VERT + 1) {
                /* pule essa iteração extra (não é um passo válido) */
                continue;
            }
            printf("  Movimento %d - Passo %d.%d: Cima\n", mv, mv, up);
        }

        /* loop demonstrando break: iteramos mais vezes, mas interrompemos
         * quando alcançamos o número de passos horizontais desejado.
         */
        for (int h = 1; h <= 10; ++h) {
            if (h > HOR) break; /* interrompe após atingir HOR */
            printf("  Movimento %d - Passo %d.%d: Direita\n", mv, mv, VERT + h);
        }
    }
    printf("\n");
}

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

    /* Nível Mestre - Funções Recursivas e Movimentações Avançadas */
    /*
     * Substituímos as simulações simples por versões recursivas e adicionamos
     * uma movimentação do Cavalo mais avançada (para cima + direita) que usa
     * contornos de loop e demonstra `continue` e `break`.
     */
    printf("Nível Mestre - Movimentação das Peças\n\n");

    /* Bispo recursivo com loops aninhados conforme requisito */
    printf("Bispo (recursivo): %d casas na diagonal direita para cima\n", BISPO_PASSOS);
    bispo_recursivo(BISPO_PASSOS, 1);
    printf("\n");

    /* Torre recursiva */
    printf("Torre (recursiva): %d casas para a direita\n", TORRE_PASSOS);
    torre_recursiva(TORRE_PASSOS, 1);
    printf("\n");

    /* Rainha recursiva */
    printf("Rainha (recursiva): %d casas para a esquerda\n", RAINHA_PASSOS);
    rainha_recursiva(RAINHA_PASSOS, 1);
    printf("\n");

    /* Cavalo Mestre: 1 movimento em L para cima e para a direita */
    cavalo_mestre();

    return 0;
}
