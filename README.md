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
   - O sistema deve exibir os resultados de cada procedimento de forma clara e legível.

**Requisitos Não Funcionais:**
1. **Performance:**
   - O sistema deve executar os cálculos e apresentar os resultados sem atrasos perceptíveis.
2. **Documentação:**
   - O código deve ser bem documentado, incluindo comentários detalhados sobre a função de cada parte do código.
3. **Manutenibilidade:**
   - O código deve ser escrito de forma clara, empregando nomes de variáveis que permitam o fácil entendimento.

**Instruções Detalhadas:**
1. **Entrada de Dados:**
   - Inclua a biblioteca padrão de entrada e saída no início do seu programa.
   - Declare variáveis constantes para definir os valores a serem comparados dentro das estruturas condicionais.
2. **Estruturas de Repetição:**
   - Utilize cada uma das diferentes estruturas de repetição apresentadas.
3. **Saída:**
   - As saídas deverão ser mostradas de forma clara e organizada, com a direção da peça.

**Nomenclatura:**

printf("Cima\n");
printf("Baixo\n");
printf("Esquerda\n");
printf("Direita\n");

### 🏅 Nível Aventureiro
Agora que já conseguimos mover as peças mais simples usando loops, os desenvolvedores pediram para elaborar os loops de outra forma. Para o desafio, moveremos o cavalo, que possui sua movimentação em L. O cavalo deve se movimentar para baixo e para a esquerda, usando pelo menos duas estruturas de repetição: uma deve ser for e a outra pode ser while ou do-while.

**Movimentação do Cavalo:**

Mover o cavalo em L utilizando loops aninhados.
Obs: É obrigatório o uso de loops aninhados.

### 🥇 Nível Mestre
Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por **funções recursivas**, e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

**Movimentação das Peças:**

**Bispo**: 5 casas na diagonal direita para cima
**Torre**: 5 casas para a direita
**Rainha**: 8 casas para a esquerda
**Cavalo**: 1 vez em L para cima à direita
Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

Ao concluir este desafio, você terá um conhecimento mais profundo de estruturas complexas e elaboradas, amplamente utilizadas no mercado de trabalho. Boa sorte e boa programação!

Equipe de Ensino - MateCheck

## Como este README está organizado

Este README foi expandido para explicar, passo a passo, a lógica implementada no código fonte (`xadrez.c`) para o **Nível Novato**, além de fornecer instruções de compilação, saída esperada e sugestões de extensão para os níveis seguintes.

Estrutura do documento:
- Visão geral do desafio
- Explicação detalhada do Nível Novato (variáveis, loops e saídas)
- Como compilar e executar
- Exemplo de saída esperada
- Sugestões para continuar (Aventureiro / Mestre)

---

## Documentação detalhada — Nível Novato

O objetivo do Nível Novato é demonstrar o uso de constantes e estruturas de repetição para simular movimentos simples de peças de xadrez.

Arquivos relevantes:
- `xadrez.c` — implementa a simulação do Nível Novato.

Lógica aplicada no `xadrez.c` (explicação linha-a-linha / seção-a-seção):

1) Declaração de constantes

```c
const int BISPO_PASSOS = 5;
const int TORRE_PASSOS = 5;
const int RAINHA_PASSOS = 8;
```

- Por que constantes?: facilitem a leitura e a manutenção do código. Se for necessário alterar quantas casas cada peça se move, basta atualizar essas constantes.

2) Cabeçalho de execução

```c
printf("Nível Novato - Movimentação das Peças\\n\\n");
```

- Objetivo: informar ao usuário qual parte do exercício está sendo executada.

3) Movimentação do Bispo

O bispo se move em diagonal. No exercício simplificamos a direção para "cima" + "direita".

```c
printf("Bispo: %d casas na diagonal superior direita\\n", BISPO_PASSOS);
for (i = 1; i <= BISPO_PASSOS; ++i) {
      printf("  Passo %d: Cima Direita\\n", i);
}
```

- Explicação: usamos um `for` para iterar do passo 1 até `BISPO_PASSOS`. Em cada iteração imprimimos uma linha descrevendo o passo e a direção combinada "Cima Direita".

4) Movimentação da Torre

```c
printf("Torre: %d casas para a direita\\n", TORRE_PASSOS);
for (i = 1; i <= TORRE_PASSOS; ++i) {
      printf("  Passo %d: Direita\\n", i);
}
```

- Explicação: a torre se move em linha reta — aqui simulada apenas para a direção "Direita". Novamente, um `for` controla o número de passos.

5) Movimentação da Rainha

```c
printf("Rainha: %d casas para a esquerda\\n", RAINHA_PASSOS);
for (i = 1; i <= RAINHA_PASSOS; ++i) {
      printf("  Passo %d: Esquerda\\n", i);
}
```

- Explicação: a rainha combina movimentos da torre e do bispo; no Nível Novato simulamos apenas a movimentação para a esquerda.

6) Observações sobre design

- Simplicidade intencional: o exercício foca no uso de loops; não há um tabuleiro nem verificação de colisões.
- Saída textual: cada linha descreve um passo, o que facilita leitura por humanos e testes automatizados.

---

## Como compilar e executar

Para compilar e executar localmente (GNU/Linux / macOS), use o GCC. Esses comandos também funcionam no terminal do container de desenvolvimento:

```bash
gcc -Wall -Wextra -o xadrez xadrez.c
./xadrez
```

- `-Wall -Wextra` ativa avisos úteis do compilador para manter a qualidade do código.

## Exemplo de saída esperada (Nível Novato)

Ao executar o programa, a saída no terminal deve ser semelhante a:

```
Nível Novato - Movimentação das Peças

Bispo: 5 casas na diagonal superior direita
   Passo 1: Cima Direita
   Passo 2: Cima Direita
   Passo 3: Cima Direita
   Passo 4: Cima Direita
   Passo 5: Cima Direita

Torre: 5 casas para a direita
   Passo 1: Direita
   Passo 2: Direita
   Passo 3: Direita
   Passo 4: Direita
   Passo 5: Direita

Rainha: 8 casas para a esquerda
   Passo 1: Esquerda
   Passo 2: Esquerda
   Passo 3: Esquerda
   Passo 4: Esquerda
   Passo 5: Esquerda
   Passo 6: Esquerda
   Passo 7: Esquerda
   Passo 8: Esquerda
```

---

## Próximos passos (sugestões de implementação)

- Nível Aventureiro (Cavalo): implementar movimento em 'L' usando loops aninhados (ex.: `for` aninhado combinando deslocamento vertical e horizontal). O README do nível pede que o cavalo se mova para baixo e para a esquerda.
- Nível Mestre: substituir as simulações simples por funções recursivas para o Bispo e usar loops com múltiplas variáveis/condições para o Cavalo; incluir `continue` e `break` para demonstrar controle avançado de loop.

Dicas de implementação:
- Para o Cavalo, pense em representar um pequeno padrão de deslocamentos (ex.: deltaX, deltaY) e iterar sobre esse conjunto com loops aninhados.
- Para recursão do Bispo, a função pode receber os passos restantes e imprimir a direção até chegar a zero.

### Documentação detalhada — Nível Aventureiro (Cavalo)

Nesta seção descrevemos em detalhes como o Nível Aventureiro foi implementado em `xadrez.c`.

Objetivo: simular movimentos em 'L' do cavalo, seguindo a especificação do desafio (movimentar para baixo e para a esquerda), e usar pelo menos dois tipos de loops aninhados — no caso, um `for` e um `while`.

Estrutura usada no código:

- Constantes:

```c
const int CAVALO_MOVIMENTOS = 2; /* número de movimentos em 'L' */
const int CAVALO_PASSOS_BAIXO = 2; /* passos verticais (para baixo) por movimento em 'L' */
```

- Lógica (resumo):
   1. Um `for` externo itera sobre cada movimento em 'L' que o cavalo deve executar.
   2. Para cada movimento do `for`, um `while` interno executa os passos verticais "Baixo" (2 passos neste exemplo).
   3. Após os passos verticais, o código imprime um passo horizontal "Esquerda" para completar o 'L'.

Trecho de código (explicativo) presente em `xadrez.c`:

```c
printf("Cavalo: %d movimentos em 'L' (cada L = %d baixo + 1 esquerda)\\n", CAVALO_MOVIMENTOS, CAVALO_PASSOS_BAIXO);
int mov;
for (mov = 1; mov <= CAVALO_MOVIMENTOS; ++mov) {
      int passos_baixo = CAVALO_PASSOS_BAIXO;
      int seq = 1;
      while (passos_baixo > 0) {
            printf("  Movimento %d - Passo %d.%d: Baixo\\n", mov, mov, seq);
            passos_baixo--;
            seq++;
      }
      printf("  Movimento %d - Passo %d.%d: Esquerda\\n", mov, mov, seq);
}
```

Explicações adicionais:
- Por que `for` + `while`?: O enunciado pede o uso de pelo menos duas estruturas de repetição diferentes e aninhadas. O `for` serve para controlar quantos movimentos (unidades em 'L') serão feitos. O `while` demonstra controle de condição variável dentro do movimento.
- Como adaptar para outro padrão?: Alterando `CAVALO_PASSOS_BAIXO` você muda quantos passos verticais ocorrem antes da transição horizontal. Alterando `CAVALO_MOVIMENTOS` você controla quantos 'L' serão executados.
- Simplicidade e finalidade pedagógica: a implementação é intencionalmente textual e linear para focar no uso de loops aninhados; não há representação de um tabuleiro nem checagem de limites ou colisões.

Exemplo de saída gerada pelo programa (trecho):

```
Cavalo: 2 movimentos em 'L' (cada L = 2 baixo + 1 esquerda)
   Movimento 1 - Passo 1.1: Baixo
   Movimento 1 - Passo 1.2: Baixo
   Movimento 1 - Passo 1.3: Esquerda
   Movimento 2 - Passo 2.1: Baixo
   Movimento 2 - Passo 2.2: Baixo
   Movimento 2 - Passo 2.3: Esquerda
```

Notas de extensão:
- Para uma modelagem mais realista, poderíamos representar o tabuleiro como uma matriz 8x8 e aplicar os deslocamentos do cavalo validando limites e colisões.
- Outra variação é usar `do-while` no lugar do `while` para demonstrar essa estrutura específica.

## Testes rápidos

- Teste manual: compilar e executar, validar que o número de linhas corresponde às constantes declaradas.
- Teste automatizado simples: redirecionar saída para um arquivo e usar `grep -c "Passo"` para contar o número total de passos e compará-lo com o esperado.

## Contribuição

Se quiser que eu estenda a solução para os níveis Aventureiro ou Mestre, com testes e pequenas funções auxiliares, responda qual nível prefere implementar em seguida. Posso também abrir um branch e preparar um PR com a implementação e testes básicos.

---

Equipe de Ensino - MateCheck
