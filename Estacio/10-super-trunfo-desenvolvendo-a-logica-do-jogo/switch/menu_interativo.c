#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao, numero_secreto, palpite;

    printf("Menu principal:\n");
    printf("!. Iniciar jogo.\n");
    printf("2. Ver regras do jogo.\n");
    printf("3. Sair do jogo.\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
           srand(time(0)); // Inicializa o gerador de números aleatórios
           numero_secreto = rand() % 10;
           printf("Digite um número entre 0 e 9: ");
           scanf("%d", &palpite);
            if (numero_secreto == palpite) {
                printf("Parabéns! Você acertou o número secreto!\n");
                printf("Numero secreto: %d \n", numero_secreto);
            } else {
                printf("Você errou o numero secreto!");
                printf("Numero secreto: %d \n", numero_secreto);
            }
            break;
        case 2:
            printf("Regras do jogo:\n");
            printf("1. O computador escolhe um número secreto entre 0 e 9.\n");
            printf("2. O jogador deve tentar adivinhar o número.\n");
            printf("3. Se o jogador acertar, ele ganha.\n");
            printf("4. Se o jogador errar, ele perde.\n");
            int regras_do_jogo;
            printf("Digite o número da regra que você deseja ver: ");
            scanf("%d", &regras_do_jogo);
            switch (regras_do_jogo) {
                case 1:
                    printf("Regra 1: O computador escolhe um número secreto entre 0 e 9.\n");
                    break;
                case 2:
                    printf("Regra 2: O jogador deve tentar adivinhar o número.\n");
                    break;
                case 3:
                    printf("Regra 3: Se o jogador acertar, ele ganha.\n");
                    break;
                case 4:
                    printf("Regra 4: Se o jogador errar, ele perde.\n");
                    break;
                default:
                    printf("Opção inválida. Tente novamente.\n");
                    break;
            }
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }
}