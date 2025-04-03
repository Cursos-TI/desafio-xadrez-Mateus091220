#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
        printf("Movimento da Torre:\n");
        int torre_movimentos = 5; // Número de casas que a Torre irá se mover
        for (int i = 1; i <= torre_movimentos; i++) {
            printf("Direita\n"); // Movimento horizontal para a direita
        }
        printf("\n");
    
        printf("Movimento do Bispo:\n");
        int bispo_movimentos = 5; // Número de casas que o Bispo irá se mover
        int contador_bispo = 1;   // Contador para controlar o loop while
        while (contador_bispo <= bispo_movimentos) {
            printf("Cima Direita\n"); // Movimento diagonal para cima e à direita
            contador_bispo++;
        }
        printf("\n");
    
        printf("Movimento da Rainha:\n");
        int rainha_movimentos = 8; // Número de casas que a Rainha irá se mover
        int contador_rainha = 1;   // Contador para controlar o loop do-while
        do {
            printf("Esquerda\n"); // Movimento horizontal para a esquerda
            contador_rainha++;
        } while (contador_rainha <= rainha_movimentos);
        printf("\n");
    
        printf("Movimento do Cavalo:\n");
        int cavalo_movimentos_verticais = 2; // Número de casas para baixo
        int cavalo_movimentos_horizontais = 1; // Número de casas para a esquerda
    
        // Loop externo (for): Movimento vertical (duas casas para baixo)
        for (int i = 1; i <= cavalo_movimentos_verticais; i++) {
            printf("Baixo\n");
        }
    
        int contador_cavalo_horizontal = 1;
        while (contador_cavalo_horizontal <= cavalo_movimentos_horizontais) {
            printf("Esquerda\n");
            contador_cavalo_horizontal++;
        }
    
        return 0;
    }