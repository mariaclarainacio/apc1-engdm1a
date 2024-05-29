/* Faça um programa em C que leia uma string e a imprima em maiúsculo e em minúsculo.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAXIMO 100

int main() {
    char string[TAMANHO_MAXIMO];

    printf("Digite uma string: ");
    if (fgets(string, sizeof(string), stdin) == NULL) {
        printf("Erro ao ler a string.\n");
        return 1;
    }
    printf("\nString em maiúsculo: ");
    for (int i = 0; i < strlen(string); i++) {
        printf("%c", toupper(string[i]));
    }
    printf("\nString em minúsculo: ");
    for (int i = 0; i < strlen(string); i++) {
        printf("%c", tolower(string[i]));
    }

    return 0;
}
