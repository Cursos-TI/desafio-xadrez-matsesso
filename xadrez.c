#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nivel Mestre

// Função recursiva para movimento do Bispo
void moverBispo(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Diagonal Superior Direita (Cima + Direita)\n");
        moverBispo(casasRestantes - 1);
    }
}

// Função recursiva para movimento da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Direita\n");
        moverTorre(casasRestantes - 1);
    }
}

// Função recursiva para movimento da Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Esquerda\n");
        moverRainha(casasRestantes - 1);
    }
}

// Função para movimento do Cavalo com loops aninhados e condições múltiplas
void moverCavalo() {
    for (int vertical = 0; vertical < 2; vertical++) {
        for (int horizontal = 0; horizontal < 3; horizontal++) {
            // Verifica se é um movimento válido em L
            if (vertical == 1 && horizontal == 2) {
                printf("Movimento em L: Cima + Direita\n");
                break; // Encerra após encontrar o movimento válido
            }
            
            if (vertical == 0 && horizontal < 2) {
                continue; // Pula movimentos inválidos
            }
        }
    }
}

int main() {
    printf("=== Movimentação do Bispo (5 casas) ===\n");
    moverBispo(5);
    
    printf("\n=== Movimentação da Torre (5 casas) ===\n");
    moverTorre(5);
    
    printf("\n=== Movimentação da Rainha (8 casas) ===\n");
    moverRainha(8);
    
    printf("\n=== Movimentação do Cavalo (em L) ===\n");
    moverCavalo();
    
    return 0;
}
