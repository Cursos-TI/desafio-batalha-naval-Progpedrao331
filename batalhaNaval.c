#include <stdio.h>

int main() {

    // aqui todos os campos da matriz são preenchidas com 0
    int tabuleiro[10][10] = {0};

    // aqui simulamos um navio horizontal
    for (int j = 2; j <= 4; j++) {
        tabuleiro[1][j] = 1;
    }

    // aqui simulamos um navio vertical
    for (int i = 4; i <= 6; i++) {
        tabuleiro[i][7] = 1;
    }

    printf("B A T A L H A   N A V A L\n");
    printf(" -----------------------\n");

    // Imprime cabeçalho das colunas (A a J)
    printf("   "); 
    for (int j = 0; j < 10; j++) {
        printf("%c ", 'A' + j); 
    }
    printf("\n");

    // Imprime as linhas (1-10) e o conteúdo
    for (int i = 0; i < 10; i++) {

        // Alinhamento da coluna dos números (1-10)
        printf("%2d ", i + 1);

        // Imprime o conteúdo do tabuleiro
        for (int j = 0; j < 10; j++) {

            // aqui verifica se as linhas e colunas do tabuleiro são iguais a 1, imprime 'n', se não, imprime '~'
            printf("%c ", (tabuleiro[i][j] == 1) ? 'n' : '~');
        }
        printf("\n");
    }

    return 0;
}