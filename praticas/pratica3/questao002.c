/* 2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%. */

#include <stdio.h>
int main() {
float valor_bruto, valor_desconto, valor_liquido;

  printf("Digite o valor bruto: ");
if (scanf("%f", &valor_bruto) != 1) {
  printf("Erro na leitura do valor.\n");
  return 1;
}

  if (valor_bruto <= 100.00) {
    valor_desconto = valor_bruto * 0.01;
  } else if (valor_bruto <= 500.00){
    valor_desconto = valor_bruto * 0.05;
  } else {
    valor_desconto = valor_bruto * 0.10;
  
  }
  valor_liquido = valor_bruto - valor_desconto;

  printf("Valor do desconto: %.2f\n", valor_desconto);
printf("Valor líquido: %.2f\n", valor_liquido);
  
  return 0;
}