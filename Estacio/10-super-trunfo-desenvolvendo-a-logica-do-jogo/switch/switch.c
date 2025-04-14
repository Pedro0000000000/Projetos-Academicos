#include <stdio.h>

int main() {

    int opcao, jogador_fla, jogador_flu, jogador_vasco, jogador_botafogo;

    // Exibe o menu inicial
    printf("Escolha uma das opções abaixo:\n\n");
    printf("Qual é seu time preferido?\n");
    printf("1 - Flamengo\n");
    printf("2 - Fluminense\n");
    printf("3 - Vasco\n");
    printf("4 - Botafogo\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Estrutura switch para tratar a escolha do time
    switch (opcao) {
        case 1:
            printf("Você escolheu Flamengo\n");
            printf("Qual é seu jogador preferido do Flamengo?\n");
            printf("1 - Zico\n");
            printf("2 - Júnior\n");
            printf("3 - Romário\n");
            printf("4 - Adriano\n");
            printf("Digite sua opção: ");
            scanf("%d", &jogador_fla);
            switch (jogador_fla) {
                case 1:
                    printf("\nVocê escolheu Zico\n");
                    break;
                case 2:
                    printf("\nVocê escolheu Júnior\n");
                    break;
                case 3:
                    printf("\nVocê escolheu Romário\n");
                    break;
                case 4:
                    printf("\nVocê escolheu Adriano\n");
                    break;
                default:
                    printf("\nOpção inválida\n");
                    break;
            }
            break;
        case 2:
            printf("Você escolheu Fluminense\n");
            printf("Qual é seu jogador preferido do Fluminense?\n");
            printf("1 - Fred\n");
            printf("2 - Thiago Silva\n");
            printf("3 - Deco\n");
            printf("4 - Conca\n");
            printf("Digite sua opção: ");
            scanf("%d", &jogador_flu);
            switch (jogador_flu) {
                case 1:
                    printf("\nVocê escolheu Fred\n");
                    break;
                case 2:
                    printf("\nVocê escolheu Thiago Silva\n");
                    break;
                case 3:
                    printf("\nVocê escolheu Deco\n");
                    break;
                case 4:
                    printf("\nVocê escolheu Conca\n");
                    break;
                default:
                    printf("\nOpção inválida\n");
                    break;
            }
            break;
        case 3:
            printf("Você escolheu Vasco\n");
            printf("Qual é seu jogador preferido do Vasco?\n");
            printf("1 - Romário\n");
            printf("2 - Edmundo\n");
            printf("3 - Roberto Dinamite\n");
            printf("4 - Juninho Pernambucano\n");
            printf("Digite sua opção: ");
            scanf("%d", &jogador_vasco);
            switch (jogador_vasco) {
                case 1:
                    printf("\nVocê escolheu Romário\n");
                    break;
                case 2:
                    printf("\nVocê escolheu Edmundo\n");
                    break;
                case 3:
                    printf("\nVocê escolheu Roberto Dinamite\n");
                    break;
                case 4:
                    printf("\nVocê escolheu Juninho Pernambucano\n");
                    break;
                default:
                    printf("\nOpção inválida\n");
                    break;
            }
            break;
        case 4:
            printf("Você escolheu Botafogo\n");
            printf("Qual é seu jogador preferido do Botafogo?\n");
            printf("1 - Garrincha\n");
            printf("2 - Nilton Santos\n");
            printf("3 - Jairzinho\n");
            printf("4 - Túlio Maravilha\n");
            printf("Digite sua opção: ");
            scanf("%d", &jogador_botafogo);
            switch (jogador_botafogo) {
                case 1:
                    printf("\nVocê escolheu Garrincha\n");
                    break;
                case 2:
                    printf("\nVocê escolheu Nilton Santos\n");
                    break;
                case 3:
                    printf("\nVocê escolheu Jairzinho\n");
                    break;
                case 4:
                    printf("\nVocê escolheu Túlio Maravilha\n");
                    break;
                default:
                    printf("\nOpção inválida\n");
                    break;
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}