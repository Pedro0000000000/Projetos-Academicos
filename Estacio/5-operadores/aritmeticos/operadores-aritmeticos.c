#include <stdio.h>

int main(){

  // Atribuição simples: (=)
  // Atribuição com soma: (+=)
  // Atribuição com subtração: (-=)
  // Atribuição com multiplicação (*=)
  // Atribuição com divisão (/=)
  
  int number1, number2, resultado;

  number1 = 12;
  printf("Number1: %d\n", number1);

  number2 = 15;
  printf("Number2: %d\n", number2);

  resultado = number1 + number2;
  printf("Resultado de soma de %d += %d: %d\n ", number1, number2, resultado);

  resultado += 40;
  printf("Resultado = %d += 40 = %d", resultado - 40, resultado);

  printf("\n--------------------------------------------------------------\n");

  int a = 10;
  int b = 5;

  printf("a = %d", a);
  printf("\nb = %d", b);
 
    // Operadores aritméticos
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
 
    // Operadores de atribuição
    a += 2; // a será 12
    b *= 3; // b será 15
 
    // Operadores de incremento e decremento
    a++; // a será 13
    b--; // b será 14
 
    // Exibição dos resultados
    printf("\nSoma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Novo valor de a (após += 2 e ++): %d\n", a);
    printf("Novo valor de b (após *= 3 e --): %d\n", b);
 
    return 0;

};