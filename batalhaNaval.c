#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define TAM_NAVIO 3 
#define AGUA 0
#define NAVIO 3

int main() {

    // aqui todos os campos da matriz são preenchidas com 0
    int tabuleiro[LINHAS][COLUNAS] = {AGUA}; 


    // (k vai de 0 a 2. Posições: [1][2+0], [1][2+1], [1][2+2])
    for (int k = 0; k < TAM_NAVIO; k++) {
        tabuleiro[1][2 + k] = NAVIO;
    }

    // (k vai de 0 a 2. Posições: [4+0][7], [4+1][7], [4+2][7])
    for (int k = 0; k < TAM_NAVIO; k++) {
        tabuleiro[4 + k][7] = NAVIO;
    }

    // (k vai de 0 a 2. Posições: [0][0], [1][1], [2][2])
    for (int k = 0; k < TAM_NAVIO; k++) {
        tabuleiro[k][k] = NAVIO;
    }

    // (k vai de 0 a 2. Posições: [0+0][9-0], [0+1][9-1], [0+2][9-2])
    for (int k = 0; k < TAM_NAVIO; k++) {
        tabuleiro[0 + k][9 - k] = NAVIO;
    }

    // --- Impressão do Tabuleiro ---

    printf("B A T A L H A   N A V A L\n");
    printf(" -----------------------\n");

    // Imprime cabeçalho das colunas (A a J)
    printf("   "); 
    for (int j = 0; j < COLUNAS; j++) {
        printf("%c ", 'A' + j); 
    }
    printf("\n");

    // (O primeiro loop 'for i' passa pelas LINHAS)
    for (int i = 0; i < LINHAS; i++) {

        printf("%2d ", i + 1); // Alinhamento dos números 1-10

        // (O segundo loop 'for j' passa pelas COLUNAS de CADA linha)
        for (int j = 0; j < COLUNAS; j++) {

            // Imprime o valor que está na matriz: 0 (AGUA) ou 3 (NAVIO)
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}