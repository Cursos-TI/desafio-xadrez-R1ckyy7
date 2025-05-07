#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   // Movimento da Torre - 5 casas para a Direita (usando for)
   printf("Movimento da Torre:\n");
   for (int i = 0; i < 5; i++) {
       printf("Direita\n");
   }

   // Movimento do Bispo - 5 casas na Diagonal para Cima e Direita (usando while)
   printf("\nMovimento do Bispo:\n");
   int j = 0;
   while (j < 5) {
       printf("Cima Direita\n");
       j++;
   }

   // Movimento da Rainha - 8 casas para a Esquerda (usando do-while)
   printf("\nMovimento da Rainha:\n");
   int k = 0;
   do {
       printf("Esquerda\n");
       k++;
   } while (k < 8);

   
    return 0;
}
