#include <stdio.h> 

int main() {

    int opcao;
    float saldo = 0.0; // Inicializando o saldo com 0
    float deposito;
    float saque;

    // Criar um menu de opções para o usuário:
    printf("Escolha uma das opções abaixo:\n\n");
    printf("1 - Verificar saldo\n");
    printf("2 - Fazer depósito\n");
    printf("3 - Fazer saque\n");
    printf("4 - Sair\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Verificar saldo
            printf("Seu saldo é: R$ %.2f\n", saldo);
            break;
        case 2:
            // Fazer depósito
            printf("Deposite o valor: R$ ");
            scanf("%f", &deposito);
            if (deposito < 0) {
                printf("Valor de depósito inválido.\n");
            } else {
                saldo += deposito;
                printf("Depósito realizado com sucesso!\n");
                printf("Saldo atual é: R$ %.2f\n", saldo);
            }
            break;
        case 3:
            // Fazer saque
            printf("Saque o valor: R$ ");
            scanf("%f", &saque);
            if (saque < 0) {
                printf("Valor de saque inválido.\n");
            } else if (saque > saldo) {
                printf("Saldo insuficiente.\n");
            } else {
                saldo -= saque;
                printf("Saque realizado com sucesso!\n");
                printf("Saldo atual é: R$ %.2f\n", saldo);
            }
            break;
        case 4:
            // Sair
            printf("Saindo do programa. Obrigado!\n");
            break;
        default:
            // Opção inválida
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}