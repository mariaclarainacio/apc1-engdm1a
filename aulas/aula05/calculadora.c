#include <stdio.h>
#include <math.h>

int main() { 
 int numero1;
  int numero2;

  printf("Entre com o valor do numero1: ");
 int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor do numero2: ");
deu_certo = scanf("%i", &numero2);

int resultado = numero1 + numero2;
  printf("A soma dos numeros é %i\n", resultado);

resultado = numero1 - numero2;
printf("A subtração dos numeros é %i\n", resultado);

resultado = numero1 * numero2;

  printf("A multiplicação dos numeros é %i\n",resultado);

  resultado = numero1 / numero2;
  printf("A divisão dos numeros é %i\n", resultado);

  int resto= numero1 % numero2;
  printf("O resto da divisão dos numeros é %i\n", resto);

  //numero1= numero1 + 1;
  //incremento
  printf("O incrmento do primeiro numero1 é %i\n", numero1++);
  printf("O incremento do primeiro numero é %i\n", ++numero1);
  
//numero1= numero1 - 1;
  //decremento
  printf("O incrmento do primeiro numero1 é %i\n", numero1--);
  printf("O incremento do primeiro numero é %i\n", --numero1);

double raiz_quadrada = sqrt(numero1);
printf("A raiz quadrada do numero1 é %f\n", raiz_quadrada);

double potencia = pow(numero1, 4); // numero1^4 
printf("A quarta potencia do primeiro numero é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo do primeiro numero na base 2 é %f\n", logaritmo2);

  const double PI = 3.1415;
  double seno= sin(numero1 * PI / 180); //angulo em radiano * PI / 180
  printf("O seno do primeiro numero é %f\n", seno);

return 0;
 
}