/*Faça um programa em C que leia a quantidade e o preço de 10 produtos de um nota fiscal e imprima o valor total de cada produto e o valor total da nota.*/

#include <stdio.h>

#define NUM_PRODUTOS 10

int main() {
    float quantidade[NUM_PRODUTOS];
    float preco[NUM_PRODUTOS];
    float valor_total_produto[NUM_PRODUTOS];
    float valor_total_nota = 0;
    int i;

    printf("Digite a quantidade e o preço de cada produto:\n");
    for (i = 0; i < NUM_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Quantidade: ");
        if (scanf("%f", &quantidade[i]) != 1) {
            printf("Erro na leitura da quantidade do produto %d.\n", i + 1);
            return 1;
        }
        printf("Preço: ");
        if (scanf("%f", &preco[i]) != 1) {
            printf("Erro na leitura do preço do produto %d.\n", i + 1);
            return 1;
        }
        valor_total_produto[i] = quantidade[i] * preco[i];
        valor_total_nota += valor_total_produto[i];
    }
    printf("\nValor total de cada produto:\n");
    for (i = 0; i < NUM_PRODUTOS; i++) {
        printf("Produto %d: %.2f\n", i + 1, valor_total_produto[i]);
    }
    printf("\nValor total da nota: %.2f\n", valor_total_nota);

    return 0;
}
