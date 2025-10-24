# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio de Xadrez - MateCheck

Bem-vindo ao desafio de Xadrez da MateCheck! Este projeto tem como objetivo testar e determinar os limites de utilização do código dentro do jogo utilizando estruturas de repetição e funções avançadas.

## Níveis do Desafio

### 🏅 Nível Novato

A equipe de testes da MateCheck recebeu uma solicitação para determinar os limites de utilização do código dentro do jogo. Para isso, a equipe de programação solicitou o envio de blocos de código contendo loops (estruturas de repetição) para avaliação de desempenho e possibilidades de aplicação.

**Movimentação das Peças:**
- Bispo: 5 casas na diagonal superior direita
- Torre: 5 casas para a direita
- Rainha: 8 casas para a esquerda

No jogo, apenas possuímos movimentação para quatro direções, mas o Bispo se mexe na diagonal. Com isso, foi adicionada uma condição para movimentação dessa peça, em que, para movê-lo, utilizamos o comando `printf` e, em seu valor, colocamos a direção usando a combinação de direções básicas. 

**Requisitos Funcionais:**
1. **Entrada de Dados:**
   - Os valores necessários devem ser inseridos manualmente a partir de variáveis dentro do código.
   - Será permitido o uso de constantes para facilitar a escrita do código e evitar repetição de valores.
2. **Estruturas de Repetição:**
   - Os códigos precisam ser desenvolvidos utilizando estruturas de repetição.
3. **Saída de Dados:**
   # Documentação detalhada — Nível Mestre

   Esta página contém apenas a documentação do **Nível Mestre** implementado em `xadrez.c`.

   Objetivo: substituir as implementações simples por funções recursivas para as peças que usavam loops simples (Bispo, Torre, Rainha) e implementar uma movimentação de Cavalo que use loops avançados com múltiplas variáveis/condições, incluindo `continue` e `break`.

   Arquivos relevantes:
   - `xadrez.c` — funções recursivas para Bispo, Torre e Rainha; função `cavalo_mestre` com loops avançados.

   1) Bispo — recursão + loops aninhados

   O Bispo foi implementado como uma função recursiva `bispo_recursivo(int passos, int atual)` que imprime cada passo na diagonal "Cima Direita" e chama a si mesma até alcançar o número de passos. Dentro da recursão há um exemplo de loops aninhados (mesmo com iterações mínimas) para atender ao requisito que pede loops aninhados na movimentação do Bispo.

   Trecho ilustrativo:

   ```c
   void bispo_recursivo(int passos, int atual) {
       if (atual > passos) return;
       for (int a = 0; a < 1; ++a) {
           for (int b = 0; b < 1; ++b) {
               printf("  Passo %d: Cima Direita\n", atual);
           }
       }
       bispo_recursivo(passos, atual + 1);
   }
   ```

   2) Torre e Rainha — funções recursivas simples

   As movimentações da Torre e da Rainha foram trocadas por funções recursivas que imprimem cada passo e chamam a si mesmas até o término.

   Trechos ilustrativos:

   ```c
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
   ```

   3) Cavalo (Mestre) — loops avançados, `continue` e `break`

   O Cavalo no nível Mestre executa 1 movimento em 'L' para cima e para a direita. A função `cavalo_mestre` demonstra loops com múltiplas variáveis/condições e utiliza `continue` e `break` para controlar o fluxo dos loops:

   - `continue` é usado numa iteração extra do loop vertical para demonstrar pulo de iteração.
   - `break` é usado numa iteração horizontal que poderia exceder o necessário e interrompe quando atinge o número de passos horizontais desejado.

   Trecho ilustrativo (resumido):

   ```c
   void cavalo_mestre(void) {
       const int VERT = 2; // passos para cima
       const int HOR = 1;  // passos para a direita
       for (int up = 1; up <= VERT + 1; ++up) {
           if (up == VERT + 1) continue; // demonstra continue
           printf("  Passo: Cima\n");
       }
       for (int h = 1; h <= 10; ++h) {
           if (h > HOR) break; // demonstra break
           printf("  Passo: Direita\n");
       }
   }
   ```

   Exemplo de saída gerada pelo programa (trecho do Nível Mestre):

   ```
   Nível Mestre - Movimentação das Peças

   Bispo (recursivo): 5 casas na diagonal direita para cima
     Passo 1: Cima Direita
     Passo 2: Cima Direita
     Passo 3: Cima Direita
     Passo 4: Cima Direita
     Passo 5: Cima Direita

   Torre (recursiva): 5 casas para a direita
     Passo 1: Direita
     Passo 2: Direita
     Passo 3: Direita
     Passo 4: Direita
     Passo 5: Direita

   Rainha (recursiva): 8 casas para a esquerda
     Passo 1: Esquerda
     Passo 2: Esquerda
     Passo 3: Esquerda
     Passo 4: Esquerda
     Passo 5: Esquerda
     Passo 6: Esquerda
     Passo 7: Esquerda
     Passo 8: Esquerda

   Cavalo (Mestre): 1 movimento em 'L' (cada L = 2 cima + 1 direita)
     Movimento 1 - Passo 1.1: Cima
     Movimento 1 - Passo 1.2: Cima
     Movimento 1 - Passo 1.3: Direita
   ```

   Notas e sugestões:
   - A implementação atual é voltada ao objetivo pedagógico (mostrar recursão e controle de loops). Para avançar, podemos modelar um tabuleiro real (matriz 8x8) e aplicar validações de limites/colisões.

   ---
As movimentações da Torre e da Rainha foram trocadas por funções recursivas que imprimem cada passo e chamam a si mesmas até o término.

Trechos ilustrativos:

```c
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
```

3) Cavalo (Mestre) — loops avançados, `continue` e `break`

O Cavalo no nível Mestre executa 1 movimento em 'L' para cima e para a direita. A função `cavalo_mestre` demonstra loops com múltiplas variáveis/condições e utiliza `continue` e `break` para controlar o fluxo dos loops:

- `continue` é usado numa iteração extra do loop vertical para demonstrar pulo de iteração.
- `break` é usado numa iteração horizontal que poderia exceder o necessário e interrompe quando atinge o número de passos horizontais desejado.

Trecho ilustrativo (resumido):

```c
void cavalo_mestre(void) {
      const int VERT = 2; // passos para cima
      const int HOR = 1;  // passos para a direita
      for (int up = 1; up <= VERT + 1; ++up) {
            if (up == VERT + 1) continue; // demonstra continue
            printf("  Passo: Cima\n");
      }
      for (int h = 1; h <= 10; ++h) {
            if (h > HOR) break; // demonstra break
            printf("  Passo: Direita\n");
      }
}
```

Exemplo de saída gerada pelo programa (trecho do Nível Mestre):

```
Nível Mestre - Movimentação das Peças

Bispo (recursivo): 5 casas na diagonal direita para cima
   Passo 1: Cima Direita
   Passo 2: Cima Direita
   Passo 3: Cima Direita
   Passo 4: Cima Direita
   Passo 5: Cima Direita

Torre (recursiva): 5 casas para a direita
   Passo 1: Direita
   Passo 2: Direita
   Passo 3: Direita
   Passo 4: Direita
   Passo 5: Direita

Rainha (recursiva): 8 casas para a esquerda
   Passo 1: Esquerda
   Passo 2: Esquerda
   Passo 3: Esquerda
   Passo 4: Esquerda
   Passo 5: Esquerda
   Passo 6: Esquerda
   Passo 7: Esquerda
   Passo 8: Esquerda

Cavalo (Mestre): 1 movimento em 'L' (cada L = 2 cima + 1 direita)
   Movimento 1 - Passo 1.1: Cima
   Movimento 1 - Passo 1.2: Cima
   Movimento 1 - Passo 1.3: Direita
```

Notas e sugestões:
- A implementação atual é voltada ao objetivo pedagógico (mostrar recursão e controle de loops). Para avançar, podemos modelar um tabuleiro real (matriz 8x8) e aplicar validações de limites/colisões.

---
