/*Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Pressione uma tecla: ");
    ch = getchar();

    if (isalpha(ch)) {
        printf("É uma letra.\n");
    }
    else if (isdigit(ch)) {
        printf("É um dígito.\n");
    }
    else {
        printf("É um caractere especial.\n");
    }

    return 0;
}

