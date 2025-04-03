
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    
    #include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base: parar quando não houver mais casas
    }
    printf("Direita\n"); // Movimento horizontal para a direita
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base: parar quando não houver mais casas
    }
    printf("Cima Direita\n"); // Movimento diagonal para cima e à direita
    moverBispoRecursivo(casasRestantes - 1); // Chamada recursiva
}

// Loops aninhados para o movimento do Bispo
void moverBispoLoopsAninhados(int casasVerticais, int casasHorizontais) {
    for (int i = 1; i <= casasVerticais; i++) {
        for (int j = 1; j <= casasHorizontais; j++) {
            printf("Cima Direita\n"); // Movimento diagonal combinado
        }
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base: parar quando não houver mais casas
    }
    printf("Esquerda\n"); // Movimento horizontal para a esquerda
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// Função principal
int main() {
    // Movimento da Torre usando recursividade
    printf("Movimento da Torre:\n");
    int torre_movimentos = 5; // Número de casas que a Torre irá se mover
    moverTorre(torre_movimentos);
    printf("\n");

    // Movimento do Bispo usando recursividade
    printf("Movimento do Bispo (Recursividade):\n");
    int bispo_movimentos_recursivos = 5; // Número de casas que o Bispo irá se mover
    moverBispoRecursivo(bispo_movimentos_recursivos);
    printf("\n");

    // Movimento do Bispo usando loops aninhados
    printf("Movimento do Bispo (Loops Aninhados):\n");
    int bispo_casas_verticais = 2; // Número de casas verticais
    int bispo_casas_horizontais = 3; // Número de casas horizontais
    moverBispoLoopsAninhados(bispo_casas_verticais, bispo_casas_horizontais);
    printf("\n");

    // Movimento da Rainha usando recursividade
    printf("Movimento da Rainha:\n");
    int rainha_movimentos = 8; // Número de casas que a Rainha irá se mover
    moverRainha(rainha_movimentos);
    printf("\n");

    // Movimento do Cavalo usando loops complexos
    printf("Movimento do Cavalo:\n");
    int cavalo_movimentos_verticais = 2; // Número de casas para cima
    int cavalo_movimentos_horizontais = 1; // Número de casas para a direita

    for (int i = 1; i <= cavalo_movimentos_verticais; i++) {
        if (i > 2) break; // Condição para evitar iterações desnecessárias
        printf("Cima\n");
    }

    for (int j = 1; j <= cavalo_movimentos_horizontais; j++) {
        if (j > 1) continue; // Condição para controlar o fluxo
        printf("Direita\n");
    }

    return 0;
}