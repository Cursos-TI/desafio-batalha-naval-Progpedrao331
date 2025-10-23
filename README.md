# Batalha Naval em C - Nível Mestre

Este é o projeto final da série de desafios de Batalha Naval, implementado em C. O programa constrói um tabuleiro 10x10, posiciona navios e, em seguida, sobrepõe três habilidades especiais (Cone, Cruz e Octaedro) com um formato customizado de 3x5 (3 linhas por 5 colunas).

Este código demonstra um alto nível de organização, utilizando **funções** para modularizar o código, tornando-o limpo, reutilizável e fácil de ler.

## Descrição

O programa executa as seguintes tarefas em ordem:

1.  **Inicializa um Tabuleiro 10x10:** Preenche uma matriz 10x10 com `0` (Água).
2.  **Posiciona 4 Navios:** Adiciona 4 navios de 3 casas (`3`) ao tabuleiro (horizontal, vertical e duas diagonais).
3.  **Constrói Habilidades 3x5:** Gera as formas das habilidades (Cone, Cruz, Octaedro) em uma matriz "molde" 3x5, usando `1` para "acerto" e `0` para "vazio".
4.  **Sobrepõe Habilidades:** Aplica cada molde de habilidade 3x5 no tabuleiro 10x10 em pontos de origem pré-definidos, marcando a área de efeito com `5`.
5.  **Exibe o Resultado:** Imprime o tabuleiro final no console, mostrando a combinação dos navios e das áreas de efeito.

## Conceitos Demonstrados

  * Declaração e inicialização de Matrizes (Arrays Bidimensionais).
  * Uso de Constantes (`#define`) para legibilidade e manutenção.
  * Lógica de Loops Aninhados (`for` dentro de `for`) para percorrer matrizes.
  * Lógica Condicional (`if` e `? :`) para "desenhar" formas.
  * **Modularização com Funções:** Separação de responsabilidades (construir, sobrepor, imprimir) em funções limpas.
  * **Reutilização de Código:** A função `sobrepor_habilidade` é escrita uma vez e chamada três vezes.

## Como Compilar e Executar

Para compilar e executar este programa, você precisará de um compilador C (como o `gcc`).

1.  Salve o código em um arquivo chamado `batalhaNaval.c`.
2.  Abra seu terminal ou prompt de comando.
3.  Compile o programa:
    ```bash
    gcc batalhaNaval.c -o batalhaNaval
    ```
4.  Execute o programa compilado:
    ```bash
    ./batalhaNaval
    ```
    (No Windows, você pode precisar apenas digitar `batalhaNaval.exe`)

## Saída Esperada

Ao executar o programa, você verá a seguinte saída no console. Note como os `5` (habilidades) aparecem nos formatos 3x5 e sobrepõem os `3` (navios) onde eles se cruzam.

```
B A T A L H A   N A V A L - NÍVEL MESTRE
 --------------------------------------
 (0=Água, 3=Navio, 5=Habilidade)

   A B C D E F G H I J
 1 3 0 0 0 0 0 0 5 0 3
 2 0 3 3 3 0 5 5 5 5 5
 3 0 0 3 0 0 0 0 5 0 0
 4 0 0 0 0 0 0 0 0 0 0
 5 0 0 5 0 0 0 0 3 0 0
 6 0 5 5 5 0 0 0 3 0 0
 7 5 5 5 5 5 0 0 3 0 0
 8 0 0 0 0 0 0 0 0 0 0
 9 0 0 0 0 0 0 5 5 5 0
10 0 0 0 0 0 0 0 5 0 0
```