#include <stdio.h> 

int main() {

  char nome[50]; // Array de caracteres para armazenar o nome
  int idade = 0;
  float altura = 0;
  char opcao;

  // Entrada do nome
  printf("Entre com seu nome: ");
  scanf("%49s", nome); // Evita buffer overflow, mas não captura espaços

  printf("\nIdade Antes: %d", idade);

  // Entrada da idade
  printf("\nEntre com sua idade!\nDigite sua idade: ");
  scanf("%d", &idade);
  printf("Idade Depois: %d", idade);

  // Entrada da altura
  printf("\n\nEntre com sua altura!\nDigite sua altura: ");
  scanf("%f", &altura);
  printf("Altura Depois: %f", altura);

  // Entrada da opção
  printf("\n\nEntre com uma opção!\nOpção 1, Opção 2, Opção 3, Opção 4\nDigite sua opção: ");
  scanf(" %c", &opcao); // O espaço antes do %c evita problemas com quebras de linha
  printf("Opção escolhida: %c", opcao);

  // Saída final
  printf("\n\nSuas escolhas:\nNome: %s\nIdade: %d\nAltura: %f\nOpção: %c\n", nome, idade, altura, opcao);

}
