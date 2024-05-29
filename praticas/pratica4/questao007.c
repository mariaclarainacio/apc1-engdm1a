/*Faça um programa em C que leia uma estrutura contendo dia, mês e ano e imprima a data tanto no formato BR (dd/mm/aaaa) quanto no formato US (mm/dd/aaaa).*/

#include <stdio.h>
struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Data data;
    printf("Digite o dia, mes e ano (no formato dd mm aaaa): ");
    if (scanf("%d %d %d", &data.dia, &data.mes, &data.ano) != 3) {
        printf("Erro ao ler a data.\n");
        return 1;
    }
    printf("Data no formato BR: %02d/%02d/%d\n", data.dia, data.mes, data.ano);
    printf("Data no formato US: %02d/%02d/%d\n", data.mes, data.dia, data.ano);

    return 0;
}
