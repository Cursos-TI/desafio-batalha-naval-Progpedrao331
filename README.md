# Desafio Batalha Naval Novato

## Descrição

O programa demonstra conceitos básicos da linguagem C, incluindo:

  * Inicialização de arrays multidimensionais (matrizes).
  * Uso de loops `for` para popular dados em um array.
  * Impressão formatada no console usando `printf`.
  * Uso do operador ternário (`? :`) para lógica condicional.

O código cria um tabuleiro 10x10, "limpa" ele (preenchendo com `0`), posiciona dois navios (um horizontal e um vertical) e, em seguida, imprime o tabuleiro completo no terminal, usando `~` para água e `n` para navio.

## Como Compilar e Executar

Para compilar e executar este programa, você precisará de um compilador C (como o `gcc`).

1.  Salve o código em um arquivo chamado `batalha_naval.c`.
2.  Abra seu terminal ou prompt de comando.
3.  Compile o programa:
    ```bash
    gcc batalha_naval.c -o batalha_naval
    ```
4.  Execute o programa compilado:
    ```bash
    ./batalha_naval
    ```
    (No Windows, você pode precisar apenas digitar `batalha_naval.exe`)

## Saída Esperada

Ao executar o programa, você verá a seguinte saída no console, mostrando o tabuleiro com os navios posicionados:

```
B A T A L H A   N A V A L
 -----------------------
   A B C D E F G H I J
 1 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
 2 ~ ~ n n n ~ ~ ~ ~ ~
 3 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
 4 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
 5 ~ ~ ~ ~ ~ ~ ~ n ~ ~
 6 ~ ~ ~ ~ ~ ~ ~ n ~ ~
 7 ~ ~ ~ ~ ~ ~ ~ n ~ ~
 8 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
 9 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
10 ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
```