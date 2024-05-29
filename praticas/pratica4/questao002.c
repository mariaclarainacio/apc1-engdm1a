/*Faça um programa em C que leia as notas de 10 alunos, calcule a média da turma e contabilize quantos alunos estão com a nota acima da média.*/

#include <stdio.h>

#define NUM_ALUNOS 10

int main() {
    float notas[NUM_ALUNOS];
    float soma_notas = 0;
    float media;
    int alunos_acima_media = 0;

    printf("Digite as notas dos %d alunos:\n", NUM_ALUNOS);
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Nota do aluno %d: ", i + 1);
        if (scanf("%f", &notas[i]) != 1) {
            printf("Erro na leitura da nota do aluno %d.\n", i + 1);
            return 1;
        }
        soma_notas += notas[i];
    }

    media = soma_notas / NUM_ALUNOS;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (notas[i] > media) {
            alunos_acima_media++;
        }
    }
    printf("\nA média da turma é: %.2f\n", media);
    printf("Número de alunos com notas acima da média: %d\n", alunos_acima_media);

    return 0;
}
