/*Faça um programa em C que leia nome e telefone de 10 contatos, e depois imprima todos os contatos no formato "nome - (telefone)".*/

#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 10
#define TAM_NOME 50
#define TAM_TELEFONE 15
struct Contato {
    char nome[TAM_NOME];
    char telefone[TAM_TELEFONE];
};

int main() {
    struct Contato contatos[MAX_CONTATOS];
    printf("Digite o nome e o telefone de cada contato:\n");
    for (int i = 0; i < MAX_CONTATOS; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: ");
        if (scanf("%s", contatos[i].nome) != 1) {
            printf("Erro ao ler o nome do contato.\n");
            return 1;
        }
        printf("Telefone: ");
        if (scanf("%s", contatos[i].telefone) != 1) {
            printf("Erro ao ler o telefone do contato.\n");
            return 1;
        }
    }
    printf("\nContatos:\n");
    for (int i = 0; i < MAX_CONTATOS; i++) {
        printf("%s - (%s)\n", contatos[i].nome, contatos[i].telefone);
    }

    return 0;
}

