#include <stdio.h>

//Constantes do Jogo
#define LINHAS 10
#define COLUNAS 10
#define TAM_NAVIO 3
#define AGUA 0
#define NAVIO 3

//Constantes das Habilidades
#define HABILIDADE_LIN 3 
#define HABILIDADE_COL 5
#define HABILIDADE_EFEITO 5

// Centros da matriz
#define CENTRO_HAB_LIN (HABILIDADE_LIN / 2)
#define CENTRO_HAB_COL (HABILIDADE_COL / 2) 

//1. FUNÇÕES DE CONSTRUÇÃO DAS HABILIDADES
void limpar_habilidade(int hab[HABILIDADE_LIN][HABILIDADE_COL]) {
    for (int i = 0; i < HABILIDADE_LIN; i++) {
        for (int j = 0; j < HABILIDADE_COL; j++) {
            hab[i][j] = 0;
        }
    }
}

void construir_cone(int hab[HABILIDADE_LIN][HABILIDADE_COL]) {
    limpar_habilidade(hab);
    for (int i = 0; i < HABILIDADE_LIN; i++) {
        for (int j = 0; j < HABILIDADE_COL; j++) {
            int dist_j = j - CENTRO_HAB_COL; // Distância do centro da coluna (2)
            int abs_j = (dist_j < 0) ? -dist_j : dist_j;
            
            // A lógica (abs_j <= i)
            if (abs_j <= i) {
                hab[i][j] = 1;
            }
        }
    }
}

void construir_cruz(int hab[HABILIDADE_LIN][HABILIDADE_COL]) {
    limpar_habilidade(hab);
    for (int i = 0; i < HABILIDADE_LIN; i++) {
        for (int j = 0; j < HABILIDADE_COL; j++) {
            // Acerta se estiver na linha central (1) OU na coluna central (2)
            if (i == CENTRO_HAB_LIN || j == CENTRO_HAB_COL) {
                hab[i][j] = 1;
            }
        }
    }
}

void construir_octaedro(int hab[HABILIDADE_LIN][HABILIDADE_COL]) {
    limpar_habilidade(hab);
    for (int i = 0; i < HABILIDADE_LIN; i++) {
        for (int j = 0; j < HABILIDADE_COL; j++) {
            // Distância da linha central (1)
            int dist_i = i - CENTRO_HAB_LIN;
            int abs_i = (dist_i < 0) ? -dist_i : dist_i;
            // Distância da coluna central (2)
            int dist_j = j - CENTRO_HAB_COL;
            int abs_j = (dist_j < 0) ? -dist_j : dist_j;
            
            // Lógica do losango: soma das distâncias <= "raio"
            // Usamos o raio da linha (1) como limite
            if (abs_i + abs_j <= CENTRO_HAB_LIN) {
                hab[i][j] = 1;
            }
        }
    }
}


//2. FUNÇÃO DE SOBREPOSIÇÃO
void sobrepor_habilidade(int tabuleiro[LINHAS][COLUNAS], 
                       int habilidade[HABILIDADE_LIN][HABILIDADE_COL], 
                       int origem_r, int origem_c) {
    
    // Loops atualizados para 3 linhas e 5 colunas
    for (int i = 0; i < HABILIDADE_LIN; i++) {
        for (int j = 0; j < HABILIDADE_COL; j++) {
            // Se a habilidade acerta (1)
            if (habilidade[i][j] == 1) {
                // Lógica de centralização atualizada com os dois centros
                int tab_r = origem_r - CENTRO_HAB_LIN + i;
                int tab_c = origem_c - CENTRO_HAB_COL + j;

                // Validação de Limites (mesma lógica)
                if (tab_r >= 0 && tab_r < LINHAS && tab_c >= 0 && tab_c < COLUNAS) {
                    tabuleiro[tab_r][tab_c] = HABILIDADE_EFEITO;
                }
            }
        }
    }
}


//3. FUNÇÃO DE IMPRESSÃO
void imprimir_tabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("B A T A L H A   N A V A L - NÍVEL MESTRE\n");
    printf(" --------------------------------------\n");
    printf(" (0=Água, 3=Navio, 5=Habilidade)\n\n");

    printf("   "); 
    for (int j = 0; j < COLUNAS; j++) {
        printf("%c ", 'A' + j); 
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}


//4. FUNÇÃO MAIN
int main() {
    // Declaração do tabuleiro principal
    int tabuleiro[LINHAS][COLUNAS] = {AGUA};
    
    // Declaração da matriz de habilidade 3x5
    int habilidade[HABILIDADE_LIN][HABILIDADE_COL];

    // --- Tarefa 1: Posicionar Navios ---
    for (int k = 0; k < TAM_NAVIO; k++) { tabuleiro[1][2 + k] = NAVIO; }
    for (int k = 0; k < TAM_NAVIO; k++) { tabuleiro[4 + k][7] = NAVIO; }
    for (int k = 0; k < TAM_NAVIO; k++) { tabuleiro[k][k] = NAVIO; }
    for (int k = 0; k < TAM_NAVIO; k++) { tabuleiro[0 + k][9 - k] = NAVIO; }

    //Tarefa 2: Aplicar Habilidades
    construir_cone(habilidade);
    sobrepor_habilidade(tabuleiro, habilidade, 5, 2);
    
    construir_cruz(habilidade);
    sobrepor_habilidade(tabuleiro, habilidade, 2, 7);

    construir_octaedro(habilidade);
    sobrepor_habilidade(tabuleiro, habilidade, 8, 7);
    
    imprimir_tabuleiro(tabuleiro);

    return 0;
}