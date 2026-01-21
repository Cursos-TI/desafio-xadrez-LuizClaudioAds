#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções recursivas para movimentação das peças  
void movimentarTorre(int movimentos) {
    if (movimentos <= 0) return;
    printf("Direita\n");
    movimentarTorre(movimentos - 1);
}

void movimentarBispo(int movimentos) {
    if (movimentos <= 0) return;
    // Movimento vertical
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        // Movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
    movimentarBispo(movimentos - 1);
}

void movimentarRainha(int movimentos) {
    if (movimentos <= 0) return;
    printf("Esquerda\n");
    movimentarRainha(movimentos - 1);
}

int main() {
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Definindo constantes e estruturas necessárias para o jogo
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8; 
    
    int contador;

    printf("### Bem-vindo ao Jogo de Xadrez! ###\n");

    // Movimento da Torre: 5 casas para a direita.
    printf("\nMovimento da Torre:\n");
    movimentarTorre(movimentosTorre);

    // Movimento do Bispo: 5 casas na diagonal direita.
    printf("\nMovimento do Bispo:\n");
    movimentarBispo(movimentosBispo);

    // Movimento da Rainha: 8 casas para a esquerda.
    printf("\nMovimento da Rainha:\n");
    movimentarRainha(movimentosRainha);

    // Movimento do Cavalo: 1 movimento em "L" (2 casas para cima e 1 para a direita).
    printf("\nMovimento do Cavalo:\n");
    for (int vertical = 0; vertical < 3; vertical++) {
        int horizontal = 0;
        while (horizontal < 1) {
            if (vertical < 2) {
                printf("Cima\n");
                break;
            }
            if (vertical == 2) {
                printf("Direita\n");
                horizontal++;
            }
        }
    }
    
    printf("\n### Fim do Jogo de Xadrez ###\n");
    
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    
    return 0;
}
