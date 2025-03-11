#include <stdio.h>

int main() {

  // Declaração das variáveis
  int number1, number2;
  int soma, subtracao, multiplicacao;
  float divisao;  // Alterado para float para suportar números decimais

  // Exibe mensagem inicial
  printf("Calculadora do Pedrão:\n");

  // Entrada de dados
  printf("Digite um numero: ");
  scanf("%d", &number1);

  printf("Digite o segundo numero: ");
  scanf("%d", &number2);

  // Realizando os cálculos corretos
  soma = number1 + number2;
  subtracao = number1 - number2;
  multiplicacao = number1 * number2;

  // Verificando se a divisão é válida (evita divisão por zero)
  if (number2 != 0) {
    divisao = (float)number1 / number2;  // Força a divisão ser em ponto flutuante
  } else {
    printf("\nErro: Divisão por zero não é permitida.\n");
    divisao = 0;  // Define como 0 para evitar erro
  }

  // Exibindo os resultados
  printf("\nResultados:\n");
  printf("Soma: %d + %d = %d\n", number1, number2, soma);
  printf("Subtração: %d - %d = %d\n", number1, number2, subtracao);
  printf("Multiplicação: %d * %d = %d\n", number1, number2, multiplicacao);

  if (number2 != 0) { // Só mostra a divisão se não for zero
    printf("Divisão: %d / %d = %.2f\n", number1, number2, divisao);
  }

  return 0;  // Indica que o programa terminou corretamente
  
}