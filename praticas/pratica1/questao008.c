#include <stdio.h>

int main() {
 int segundos, horas, minutos, segundos_restantes;
  int items_lidos;

  printf("Digite a quantidade de segundos: ");
 items_lidos = scanf("%d", &segundos);

  if (items_lidos != 1) {
    printf("Erro: Formato de entrada invalido.\n");
    return 1;
  }

  horas = segundos / 3600;
  segundos_restantes = segundos % 3600;
  minutos = segundos_restantes / 60;
  segundos_restantes = segundos_restantes % 60;

  printf("%d segundos correspondem a %d horas,%d minutos e %d segundos. \n", segundos, horas, minutos, segundos_restantes);
  
  return 0;
}