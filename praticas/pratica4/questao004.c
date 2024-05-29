/*Faça um programa em C que leia uma frase de até 30 caracteres preenchendo uma matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.*/

#include <stdio.h>
#include <string.h>

#define LINHAS 6
#define COLUNAS 5
#define TAMANHO_FRASE 30

int main() {
    char frase[TAMANHO_FRASE + 1]; 
    char matriz[LINHAS][COLUNAS];
    int i, j, k = 0;

    printf("Digite uma frase de até %d caracteres: ", TAMANHO_FRASE);
    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        printf("Erro ao ler a frase.\n");
        return 1;
    }

    frase[strcspn(frase, "\n")] = '\0';

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (k < strlen(frase)) {
                matriz[i][j] = frase[k++];
            } else {
                matriz[i][j] = ' ';
            }
        }
    }

    printf("\nMatriz percorrendo coluna por coluna:\n");
    for (j = 0; j < COLUNAS; j++) {
        for (i = 0; i < LINHAS; i++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
