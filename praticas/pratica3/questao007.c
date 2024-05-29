/* Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci.*/

#include <stdio.h>

int main() {
    int n = 10;
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("Os 10 primeiros números da série de Fibonacci são:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}

