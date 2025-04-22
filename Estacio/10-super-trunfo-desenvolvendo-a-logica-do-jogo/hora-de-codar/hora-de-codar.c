#include <stdio.h>     // Biblioteca padrão de entrada e saída
#include <stdlib.h>    // Para usar rand() e srand()
#include <time.h>      // Para usar time()

int main() {
    int numeroJogador, numeroComputador;  // Variáveis para armazenar os números
    char tipoComparacao;                 // Variável para armazenar o tipo de comparação escolhido pelo jogador

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));
    // Gera um número aleatório entre 1 e 100 para o computador
    numeroComputador = rand() % 100 + 1;

    // Exibe as instruções do jogo
    printf("Bem-Vindo ao jogo Maior, Menor ou Igual.\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf(" M. Maior\n");
    printf(" N. Menor\n");
    printf(" I. Igual\n");
    printf("Sair do jogo: 0\n");

    // Solicita ao jogador o tipo de comparação
    printf("Digite o Tipo de Comparação: ");
    scanf(" %c", &tipoComparacao);  // Lê um caractere, o espaço antes do %c ignora espaços em branco anteriores

    // Se o jogador digitar 0, o jogo termina
    if (tipoComparacao == '0') {
        printf("Saindo do jogo...\n");
        return 0;
    }

    // Solicita ao jogador um número de 1 a 100 para comparar
    printf("Digite o número de 1 a 100 para comparar: ");
    scanf("%d", &numeroJogador);

    // Mostra o número aleatório que o computador escolheu
    printf("O número do computador é: %d\n", numeroComputador);

    // Verifica o tipo de comparação usando switch-case
    switch (tipoComparacao) {
        // Caso o jogador escolha 'M' ou 'm' (Maior)
        case 'M':
        case 'm':
            if (numeroJogador > numeroComputador)
                printf("Você venceu! O seu número é maior que o do computador.\n");
            else if (numeroJogador < numeroComputador)
                printf("Você perdeu! O seu número é menor que o do computador.\n");
            else
                printf("Empate! Os números são iguais.\n");
            break;

        // Caso o jogador escolha 'N' ou 'n' (Menor)
        case 'N':
        case 'n':
            if (numeroJogador < numeroComputador)
                printf("Você venceu! O seu número é menor que o do computador.\n");
            else if (numeroJogador > numeroComputador)
                printf("Você perdeu! O seu número é maior que o do computador.\n");
            else
                printf("Empate! Os números são iguais.\n");
            break;

        // Caso o jogador escolha 'I' ou 'i' (Igual)
        case 'I':
        case 'i':
            if (numeroJogador == numeroComputador)
                printf("Você venceu! Os números são iguais.\n");
            else
                printf("Você perdeu! Os números são diferentes.\n");
            break;

        // Se o jogador digitar qualquer outra coisa, é inválido
        default:
            printf("Tipo de comparação inválido. Tente novamente.\n");
            break;
    }

    return 0; // Finaliza o programa
}
