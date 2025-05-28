#include <stdio.h>

int main() {
    
    printf("Nível Novato\n");

    // Tabuleiro 5x5
    int tabuleiro5x5[5][5] = {0};

    // Navio horizontal (linha 1, colunas 0 a 2)
    for (int j = 0; j < 3; j++) {
        tabuleiro5x5[1][j] = 3;
        printf("Navio HORIZONTAL em: (%d, %d)\n", 1, j);
    }

    // Navio vertical (coluna 4, linhas 2 a 4)
    for (int i = 2; i <= 4; i++) {
        tabuleiro5x5[i][4] = 3;
        printf("Navio VERTICAL em: (%d, %d)\n", i, 4);
    }