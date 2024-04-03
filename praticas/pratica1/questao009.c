#include <stdio.h>
int main() {

  int anos, meses, dias;
  int total_dias;
  int items_lidos;

  printf("Digite a idade em anos, meses e dias: ");
  items_lidos = scanf("%d %d %d", &anos, &meses, &dias);

  if (items_lidos != 3) {
    printf("Erro: Formato de entrada invalido.\n");
    return 1;
  }
  
  total_dias = anos * 365 + meses * 30 + dias;
  printf("A idade em dias eh: %d\n", total_dias);

    
  return 0;
}