#include <stdio.h>

// --- Nivel Novato ---
void nivelNovato() {
    printf("--- Nivel Novato ---\n\n");

    // Definição do tabuleiro e navios
    int tabuleiro[5][5] = {0}; // Tabuleiro 5x5, inicializado com 0s
    int navioVertical[3][2] = {{0, 2}, {1, 2}, {2, 2}};
    int navioHorizontal[3][2] = {{3, 0}, {3, 1}, {3, 2}};

    // Posicionando os navios
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioVertical[i][0]][navioVertical[i][1]] = 1;
        tabuleiro[navioHorizontal[i][0]][navioHorizontal[i][1]] = 1;
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioHorizontal[i][0], navioHorizontal[i][1]);
    }
    printf("\n");
}

// --- Nivel Aventureiro ---
void nivelAventureiro() {
    printf("--- Nivel Aventureiro ---\n\n");

    // Tabuleiro 10x10, inicializado com 0s
    int tabuleiro[10][10] = {0};

    // Coordenadas dos navios (inseridas manualmente)
    // Navio 1 (vertical)
    int navio1_x = 2;
    int navio1_y = 5;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_x + i][navio1_y] = 3;
    }

    // Navio 2 (horizontal)
    int navio2_x = 7;
    int navio2_y = 1;
    for (int i = 0; i < 4; i++) {
        tabuleiro[navio2_x][navio2_y + i] = 3;
    }

    // Navio 3 (diagonal 1)
    int navio3_x = 0;
    int navio3_y = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio3_x + i][navio3_y + i] = 3;
    }

    // Navio 4 (diagonal 2)
    int navio4_x = 8;
    int navio4_y = 8;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio4_x - i][navio4_y - i] = 3;
    }

    // Exibindo o tabuleiro completo
    printf("Tabuleiro 10x10 com navios (0 = vazio, 3 = ocupado):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// --- Nivel Mestre ---
void nivelMestre() {
    printf("--- Nivel Mestre ---\n\n");

    // Matriz 5x5 para as habilidades, inicializada com 0s
    int matriz[5][5] = {0};

    // Habilidade: Cone
    printf("Habilidade em Cone:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    // Exibindo a habilidade em cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Resetando a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }

    // Habilidade: Octaedro
    printf("Habilidade em Octaedro:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || i == 2) && j == 2) {
                matriz[i][j] = 1;
            } else if (i == 1 && j >= 1 && j <= 3) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    // Exibindo a habilidade em octaedro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Resetando a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }

    // Habilidade: Cruz
    printf("Habilidade em Cruz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 2 || i == 1) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    // Exibindo a habilidade em cruz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Chamando as funções de cada nível
    nivelNovato();
    printf("----------------------------------------\n\n");
    nivelAventureiro();
    printf("----------------------------------------\n\n");
    nivelMestre();

    return 0;
}
