#include <stdio.h>

int main() {

    int numero1, numero2, i;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &numero1);
    printf("Digite um numero até onde você quer calcular a tabuada: ");
    scanf("%d", &numero2);

    for (i = 0; i <= numero2; i++) {
        printf("%d x %d = %d\n", numero1, i, numero1 * i);
    }

    return 0;
}