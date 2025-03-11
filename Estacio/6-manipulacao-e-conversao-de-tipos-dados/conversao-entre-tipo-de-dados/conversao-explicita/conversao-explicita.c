#include <stdio.h>

int main() {

  int a = 10;
  int b = 3;
  float quociente = (float) a / b; // "a" é explicitamente covertido para float 

  printf("Quaciente: %.2f\n", quociente);
  printf("Valor de a = %d\nValor de b = %d", a, b);

  return 0;

}