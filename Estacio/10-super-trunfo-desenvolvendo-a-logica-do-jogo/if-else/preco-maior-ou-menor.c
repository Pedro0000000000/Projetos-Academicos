#include <stdio.h>

int main() {
    float preco1, preco2;

    // Entrada dos preços
    printf("Digite o preco1: ");
    scanf("%f", &preco1);
    printf("Digite o preco2: ");
    scanf("%f", &preco2);

    // Verificação
    if (preco1 > preco2) {
        printf("preço 1 é maior que preço 2.\n");
    } else if (preco1 == preco2) {
        printf("preço 1 é igual a preço 2.\n");
    } else {
        printf("preço 1 é menor que preço 2.\n");
    }

    return 0;
}