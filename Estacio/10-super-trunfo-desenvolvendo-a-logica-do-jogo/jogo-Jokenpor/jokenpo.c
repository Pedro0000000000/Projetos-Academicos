#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int escolha_jogador, escolha_computador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("Jogo Jokenpô\n\n");
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("4 - Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha_jogador);

    // Gera a escolha do computador (1: Pedra, 2: Papel, 3: Tesoura, 4: Sair)
    escolha_computador = rand() % 3 + 1;

    // Verifica a escolha do jogador
    switch (escolha_jogador) {
        case 1:
            printf("Jogador escolheu: Pedra\n");
            break;
        case 2:
            printf("Jogador escolheu: Papel\n");
            break;
        case 3:
            printf("Jogador escolheu: Tesoura\n");
            break;
        case 4:
            printf("Saindo do jogo...\n");
            return 0; // Encerra o programa
        default:
            printf("Escolha inválida do jogador. Tente novamente.\n");
            return 0; // Encerra o programa
    }

    // Verifica a escolha do computador
    switch (escolha_computador) {
        case 1:
            printf("Computador escolheu: Pedra\n");
            break;
        case 2:
            printf("Computador escolheu: Papel\n");
            break;
        case 3:
            printf("Computador escolheu: Tesoura\n");
            break;
    }

    // Determina o resultado do jogo
    if ((escolha_jogador == 1 && escolha_computador == 3) || // Pedra vence Tesoura
        (escolha_jogador == 2 && escolha_computador == 1) || // Papel vence Pedra
        (escolha_jogador == 3 && escolha_computador == 2)) { // Tesoura vence Papel
        printf("Parabéns! Você ganhou!\n");
    } else if (escolha_jogador == escolha_computador) {
        printf("Empate!\n");
    } else {
        printf("O computador ganhou! Tente novamente.\n");
    }

    return 0;
}