/*Faça um programa em C que leia matrícula e email de 10 alunos, e depois localize o email do aluno a partir de uma matrícula lida.*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 10
#define TAM_MATRICULA 10
#define TAM_EMAIL 50
struct Aluno {
    char matricula[TAM_MATRICULA];
    char email[TAM_EMAIL];
};

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    char matricula_busca[TAM_MATRICULA];
    printf("Digite a matrícula e o email de cada aluno:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        if (scanf("%s", alunos[i].matricula) != 1) {
            printf("Erro ao ler a matrícula do aluno.\n");
            return 1;
        }
        printf("Email: ");
        if (scanf("%s", alunos[i].email) != 1) {
            printf("Erro ao ler o email do aluno.\n");
            return 1;
        }
    }
    printf("\nDigite a matrícula do aluno que deseja buscar o email: ");
    if (scanf("%s", matricula_busca) != 1) {
        printf("Erro ao ler a matrícula para busca.\n");
        return 1;
    }
    char* email_encontrado = NULL;
    for (int i = 0; i < MAX_ALUNOS; i++) {
        if (strcmp(alunos[i].matricula, matricula_busca) == 0) {
            email_encontrado = alunos[i].email;
            break;
        }
    }
    if (email_encontrado != NULL) {
        printf("O email do aluno com matrícula %s é: %s\n", matricula_busca, email_encontrado);
    } else {
        printf("Nenhum aluno encontrado com a matrícula %s.\n", matricula_busca);
    }

    return 0;
}
