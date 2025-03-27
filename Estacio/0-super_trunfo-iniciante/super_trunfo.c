#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;                
    char codigo1[5];                
    char nome_da_cidade1[50];       
    unsigned long populacao1;                 
    float area1, pib1;                     
    int pontos_turisticos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[5];
    char nome_da_cidade2[50];
    unsigned long populacao2;
    float area2, pib2;
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

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 1.
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Multiplica por 1 bilhão para converter para reais

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 2.
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Multiplica por 1 bilhão para converter para reais

    // Calcular Super Poder. Carta 1 e 2.
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

    // Comparação entre Carta 1 e 2.
    printf("\nComparação Simples entre Carta 1 e Carta 2.\n\n");
    printf("A saída da comparação será 1 ou 0.\n    caso a relação seja verdadeira ou falsa.");
    printf("\nSe o resultado da comparação for ( 1 ), a carta 1 ganhou;\n    caso o resultado for ( 0 ), a carta 2 ganhou.");
    printf("\n\nPopulação: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", populacao1 > populacao2);
    printf("\nÁrea: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", area1 > area2);
    printf("\nPIB: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", pib1 > pib2);
    printf("\nPontos Turísticos: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", pontos_turisticos1 > pontos_turisticos2);
    printf("\nDensidade Populacional: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", densidade_populacional1 > densidade_populacional2);
    printf("\nPIB Per Capita: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", pib_per_capita1 > pib_per_capita2);

    // Super Poder.
    printf("\n\nSuper Poder: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )",super_poder );
    printf("\n Valor de a %f - valor de b %f", densidade_populacional1, densidade_populacional2);
    
    return 0;
}
