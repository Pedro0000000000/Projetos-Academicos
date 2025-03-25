#include <stdio.h>

int main (){
  // Declarar variaveis Produto, u i estoque, double valor unitario
  // u i quantidade minima
  char produto_A[30] = "Produto A";
  char produto_B[30] = "Produto B";

  unsigned int estoque_A = 1000;
  unsigned int estoque_B = 2000;

  float valor_A = 10.50;
  float valor_B = 20.40;

  unsigned int estoque_minimo_A = 500;
  unsigned int estoque_minimo_B = 2500;

  double valor_total_A;
  double valor_total_B;

  int resultado_A, resultado_B;

  //Exibir as informações dos produtos
  printf("------Estoque do Pedrão------\n");
  printf("\nProduto: %s\n Valor do Produto: R$ %.2f\n Estoque: %u\n Valor total do estoque: R$ %d.\n", produto_A, valor_A, estoque_A, valor_total_A);
  printf("\nProduto: %s\n Valor do Produto: R$ %.2f\n Estoque: %u\n Valor total do estoque: R$ %d.\n", produto_B, valor_B, estoque_B, valor_total_B);

  // Comparações com o valor minimo de estoque
  resultado_A = estoque_A > estoque_minimo_A;
  resultado_B = estoque_B > estoque_minimo_B;

  printf("   ---   ---   ---   ---   \n");
  printf("Produto: %s, Estoque minimo: %d.\n", produto_A, resultado_A);
  printf("Produto: %s, Estoque minimo: %d.\n", produto_B, resultado_B);

  // Comparações entre os valores tottais dos produtos
  // printf("\nSe o resultado for ( 1 ), valor de ( A ) > ( B )\nSe o resultado for ( 0 ), valor de ( A ) < ( B ).\n");
  printf("\nO valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f);\n\nSe o resultado for ( 1 ), valor de ( A ) > ( B )\nSe o resultado for ( 0 ), valor de ( A ) < ( B ).\n\nResultado: ( %d )", estoque_A * valor_A, estoque_B * valor_B, (estoque_A * valor_A > estoque_B * valor_B));

}