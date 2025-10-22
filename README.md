# Batalha naval nível aventureiro

## Descrição

O programa utiliza conceitos fundamentais da linguagem C para:

  * Declarar e inicializar uma matriz (array bidimensional) 10x10.
  * Usar constantes (`#define`) para tornar o código mais legível (tamanho do tabuleiro, tamanho do navio, etc.).
  * Posicionar 4 navios de tamanho 3 no tabuleiro:
      * 1 Navio Horizontal
      * 1 Navio Vertical
      * 1 Navio na **Diagonal Principal** (canto superior esquerdo para inferior direito).
      * 1 Navio na **Diagonal Secundária** (canto superior direito para inferior esquerdo).
  * Usar **loops aninhados** (`for` dentro de `for`) para percorrer a matriz e exibir o tabuleiro final no console.

O tabuleiro impresso utiliza `0` para representar "água" e `3` para representar as partes dos "navios".

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

Ao executar o programa, você verá a seguinte saída no console, mostrando o tabuleiro com os quatro navios posicionados:

```
B A T A L H A   N A V A L
 -----------------------
   A B C D E F G H I J
 1 3 0 0 0 0 0 0 0 0 3
 2 0 3 3 3 0 0 0 0 3 0
 3 0 0 3 0 0 0 0 3 0 0
 4 0 0 0 0 0 0 0 0 0 0
 5 0 0 0 0 0 0 0 3 0 0
 6 0 0 0 0 0 0 0 3 0 0
 7 0 0 0 0 0 0 0 3 0 0
 8 0 0 0 0 0 0 0 0 0 0
 9 0 0 0 0 0 0 0 0 0 0
10 0 0 0 0 0 0 0 0 0 0
```