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
    scanf(" %c", &estado1); // Lê a sigla do estado da carta 1

    printf("Informe o código da carta 1: ");
    scanf(" %5s", codigo1); // Lê o código da carta 1

    printf("Informe o nome da cidade da carta 1: ");
    scanf(" %49s", nome_da_cidade1); // Lê o nome da cidade da carta 1

    printf("Informe a população da carta 1: ");
    scanf("%lu", &populacao1); // Lê a população da carta 1

    printf("Informe a área da carta 1 (em km²): ");
    scanf("%f", &area1); // Lê a área da carta 1

    printf("Informe o PIB da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1); // Lê o PIB da carta 1

    printf("Informe o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1); // Lê o número de pontos turísticos da carta 1

    // Entrada de dados da Carta 2
    printf("\nCarta 2");
    printf("\nInforme a sigla do estado da carta 2: ");
    scanf(" %c", &estado2); // Lê a sigla do estado da carta 2

    printf("Informe o código da carta 2: ");
    scanf(" %5s", codigo2); // Lê o código da carta 2

    printf("Informe o nome da cidade da carta 2: ");
    scanf(" %49s", nome_da_cidade2); // Lê o nome da cidade da carta 2

    printf("Informe a população da carta 2: ");
    scanf("%lu", &populacao2); // Lê a população da carta 2

    printf("Informe a área da carta 2 (em km²): ");
    scanf("%f", &area2); // Lê a área da carta 2

    printf("Informe o PIB da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2); // Lê o PIB da carta 2

    printf("Informe o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2); // Lê o número de pontos turísticos da carta 2

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 1
    float densidade_populacional1 = populacao1 / area1; // Calcula a densidade populacional da carta 1
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Calcula o PIB per capita da carta 1

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 2
    float densidade_populacional2 = populacao2 / area2; // Calcula a densidade populacional da carta 2
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Calcula o PIB per capita da carta 2

    // Calcular Super Poder. OBS: vence quem tiver menor densidade populacional
    float super_poder = densidade_populacional1 < densidade_populacional2; // Verifica qual carta tem menor densidade populacional

    // Exibir os dados da Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1); // Exibe a sigla do estado da carta 1
    printf("Código: %s\n", codigo1); // Exibe o código da carta 1
    printf("Nome da Cidade: %s\n", nome_da_cidade1); // Exibe o nome da cidade da carta 1
    printf("População: %lu\n", populacao1); // Exibe a população da carta 1
    printf("Área: %.2f km²\n", area1); // Exibe a área da carta 1
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB da carta 1
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); // Exibe o número de pontos turísticos da carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); // Exibe a densidade populacional da carta 1
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1); // Exibe o PIB per capita da carta 1

    // Exibir os dados da Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2); // Exibe a sigla do estado da carta 2
    printf("Código: %s\n", codigo2); // Exibe o código da carta 2
    printf("Nome da Cidade: %s\n", nome_da_cidade2); // Exibe o nome da cidade da carta 2
    printf("População: %lu\n", populacao2); // Exibe a população da carta 2
    printf("Área: %.2f km²\n", area2); // Exibe a área da carta 2
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB da carta 2
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2); // Exibe o número de pontos turísticos da carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2); // Exibe a densidade populacional da carta 2
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2); // Exibe o PIB per capita da carta 2

    // Comparação entre Carta 1 e Carta 2 modo simples
    printf("\nComparação Simples entre Carta 1 e Carta 2.\n\n");
    printf("A saída da comparação será 1 ou 0.\n    caso a relação seja verdadeira ou falsa.");
    printf("\nSe o resultado da comparação for ( 1 ), a carta 1 ganhou;\n    caso o resultado for ( 0 ), a carta 2 ganhou.");
    printf("\n\nPopulação: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", populacao1 > populacao2); // Compara a população
    printf("\nÁrea: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", area1 > area2); // Compara a área
    printf("\nPIB: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", pib1 > pib2); // Compara o PIB
    printf("\nPontos Turísticos: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", pontos_turisticos1 > pontos_turisticos2); // Compara os pontos turísticos
    printf("\nDensidade Populacional: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", densidade_populacional1 < densidade_populacional2); // Compara a densidade populacional
    printf("\nPIB Per Capita: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", pib_per_capita1 > pib_per_capita2); // Compara o PIB per capita

    // Super Poder
    printf("\n\nSuper Poder: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", super_poder); // Exibe o vencedor do super poder
    printf("\n Valor de Carta 1: Densidade Populacional:  %f - valor da Carta 2: Densidade Populacional: %f\n", densidade_populacional1, densidade_populacional2); // Exibe as densidades populacionais

    printf("\n\nComparação com IF e ELSE das Carta 1 e Carta 2.\n\n");

    // Comparação da população entre as cartas
    if (populacao1 > populacao2) {
        // Carta 1 vence se sua população for maior
        printf("\nA carta 1 venceu!\n Carta 1: População: %lu > Carta 2: População: %lu\n", populacao1, populacao2);
    } else if (populacao2 > populacao1) {
        // Carta 2 vence se sua população for maior
        printf("A carta 2 venceu!\n Carta 1: População: %lu < Carta 2: População: %lu\n", populacao1, populacao2);
    } else {
        // Empate se as populações forem iguais
        printf("\nAs cartas são iguais em população!\n Carta 1: População: %lu = Carta 2: População: %lu\n", populacao1, populacao2);
    }

    // Comparação da área entre as cartas
    if (area1 > area2) {
        // Carta 1 vence se sua área for maior
        printf("\nA carta 1 venceu!\n Carta 1: Área: %.2f km²> Carta 2: Área: %.2f km²\n", area1, area2);
    } else if (area2 > area1) {
        // Carta 2 vence se sua área for maior
        printf("\nA carta 2 venceu!\n Carta 1: Área: %.2f km² < Carta 2: Área: %.2f km²\n", area1, area2);
    } else {
        // Empate se as áreas forem iguais
        printf("\nAs cartas são iguais em área!\n Carta 1: Área: %.2f km² = Carta 2: Área: %.2f km²\n", area1, area2);
    }

    // Comparação do PIB entre as cartas
    if (pib1 > pib2) {
        // Carta 1 vence se seu PIB for maior
        printf("\nA carta 1 venceu!\n Carta 1: PIB: %.2f bilhoes > Carta 2: PIB: %.2f bilhoes\n", pib1, pib2);
    } else if (pib2 > pib1) {
        // Carta 2 vence se seu PIB for maior
        printf("\nA carta 2 venceu!\n Carta 1: PIB: %.2f bilhoes< Carta 2: PIB: %.2f bilhoes\n", pib1, pib2);
    } else {
        // Empate se os PIBs forem iguais
        printf("\nAs cartas são iguais em PIB!\n Carta 1: PIB: %.2f bilhoes = Carta 2: PIB: %.2f bilhoes\n", pib1, pib2);
    }

    // Comparação do número de pontos turísticos entre as cartas
    if (pontos_turisticos1 > pontos_turisticos2) {
        // Carta 1 vence se tiver mais pontos turísticos
        printf("\nA carta 1 venceu!\n Carta 1: Pontos Turísticos: %d > Carta 2: Pontos Turísticos: %d\n", pontos_turisticos1, pontos_turisticos2);
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        // Carta 2 vence se tiver mais pontos turísticos
        printf("\nA carta 2 venceu!\n Carta 1: Pontos Turísticos: %d < Carta 2: Pontos Turísticos: %d\n", pontos_turisticos1, pontos_turisticos2);
    } else {
        // Empate se o número de pontos turísticos for igual
        printf("\nAs cartas são iguais em pontos turísticos!\n Carta 1: Pontos Turísticos: %d = Carta 2: Pontos Turísticos: %d\n", pontos_turisticos1, pontos_turisticos2);
    }

    // Comparação da densidade populacional entre as cartas
    // Nota: O vencedor é quem tem a menor densidade populacional
    if (densidade_populacional1 < densidade_populacional2) {
        // Carta 1 vence se sua densidade populacional for menor
        printf("\nA carta 1 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² < Carta 2: Densidade Populacional: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
    } else if (densidade_populacional1 > densidade_populacional2) {
        // Carta 2 vence se sua densidade populacional for menor
        printf("\nA carta 2 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² > Carta 2: Densidade Populacional: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
    } else {
        // Empate se as densidades populacionais forem iguais
        printf("\nAs cartas são iguais em densidade populacional!\n Carta 1: Densidade Populacional: %.2f hab/km² = Carta 2: Densidade Populacional: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
    }

    return 0;
}