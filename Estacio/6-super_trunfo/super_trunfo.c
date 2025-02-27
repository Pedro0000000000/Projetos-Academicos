#include <stdio.h>

int main() {
  // Declaração das variáveis da Carta 1
  char estado1;                
  char codigo1[5];                
  char nome_da_cidade1[50];       
  int populacao1;                 
  float area1;                    
  float pib1;                     
  int pontos_turisticos1;         

  // Declaração das variáveis da Carta 2
  char estado2;
  char codigo2[5];
  char nome_da_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // Exibe o título do jogo
  printf("---------Super Trunfo---------\n");
  printf("Bem-Vindo ao Jogo Super Trunfo\n");

  // Entrada de dados da Carta 1
  printf("\nCarta 1");
  printf("\nInforme a sigla do estado da carta 1: ");
  scanf(" %c", &estado1);

  printf("Informe o código da carta 1: ");
  scanf(" %5s", codigo1); 

  printf("Informe o nome da cidade da carta 1: ");
  scanf(" %49s", nome_da_cidade1);

  printf("Informe a população da carta 1: ");
  scanf("%d", &populacao1);

  printf("Informe a área da carta 1 (em km²): ");
  scanf("%f", &area1);

  printf("Informe o PIB da carta 1 (em bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Informe o número de pontos turísticos da carta 1: ");
  scanf("%d", &pontos_turisticos1);

  // Entrada de dados da Carta 2
  printf("\nCarta 2");
  printf("\nInforme a sigla do estado da carta 2: ");
  scanf(" %c", &estado2);

  printf("Informe o código da carta 2: ");
  scanf(" %5s", codigo2);

  printf("Informe o nome da cidade da carta 2: ");
  scanf(" %49s", nome_da_cidade2);

  printf("Informe a população da carta 2: ");
  scanf("%d", &populacao2);

  printf("Informe a área da carta 2 (em km²): ");
  scanf("%f", &area2);

  printf("Informe o PIB da carta 2 (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Informe o número de pontos turísticos da carta 2: ");
  scanf("%d", &pontos_turisticos2);

  // Exibir os dados da Carta 1
  printf("\n===== Carta 1 =====\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

  // Exibir os dados da Carta 2
  printf("\n===== Carta 2 =====\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

  return 0;
}