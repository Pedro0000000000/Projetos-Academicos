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
        printf("preco1 é maior que preco2.\n");
    } else if (preco1 == preco2) {
        printf("preco1 é igual a preco2.\n");
    } else {
        printf("preco1 é menor que preco2.\n");
    }

    return 0;
}