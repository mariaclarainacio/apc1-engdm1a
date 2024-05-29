/* Faça um programa em C que preencha uma matriz com 10 números, depois leia um número e localize a posição dele na matriz.*/

#include <stdio.h>

#define LINHAS 2
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int numero, encontrado = 0;
    int linha_encontrada = -1, coluna_encontrada = -1;

    printf("Digite 10 números para preencher a matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Erro na leitura do número.\n");
                return 1;
            }
        }
    }
    printf("Digite o número a ser localizado: ");
    if (scanf("%d", &numero) != 1) {
        printf("Erro na leitura do número.\n");
        return 1;
    }
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == numero) {
                linha_encontrada = i;
                coluna_encontrada = j;
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }
    if (encontrado) {
        printf("O número %d foi encontrado na posição [%d][%d] da matriz.\n", numero, linha_encontrada, coluna_encontrada);
    } else {
        printf("O número %d não foi encontrado na matriz.\n", numero);
    }

    return 0;
}
