/*Faça um programa em C que calcule o fatorial de um número inteiro.*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;  
  
    printf("Digite um número inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Erro na leitura do número.\n");
        return 1;
    }
    if (n < 0) {
        printf("Fatorial não está definido para números negativos.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }
    printf("O fatorial de %d é %llu.\n", n, fatorial);

    return 0;
}

