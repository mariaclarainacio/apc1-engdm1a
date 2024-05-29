/*  Faça um programa em C que leia números inteiros até ler zero, e imprima o maior e o menor entre eles.*/

#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    int maior = INT_MIN;
    int menor = INT_MAX;

    printf("Digite números inteiros (0 para parar):\n");

    while (1) {
        if (scanf("%d", &num) != 1) {
            printf("Erro na leitura do número.\n");
            return 1;
        }

        if (num == 0) {
            break;
        }

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    if (maior == INT_MIN && menor == INT_MAX) {
        printf("Nenhum número válido foi inserido.\n");
    } else {
        printf("O maior número inserido foi: %d\n", maior);
        printf("O menor número inserido foi: %d\n", menor);
    }

    return 0;
}

