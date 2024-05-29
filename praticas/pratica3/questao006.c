/* Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100. */

#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número: ");
    if (scanf("%d", &n) != 1) {
        printf("Erro na leitura do número.\n");
        return 1;
    }
    if (n <= 0) {
        printf("O número deve ser positivo.\n");
        return 1;
    }
    printf("Múltiplos de %d entre 1 e 100:\n", n);
    for (i = 1; i <= 100; i++) {
        if (i % n == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
