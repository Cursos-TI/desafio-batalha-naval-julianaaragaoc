#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    // ===============================
    // 1. DECLARAÇÃO DO TABULEIRO
    // ===============================
    
    int tabuleiro[10][10];

    // Inicializa todas as posições com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ===============================
    // 2. VETORES DE LINHA E COLUNA
    // ===============================

    // Vetor para letras das colunas
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // Vetor para números das linhas
    int linhas[10];
    for (int i = 0; i < 10; i++) {
        linhas[i] = i + 1;
    }

    // ===============================
    // 3. IMPRESSÃO DO TABULEIRO
    // ===============================

    printf("\nTABULEIRO BATALHA NAVAL VAZIO\n");

    // Imprime cabeçalho das colunas
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", colunas[j]);
    }
    printf("\n");

    // Imprime as linhas com os valores
    for (int i = 0; i < 10; i++) {
        printf("%2d ", linhas[i]);  // imprime número da linha alinhado

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

     // ===============================
    // 4. NAVIO HORIZONTAL
    // Linha 3 (índice 2)
    // Colunas D-F (3,4,5)
    // ===============================
    int linhaH = 2;
    int colunaInicialH = 3;

    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaH][colunaInicialH + j] = 3;
    }

    // ===============================
    // 5. NAVIO VERTICAL
    // Linhas 5-7 (4,5,6)
    // Coluna H (7)
    // ===============================
    int linhaInicialV = 4;
    int colunaV = 7;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialV + i][colunaV] = 3;
    }

// ===============================
    // 6. NAVIO DIAGONAL PRINCIPAL
    // ===============================
    int linhaInicialDS = 0;
    int colunaDS = 9;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialDS + i][colunaDS-i] = 3;
    }

    // ===============================
    // 7. NAVIO DIAGONAL SECUNDÁRIA
    // ===============================
    int linhaInicialD = 0;
    int colunaD = 0;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialD + i][colunaD+i] = 3;
    }

    printf("\nTABULEIRO BATALHA NAVAL COM NAVIOS POSICIONADOS\n");

    // Imprime cabeçalho
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", colunas[j]);
    }
    printf("\n");

    // Imprime tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}