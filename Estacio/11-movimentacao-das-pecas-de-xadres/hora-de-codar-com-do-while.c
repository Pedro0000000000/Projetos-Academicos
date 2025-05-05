#include <stdio.h>

int main() {

    int numero;

    do {
        printf("Digite um numero inteiro, para sair digite um numero par: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("O numero %d é par!\n", numero);
        } else {
            printf("O numero %d é impar!\n", numero);
        }

    } while (numero % 2 != 0 );

    printf("Você saiu do loop!\n");

}