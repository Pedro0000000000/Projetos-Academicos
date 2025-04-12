#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;                // Sigla do estado da carta 1
    char codigo1[5];             // Código da carta 1
    char nome_da_cidade1[50];    // Nome da cidade da carta 1
    unsigned long populacao1;    // População da cidade da carta 1
    float area1, pib1;           // Área em km² e PIB em bilhões da carta 1
    int pontos_turisticos1;      // Número de pontos turísticos da carta 1

    // Declaração das variáveis da Carta 2
    char estado2;                // Sigla do estado da carta 2
    char codigo2[5];             // Código da carta 2
    char nome_da_cidade2[50];    // Nome da cidade da carta 2
    unsigned long populacao2;    // População da cidade da carta 2
    float area2, pib2;           // Área em km² e PIB em bilhões da carta 2
    int pontos_turisticos2;      // Número de pontos turísticos da carta 2

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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Informe a área da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 1
    float densidade_populacional1 = populacao1 / area1; // Densidade = População / Área
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // PIB per capita = PIB (em reais) / População

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 2
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Calcular Super Poder: vence quem tiver menor densidade populacional
    float super_poder = densidade_populacional1 < densidade_populacional2;

    // Exibir os dados da Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibir os dados da Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparação entre Carta 1 e Carta 2
    printf("\nComparação Simples entre Carta 1 e Carta 2.\n\n");
    printf("População: Carta 1 (1) - Carta 2 (0): Vencedor (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 (1) - Carta 2 (0): Vencedor (%d)\n", area1 > area2);
    printf("PIB: Carta 1 (1) - Carta 2 (0): Vencedor (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 (1) - Carta 2 (0): Vencedor (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 (1) - Carta 2 (0): Vencedor (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 (1) - Carta 2 (0): Vencedor (%d)\n", pib_per_capita1 > pib_per_capita2);

    // Super Poder
    printf("\nSuper Poder: Carta 1 (1) - Carta 2 (0): Vencedor (%d)\n", super_poder);

    return 0;
}