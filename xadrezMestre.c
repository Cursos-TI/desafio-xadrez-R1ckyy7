#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int passos) {
    if (passos == 0) return;
    
    // Loops aninhados
    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < 1) {
            printf("Cima Direita\n");
            j++;
        }
    }

    moverBispo(passos - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Movimento do Cavalo
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // Um loop controlando direção vertical e horizontal
    for (int i = 0, j = 0; i < 3 && j < 2; i++, j++) {
        if (i == 1) {
            // Simula a parte do "L" (segunda parte do movimento)
            for (int k = 0; k < 2; k++) {
                if (k == 1) break; // quebra interna para simular uma única ação
                printf("Direita\n");
            }
            break; // movimento completo
        }

        if (i >= 2) continue;
        printf("Cima\n");
    }
}

int main() {
    // Chamadas das funções
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\n");
    moverCavalo();

    return 0;
}