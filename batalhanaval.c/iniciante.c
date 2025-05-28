#include <stdio.h>

int main() {
    
    printf("Nível Novato\n");

    // Tabuleiro 5x5
    int tabuleiro5x5[5][5] = {0};

    // Navio horizontal (linha 1, colunas 0 a 2)
    for (int coluna = 0; coluna < 3; coluna++) {
        tabuleiro5x5[1][coluna] = 3;
        printf("Navio HORIZONTAL em: (%d, %d)\n", 1, coluna);
    }

    // Navio vertical (coluna 4, linhas 2 a 4)
    for (int linha = 2; linha <= 4; linha++) {
        tabuleiro5x5[linha][4] = 3;
        printf("Navio VERTICAL em: (%d, %d)\n", linha, 4);
    }

    printf("\n");


    
        return 0;
}