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

    // Menu interativo com Whille
    printf("\n\nMenu interativo:\n");
    printf("Escolha umas das opções a seguir:\n");
    printf("1 - Exibir dados da carta 1\n");
    printf("2 - Exibir dados da carta 2\n");
    printf("3 - Comparação entre Carta 1 e Carta 2 modo simples:\n");
    printf("4 - Comparação simples entre Super Poder\n");
    printf("5 - Comparação entre Carta 1 e Carta 2 com IF e ELSE\n");
    printf("6 - Escolha os atributos que você deseja comparar: 'Switch'\n");
    printf("7 - Escolha os atributos que você deseja comparar: 'Operadores Ternarios'\n");
    int opcao;
    scanf("%d", &opcao); // Lê a opção escolhida pelo usuário

    // Menu interativo com While
    switch (opcao){
        case 1:
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
        break; // Sai do case 1
        case 2:
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
        break;
        case 3: 
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
        break; // Sai do case 3
        case 4:
            // Comparação simples entre Super Poder
            printf("\n\nSuper Poder: Carta 1 ( 1 ) - Carta 2 ( 0 ): Vencedor ( %d )", super_poder); // Exibe o vencedor do super poder
            printf("\n Valor de Carta 1: Densidade Populacional:  %f - valor da Carta 2: Densidade Populacional: %f\n", densidade_populacional1, densidade_populacional2); // Exibe as densidades populacionais
        break; // Sai do case 4
        case 5:
            // Comparação da população entre as cartas com If e Else
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
        break; // Sai do case 5
        case 6: 
            // Escolha os atributos que você deseja comparar
            printf("\nEscolha os atributos que você deseja comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            int atributo;
            scanf("%d", &atributo); // Lê o atributo escolhido pelo usuário

            switch (atributo) {
                case 1:
                    // Comparação da população entre as cartas
                    if (populacao1 > populacao2) {
                        // Carta 1 vence se sua população for maior
                        printf("\nA carta 1 venceu!\n Carta 1: População: %lu > Carta 2: População: %lu\n", populacao1, populacao2);
                    } else if (populacao2 > populacao1) {
                        // Carta 2 vence se sua população for maior
                        printf("\nA carta 2 venceu!\n Carta 1: População: %lu < Carta 2: População: %lu\n", populacao1, populacao2);
                    } else {
                        // Empate se as populações forem iguais
                        printf("\nAs cartas são iguais em população!\n Carta 1: População: %lu = Carta 2: População: %lu\n", populacao1, populacao2);
                    }
                break; // Sai do case 6.1
                case 2:
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
                         break; // Sai do case 6.2
                    }
                case 3:
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
                         break; // Sai do case 6.3
                    }
                case 4:
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
                         break; // Sai do case 6.4
                    }
                case 5:
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
                         break; // Sai do case 6.5
                    }
                case 6:
                    // Comparação do PIB per Capita entre as cartas
                    if (pib_per_capita1 > pib_per_capita2) {
                        // Carta 1 vence se seu PIB per capita for maior
                        printf("\nA carta 1 venceu!\n Carta 1: PIB per Capita: %.2f > Carta 2: PIB per Capita: %.2f\n", pib_per_capita1, pib_per_capita2);
                    } else if (pib_per_capita2 > pib_per_capita1) {
                        // Carta 2 vence se seu PIB per capita for maior
                        printf("\nA carta 2 venceu!\n Carta 1: PIB per Capita: %.2f < Carta 2: PIB per Capita: %.2f\n", pib_per_capita1, pib_per_capita2);
                    } else {
                        // Empate se os PIBs per capita forem iguais
                        printf("\nAs cartas são iguais em PIB per Capita!\n Carta 1: PIB per Capita: %.2f = Carta 2: PIB per Capita: %.2f\n", pib_per_capita1, pib_per_capita2);
                         break; // Sai do case 6.6
                    }
                default:
                    // Caso o usuário escolha um atributo inválido
                    printf("\nAtributo inválido! Tente novamente.\n");
            }
        case 7:
            int pontuacaoFinal1 = 0, pontuacaoFinal2 = 0;// Variáveis para armazenar a pontuação final das cartas 
            // Escolha os atributos que você deseja comparar com operadores ternários 1
            printf("\nEscolha os atributos que você deseja comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Resultado da Comparação: ");
            int opcao_ternaria1, opcao_ternaria2, opcao_ternaria3, opcao_ternaria4, opcao_ternaria5, opcao_ternaria6, populacao_ternario, area_ternario, pib_ternario, pontos_turisticos_ternario, densidade_populacional_ternario, pib_per_capita_ternario;
            scanf("%d", &opcao_ternaria1); // Lê o atributo escolhido pelo usuário

            // Comparação usando operadores ternários
            switch (opcao_ternaria1) {
                case 1:
                    printf("Você escolheu comparar a população.\n");
                    populacao_ternario = (populacao1 > populacao2) ? 1 : 0; // Compara a população
                    if(populacao_ternario == 1) {
                        pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                        printf("A carta 1 venceu!\n Carta 1: População: %lu > %lu População Carta 2\n", populacao1, populacao2); // Exibe a vitória da carta 1
                    } else {
                        pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                        printf("A carta 2 venceu!\n Carta 1: População: %lu < %lu População Carta 2\n", populacao1, populacao2); // Exibe a vitória da carta 2
                    }
                break; // Sai do case 7.1
                case 2:
                    printf("Você escolheu comparar a área.\n");
                    area_ternario = (area1 > area2) ? 1 : 0; // Compara a área
                    if(area_ternario == 1) {
                        pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                        printf("A carta 1 venceu!\n Carta 1: Área: %.2f km² > %.2f km²\n", area1, area2); // Exibe a vitória da carta 1
                    } else {
                        pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                        printf("A carta 2 venceu!\n Carta 1: Área: %.2f km² < %.2f km²\n", area1, area2); // Exibe a vitória da carta 2
                    }
                break; // Sai do case 7.2
                case 3:
                    printf("Você escolheu comparar o PIB.\n");
                    pib_ternario = (pib1 > pib2) ? 1 : 0; // Compara o PIB
                    if(pib_ternario == 1) {
                        pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                        printf("A carta 1 venceu!\n Carta 1: PIB: %.2f bilhoes > %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 1
                    } else {
                        pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                        printf("A carta 2 venceu!\n Carta 1: PIB: %.2f bilhoes < %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 2
                    }
                break; // Sai do case 7.3
                case 4:
                    printf("Você escolheu comparar os pontos turísticos.\n");
                    pontos_turisticos_ternario = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0; // Compara os pontos turísticos
                    if(pontos_turisticos_ternario == 1) {
                        pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                        printf("A carta 1 venceu!\n Carta 1: Pontos Turísticos: %d > %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 1
                    } else {
                        pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                        printf("A carta 2 venceu!\n Carta 1: Pontos Turísticos: %d < %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 2
                    }
                break; // Sai do case 7.4
                case 5:
                    printf("Você escolheu comparar a densidade populacional.\n");
                    densidade_populacional_ternario = (densidade_populacional1 < densidade_populacional2) ? 1 : 0; // Compara a densidade populacional
                    if(densidade_populacional_ternario == 1) {
                        pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                        printf("A carta 1 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² < %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 1
                    } else {
                        pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                        printf("A carta 2 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² > %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 2
                    }
                break; // Sai do case 7.5
                case 6:
                    printf("Você escolheu comparar o PIB per Capita.\n");
                    pib_per_capita_ternario = (pib_per_capita1 > pib_per_capita2) ? 1 : 0; // Compara o PIB per capita
                    if(pib_per_capita_ternario == 1) {
                        pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                        printf("A carta 1 venceu!\n Carta 1: PIB per Capita: %.2f > %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 1
                    } else {
                        pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                        printf("A carta 2 venceu!\n Carta 1: PIB per Capita: %.2f < %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 2
                    }
                break; // Sai do case 7.6
                case 7:
                    // Exibe o resultado da comparação
                    printf("\nResultado da Comparação:\n");
                    printf("Carta 1: %d pontos\n", pontuacaoFinal1); // Exibe a pontuação da carta 1
                    printf("Carta 2: %d pontos\n", pontuacaoFinal2); // Exibe a pontuação da carta 2
                    if(pontuacaoFinal1 > pontuacaoFinal2) {
                        printf("A carta 1 venceu!\n"); // A carta 1 vence se sua pontuação for maior
                    } else if(pontuacaoFinal2 > pontuacaoFinal1) {
                        printf("A carta 2 venceu!\n"); // A carta 2 vence se sua pontuação for maior
                    } else {
                        printf("As cartas são iguais!\n"); // Empate se as pontuações forem iguais
                    }
                break; // Sai do case 7.7
                default:
                    printf("Atributo inválido! Tente novamente.\n"); // Caso o usuário escolha um atributo inválido
           
            }  
             
            // Escolha os atributos que você deseja comparar com operadores ternários 2
            printf("\nEscolha os atributos que você deseja comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Resultado da Comparação: ");
            scanf("%d", &opcao_ternaria2); // Lê o atributo escolhido pelo usuário

            if(opcao_ternaria1 == opcao_ternaria2) {
                printf("Você escolheu comparar o mesmo atributo. Tente novamente!\n");
            } else {
                // Comparação usando operadores ternários
                switch (opcao_ternaria2) {
                    case 1:
                        printf("Você escolheu comparar a população.\n");
                        populacao_ternario = (populacao1 > populacao2) ? 1 : 0; // Compara a população
                        if(populacao_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: População: %lu > %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: População: %lu < %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 2
                        }
                    break; // Sai do case 2.1
                    case 2:
                        printf("Você escolheu comparar a área.\n");
                        area_ternario = (area1 > area2) ? 1 : 0; // Compara a área
                        if(area_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Área: %.2f km² > %.2f km²\n", area1, area2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Área: %.2f km² < %.2f km²\n", area1, area2); // Exibe a vitória da carta 2
                        }
                    break; // Sai do case 2.2
                    case 3:
                        printf("Você escolheu comparar o PIB.\n");
                        pib_ternario = (pib1 > pib2) ? 1 : 0; // Compara o PIB
                        if(pib_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB: %.2f bilhoes > %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB: %.2f bilhoes < %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 2
                        }
                    break; // Sai do case 2.3
                    case 4:
                        printf("Você escolheu comparar os pontos turísticos.\n");
                        pontos_turisticos_ternario = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0; // Compara os pontos turísticos
                        if(pontos_turisticos_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Pontos Turísticos: %d > %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Pontos Turísticos: %d < %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 2
                        }
                    break; // Sai do case 2.4
                    case 5:
                        printf("Você escolheu comparar a densidade populacional.\n");
                        densidade_populacional_ternario = (densidade_populacional1 < densidade_populacional2) ? 1 : 0; // Compara a densidade populacional
                        if(densidade_populacional_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² < %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² > %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 2
                        }
                        break; // Sai do case 2.5
                    case 6:
                        printf("Você escolheu comparar o PIB per Capita.\n");
                        pib_per_capita_ternario = (pib_per_capita1 > pib_per_capita2) ? 1 : 0; // Compara o PIB per capita
                        if(pib_per_capita_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB per Capita: %.2f > %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB per Capita: %.2f < %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 2
                        }
                        break; // Sai do case 2.6
                        case 7:
                        // Exibe o resultado da comparação
                        printf("\nResultado da Comparação:\n");
                        printf("Carta 1: %d pontos\n", pontuacaoFinal1); // Exibe a pontuação da carta 1
                        printf("Carta 2: %d pontos\n", pontuacaoFinal2); // Exibe a pontuação da carta 2
                        if(pontuacaoFinal1 > pontuacaoFinal2) {
                            printf("A carta 1 venceu!\n"); // A carta 1 vence se sua pontuação for maior
                        } else if(pontuacaoFinal2 > pontuacaoFinal1) {
                            printf("A carta 2 venceu!\n"); // A carta 2 vence se sua pontuação for maior
                        } else {
                            printf("As cartas são iguais!\n"); // Empate se as pontuações forem iguais
                        }
                    break; // Sai do case 2.7
                    default:
                        printf("Atributo inválido! Tente novamente.\n"); // Caso o usuário escolha um atributo inválido
            
                }
            }

            // Escolha os atributos que você deseja comparar com operadores ternários 3
            printf("\nEscolha os atributos que você deseja comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Resultado da Comparação: ");
            scanf("%d", &opcao_ternaria3); // Lê o atributo escolhido pelo usuário

            if((opcao_ternaria1 == opcao_ternaria2) || (opcao_ternaria1 == opcao_ternaria3) || 
               (opcao_ternaria2 == opcao_ternaria3)) {
                printf("Você escolheu comparar o mesmo atributo. Tente novamente!\n");
            } else {
                // Comparação usando operadores ternários
                switch (opcao_ternaria3) {
                    case 1:
                        printf("Você escolheu comparar a população.\n");
                        populacao_ternario = (populacao1 > populacao2) ? 1 : 0; // Compara a população
                        if(populacao_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: População: %lu > %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: População: %lu < %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 2
                        }
                    break; // Sai do case 2.1
                    case 2:
                        printf("Você escolheu comparar a área.\n");
                        area_ternario = (area1 > area2) ? 1 : 0; // Compara a área
                        if(area_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Área: %.2f km² > %.2f km²\n", area1, area2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Área: %.2f km² < %.2f km²\n", area1, area2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 3:
                        printf("Você escolheu comparar o PIB.\n");
                        pib_ternario = (pib1 > pib2) ? 1 : 0; // Compara o PIB
                        if(pib_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB: %.2f bilhoes > %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB: %.2f bilhoes < %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 4:
                        printf("Você escolheu comparar os pontos turísticos.\n");
                        pontos_turisticos_ternario = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0; // Compara os pontos turísticos
                        if(pontos_turisticos_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Pontos Turísticos: %d > %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Pontos Turísticos: %d < %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 5:
                        printf("Você escolheu comparar a densidade populacional.\n");
                        densidade_populacional_ternario = (densidade_populacional1 < densidade_populacional2) ? 1 : 0; // Compara a densidade populacional
                        if(densidade_populacional_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² < %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² > %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 6:
                        printf("Você escolheu comparar o PIB per Capita.\n");
                        pib_per_capita_ternario = (pib_per_capita1 > pib_per_capita2) ? 1 : 0; // Compara o PIB per capita
                        if(pib_per_capita_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB per Capita: %.2f > %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB per Capita: %.2f < %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 2
                        }
                        break;
                        case 7:
                        // Exibe o resultado da comparação
                        printf("\nResultado da Comparação:\n");
                        printf("Carta 1: %d pontos\n", pontuacaoFinal1); // Exibe a pontuação da carta 1
                        printf("Carta 2: %d pontos\n", pontuacaoFinal2); // Exibe a pontuação da carta 2
                        if(pontuacaoFinal1 > pontuacaoFinal2) {
                            printf("A carta 1 venceu!\n"); // A carta 1 vence se sua pontuação for maior
                        } else if(pontuacaoFinal2 > pontuacaoFinal1) {
                            printf("A carta 2 venceu!\n"); // A carta 2 vence se sua pontuação for maior
                        } else {
                            printf("As cartas são iguais!\n"); // Empate se as pontuações forem iguais
                        }
                        break;
                    default:
                        printf("Atributo inválido! Tente novamente.\n"); // Caso o usuário escolha um atributo inválido
                }
            }

            // Escolha os atributos que você deseja comparar com operadores ternários 4
            printf("\nEscolha os atributos que você deseja comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Resultado da Comparação: ");
            scanf("%d", &opcao_ternaria4); // Lê o atributo escolhido pelo usuário

            if((opcao_ternaria1 == opcao_ternaria2) || (opcao_ternaria1 == opcao_ternaria3) || (opcao_ternaria1 == opcao_ternaria4) || 
               (opcao_ternaria2 == opcao_ternaria3) || (opcao_ternaria2 == opcao_ternaria4) ||
               (opcao_ternaria3 == opcao_ternaria4)) {
                printf("Você escolheu comparar o mesmo atributo. Tente novamente!\n");
            } else {
                // Comparação usando operadores ternários
                switch (opcao_ternaria4) {
                    case 1:
                        printf("Você escolheu comparar a população.\n");
                        populacao_ternario = (populacao1 > populacao2) ? 1 : 0; // Compara a população
                        if(populacao_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: População: %lu > %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: População: %lu < %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 2:
                        printf("Você escolheu comparar a área.\n");
                        area_ternario = (area1 > area2) ? 1 : 0; // Compara a área
                        if(area_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Área: %.2f km² > %.2f km²\n", area1, area2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Área: %.2f km² < %.2f km²\n", area1, area2); // Exibe a vitória da carta 2
                        }
                     break;
                    case 3:
                        printf("Você escolheu comparar o PIB.\n");
                        pib_ternario = (pib1 > pib2) ? 1 : 0; // Compara o PIB
                        if(pib_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB: %.2f bilhoes > %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB: %.2f bilhoes < %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 4:
                        printf("Você escolheu comparar os pontos turísticos.\n");
                        pontos_turisticos_ternario = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0; // Compara os pontos turísticos
                        if(pontos_turisticos_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Pontos Turísticos: %d > %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Pontos Turísticos: %d < %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 5:
                        printf("Você escolheu comparar a densidade populacional.\n");
                        densidade_populacional_ternario = (densidade_populacional1 < densidade_populacional2) ? 1 : 0; // Compara a densidade populacional
                        if(densidade_populacional_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² < %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² > %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 6:
                        printf("Você escolheu comparar o PIB per Capita.\n");
                        pib_per_capita_ternario = (pib_per_capita1 > pib_per_capita2) ? 1 : 0; // Compara o PIB per capita
                        if(pib_per_capita_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB per Capita: %.2f > %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB per Capita: %.2f < %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 2
                        }
                    break;
                        case 7:
                        // Exibe o resultado da comparação
                        printf("\nResultado da Comparação:\n");
                        printf("Carta 1: %d pontos\n", pontuacaoFinal1); // Exibe a pontuação da carta 1
                        printf("Carta 2: %d pontos\n", pontuacaoFinal2); // Exibe a pontuação da carta 2
                        if(pontuacaoFinal1 > pontuacaoFinal2) {
                            printf("A carta 1 venceu!\n"); // A carta 1 vence se sua pontuação for maior
                        } else if(pontuacaoFinal2 > pontuacaoFinal1) {
                            printf("A carta 2 venceu!\n"); // A carta 2 vence se sua pontuação for maior
                        } else {
                            printf("As cartas são iguais!\n"); // Empate se as pontuações forem iguais
                        }
                        break;
                    default:
                        printf("Atributo inválido! Tente novamente.\n"); // Caso o usuário escolha um atributo inválido
            
                }       
            }

            // Escolha os atributos que você deseja comparar com operadores ternários 5
            printf("\nEscolha os atributos que você deseja comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Resultado da Comparação: ");
            scanf("%d", &opcao_ternaria5); // Lê o atributo escolhido pelo usuário

            if((opcao_ternaria1 == opcao_ternaria2) || (opcao_ternaria1 == opcao_ternaria3) || (opcao_ternaria1 == opcao_ternaria4) || (opcao_ternaria1 == opcao_ternaria5) || (opcao_ternaria1 == opcao_ternaria6) ||
               (opcao_ternaria2 == opcao_ternaria3) || (opcao_ternaria2 == opcao_ternaria4) || (opcao_ternaria2 == opcao_ternaria5) || (opcao_ternaria2 == opcao_ternaria6) ||
               (opcao_ternaria3 == opcao_ternaria4) || (opcao_ternaria3 == opcao_ternaria5) || (opcao_ternaria3 == opcao_ternaria6) ||
               (opcao_ternaria4 == opcao_ternaria5) || (opcao_ternaria4 == opcao_ternaria6) ||
               (opcao_ternaria5 == opcao_ternaria6)) {
                printf("Você escolheu comparar o mesmo atributo. Tente novamente!\n");
            } else {
                // Comparação usando operadores ternários
                switch (opcao_ternaria5) {
                    case 1:
                        printf("Você escolheu comparar a população.\n");
                        populacao_ternario = (populacao1 > populacao2) ? 1 : 0; // Compara a população
                        if(populacao_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: População: %lu > %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: População: %lu < %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 2:
                        printf("Você escolheu comparar a área.\n");
                        area_ternario = (area1 > area2) ? 1 : 0; // Compara a área
                        if(area_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Área: %.2f km² > %.2f km²\n", area1, area2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Área: %.2f km² < %.2f km²\n", area1, area2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 3:
                        printf("Você escolheu comparar o PIB.\n");
                        pib_ternario = (pib1 > pib2) ? 1 : 0; // Compara o PIB
                        if(pib_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB: %.2f bilhoes > %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB: %.2f bilhoes < %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 4:
                        printf("Você escolheu comparar os pontos turísticos.\n");
                        pontos_turisticos_ternario = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0; // Compara os pontos turísticos
                        if(pontos_turisticos_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Pontos Turísticos: %d > %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Pontos Turísticos: %d < %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 5:
                        printf("Você escolheu comparar a densidade populacional.\n");
                        densidade_populacional_ternario = (densidade_populacional1 < densidade_populacional2) ? 1 : 0; // Compara a densidade populacional
                        if(densidade_populacional_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² < %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² > %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 2
                        }
                        break;
                    case 6:
                        printf("Você escolheu comparar o PIB per Capita.\n");
                        pib_per_capita_ternario = (pib_per_capita1 > pib_per_capita2) ? 1 : 0; // Compara o PIB per capita
                        if(pib_per_capita_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB per Capita: %.2f > %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB per Capita: %.2f < %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 2
                        }
                        break;
                        case 7:
                        // Exibe o resultado da comparação
                        printf("Carta 1: %d pontos\n", pontuacaoFinal1); // Exibe a pontuação da carta 1
                        printf("Carta 2: %d pontos\n", pontuacaoFinal2); // Exibe a pontuação da carta 2
                        if(pontuacaoFinal1 > pontuacaoFinal2) {
                            printf("A carta 1 venceu!\n"); // A carta 1 vence se sua pontuação for maior
                        } else if(pontuacaoFinal2 > pontuacaoFinal1) {
                            printf("A carta 2 venceu!\n"); // A carta 2 vence se sua pontuação for maior
                        } else {
                            printf("Empate entre as cartas!\n"); // Empate se as pontuações forem iguais
                        }
                        break;
                    default:
                        printf("Atributo inválido! Tente novamente.\n"); // Caso o usuário escolha um atributo inválido
                }
            }

            // Escolha os atributos que você deseja comparar com operadores ternários 6
            printf("\nEscolha os atributos que você deseja comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Resultado da Comparação: ");
            scanf("%d", &opcao_ternaria6); // Lê o atributo escolhido pelo usuário

            if((opcao_ternaria1 == opcao_ternaria2) || (opcao_ternaria1 == opcao_ternaria3) || (opcao_ternaria1 == opcao_ternaria4) || (opcao_ternaria1 == opcao_ternaria5) || (opcao_ternaria1 == opcao_ternaria6) ||
               (opcao_ternaria2 == opcao_ternaria3) || (opcao_ternaria2 == opcao_ternaria4) || (opcao_ternaria2 == opcao_ternaria5) || (opcao_ternaria2 == opcao_ternaria6) ||
               (opcao_ternaria3 == opcao_ternaria4) || (opcao_ternaria3 == opcao_ternaria5) || (opcao_ternaria3 == opcao_ternaria6) ||
               (opcao_ternaria4 == opcao_ternaria5) || (opcao_ternaria4 == opcao_ternaria6) ||
               (opcao_ternaria5 == opcao_ternaria6)) {

                printf("Você escolheu comparar o mesmo atributo. Tente novamente!\n");
            } else {
                // Comparação usando operadores ternários
                switch (opcao_ternaria6) {
                    case 1:
                        printf("Você escolheu comparar a população.\n");
                        populacao_ternario = (populacao1 > populacao2) ? 1 : 0; // Compara a população
                        if(populacao_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: População: %lu > %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: População: %lu < %lu\n População Carta 2: : ", populacao1, populacao2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 2:
                        printf("Você escolheu comparar a área.\n");
                        area_ternario = (area1 > area2) ? 1 : 0; // Compara a área
                        if(area_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Área: %.2f km² > %.2f km²\n", area1, area2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Área: %.2f km² < %.2f km²\n", area1, area2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 3:
                        printf("Você escolheu comparar o PIB.\n");
                        pib_ternario = (pib1 > pib2) ? 1 : 0; // Compara o PIB
                        if(pib_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB: %.2f bilhoes > %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB: %.2f bilhoes < %.2f bilhoes\n", pib1, pib2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 4:
                        printf("Você escolheu comparar os pontos turísticos.\n");
                        pontos_turisticos_ternario = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0; // Compara os pontos turísticos
                        if(pontos_turisticos_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Pontos Turísticos: %d > %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Pontos Turísticos: %d < %d\n", pontos_turisticos1, pontos_turisticos2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 5:
                        printf("Você escolheu comparar a densidade populacional.\n");
                        densidade_populacional_ternario = (densidade_populacional1 < densidade_populacional2) ? 1 : 0; // Compara a densidade populacional
                        if(densidade_populacional_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² < %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: Densidade Populacional: %.2f hab/km² > %.2f hab/km²\n", densidade_populacional1, densidade_populacional2); // Exibe a vitória da carta 2
                        }
                    break;
                    case 6:
                        printf("Você escolheu comparar o PIB per Capita.\n");
                        pib_per_capita_ternario = (pib_per_capita1 > pib_per_capita2) ? 1 : 0; // Compara o PIB per capita
                        if(pib_per_capita_ternario == 1) {
                            pontuacaoFinal1 += 1; // Adiciona 1 ponto para a carta 1
                            printf("A carta 1 venceu!\n Carta 1: PIB per Capita: %.2f > %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 1
                        } else {
                            pontuacaoFinal2 += 1; // Adiciona 1 ponto para a carta 2
                            printf("A carta 2 venceu!\n Carta 1: PIB per Capita: %.2f < %.2f\n", pib_per_capita1, pib_per_capita2); // Exibe a vitória da carta 2
                        }
                        break;
                        case 7:
                        // Exibe o resultado da comparação
                        printf("\nResultado da Comparação:\n");
                        printf("Carta 1: %d pontos\n", pontuacaoFinal1); // Exibe a pontuação da carta 1
                        printf("Carta 2: %d pontos\n", pontuacaoFinal2); // Exibe a pontuação da carta 2
                        if(pontuacaoFinal1 > pontuacaoFinal2) {
                            printf("A carta 1 venceu!\n"); // A carta 1 vence se sua pontuação for maior
                        } else if(pontuacaoFinal2 > pontuacaoFinal1) {
                            printf("A carta 2 venceu!\n"); // A carta 2 vence se sua pontuação for maior
                        } else {
                            printf("Empate entre as cartas!\n"); // Empate se as pontuações forem iguais
                        }
                    break;
                    default:
                        printf("Atributo inválido! Tente novamente.\n"); // Caso o usuário escolha um atributo inválido
                }
            }      

            // Escolha os atributos que você deseja comparar com operadores ternários 6
            printf("\nVocê chegou ao final das comparações:\n");
            printf(" - Resultado da Comparação. - \n");
            // Exibe o resultado da comparação
            printf("Carta 1: %d pontos\n", pontuacaoFinal1); // Exibe a pontuação da carta 1
            printf("Carta 2: %d pontos\n", pontuacaoFinal2); // Exibe a pontuação da carta 2
            if(pontuacaoFinal1 > pontuacaoFinal2) {
                printf("A carta 1 venceu!\n"); // A carta 1 vence se sua pontuação for maior
            } else if(pontuacaoFinal2 > pontuacaoFinal1) {
                printf("A carta 2 venceu!\n"); // A carta 2 vence se sua pontuação for maior
            } else {
                printf("Empate entre as cartas!\n"); // Empate se as pontuações forem iguais
            }
            break;
            default:
                printf("Atributo inválido! Tente novamente.\n"); // Caso o usuário escolha um atributo inválido
        }
}