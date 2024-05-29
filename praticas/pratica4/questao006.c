/*Faça um programa em C que leia um verbo e imprima a conjugação no presente do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU PROGRAMAS, ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM).*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAMANHO_VERBO 50
bool termina_com(const char *str, const char *suffix) {
    size_t str_len = strlen(str);
    size_t suffix_len = strlen(suffix);
    if (str_len < suffix_len) return false;
    return strncmp(str + str_len - suffix_len, suffix, suffix_len) == 0;
}

int main() {
    char verbo[TAMANHO_VERBO];
    printf("Digite um verbo: ");
    if (scanf("%s", verbo) != 1) {
        printf("Erro ao ler o verbo.\n");
        return 1;
    }
    if (!termina_com(verbo, "AR")) {
        printf("O verbo não termina com 'AR'.\n");
        return 1;
    }
    printf("Conjugação no presente do indicativo:\n");
    printf("EU %s\n", verbo);
    printf("TU %sS\n", verbo);
    printf("ELE/A %s\n", verbo);
    printf("NÓS %sMOS\n", verbo);
    printf("VÓS %sIS\n", verbo);
    printf("ELES/AS %sM\n", verbo);

    return 0;
}
