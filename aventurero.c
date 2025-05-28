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

    printf("Nível Aventureiro\n");

    // Tabuleiro 10x10
    int tabuleiro[10][10] = {0};

    // Navio horizontal (linha 2, colunas 0 a 3)
    for (int coluna = 0; coluna < 4; coluna++) {
        tabuleiro[2][coluna] = 3;
    }

    // Navio vertical (coluna 6, linhas 5 a 8)
    for (int linha = 5; linha <= 8; linha++) {
        tabuleiro[linha][6] = 3;
    }

    // Navio diagonal principal (de 0,0 a 3,3)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal secundária (de 0,9 a 3,6)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Imprimir tabuleiro completo
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");  
    }

    return 0;
}
