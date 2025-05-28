#include <stdio.h>

int main() {
    int tabuleiro5x5[5][5] = {0};

    for (int coluna = 0; coluna < 3; coluna++) {
        tabuleiro5x5[1][coluna] = 3;
        printf("Navio HORIZONTAL em: (%d, %d)\n", 1, coluna);
    }

    for (int linha = 2; linha <= 4; linha++) {
        tabuleiro5x5[linha][4] = 3;
        printf("Navio VERTICAL em: (%d, %d)\n", linha, 4);
    }

    printf("\n");

    int tabuleiro[10][10] = {0};

    for (int coluna = 0; coluna < 4; coluna++) {
        tabuleiro[2][coluna] = 3;
    }

    for (int linha = 5; linha <= 8; linha++) {
        tabuleiro[linha][6] = 3;
    }

    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");

    int cone[5][5] = {0};
    int centro = 2;

    for (int i = 0; i < 3; i++) {
        for (int k = centro - i; k <= centro + i; k++) {
            if (k >= 0 && k < 5) {
                cone[i][k] = 1;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 5; k++) {
            printf("%d ", cone[i][k]);
        }
        printf("\n");
    }

    printf("\n");

    int cruz[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        cruz[1][i] = 1;
    }

    cruz[0][2] = 1;
    cruz[2][2] = 1;

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 5; k++) {
            printf("%d ", cruz[i][k]);
        }
        printf("\n");
    }

    printf("\n");

    int octaedro[5][5] = {0};

    octaedro[0][2] = 1;

    for (int k = 1; k <= 3; k++) {
        octaedro[1][k] = 1;
    }

    octaedro[2][2] = 1;

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 5; k++) {
            printf("%d ", octaedro[i][k]);
        }
        printf("\n");
    }

    return 0;
}
