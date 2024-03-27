#include <stdio.h>
#include <math.h>

int main() {
  float distancia, angulo, altura;
  printf("Entre com a distancia:");
  scanf("%f", &distancia);
  printf("Entre com o angulo:");
  scanf("%f", &angulo);

  if (angulo > 45) {
    printf("O angulo deve ser menor ou igual a 45 graus");

  angulo = angulo * M_PI / 180;
  altura = distancia * sin(angulo);
  printf("A altura é %.2f\n", altura);

  return 0;
}