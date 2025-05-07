#include <stdio.h>

int main() {
    int movimentos = 4; // número de movimentos em L que ira ser simulado

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        // Movimento em L: 2 para baixo
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }

        // Movimento em L: 1 para esquerda
        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < 1);

        printf("---\n"); // Separador entre os movimentos
    }

    return 0;
}