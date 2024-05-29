/*. Faça um programa em C que leia o número de mês, valide o número com os meses definidos por uma enumeração e imprima o nome do mês.*/

#include <stdio.h>
enum Mes {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main() {
    int numero_mes;
    printf("Digite o número do mês (1 a 12): ");
    if (scanf("%d", &numero_mes) != 1) {
        printf("Erro ao ler o número do mês.\n");
        return 1;
    }
    if (numero_mes < JANEIRO || numero_mes > DEZEMBRO) {
        printf("Número de mês inválido.\n");
        return 1;
    }
    switch (numero_mes) {
        case JANEIRO:
            printf("Janeiro\n");
            break;
        case FEVEREIRO:
            printf("Fevereiro\n");
            break;
        case MARCO:
            printf("Março\n");
            break;
        case ABRIL:
            printf("Abril\n");
            break;
        case MAIO:
            printf("Maio\n");
            break;
        case JUNHO:
            printf("Junho\n");
            break;
        case JULHO:
            printf("Julho\n");
            break;
        case AGOSTO:
            printf("Agosto\n");
            break;
        case SETEMBRO:
            printf("Setembro\n");
            break;
        case OUTUBRO:
            printf("Outubro\n");
            break;
        case NOVEMBRO:
            printf("Novembro\n");
            break;
        case DEZEMBRO:
            printf("Dezembro\n");
            break;
        default:
            printf("Número de mês inválido.\n");
            break;
    }

    return 0;
}
