#include <stdio.h>

int main() {
    // Operador lógico NÃO (!)
    // O operador lógico NÃO (!) é usado para inverter o valor lógico de uma condição.
    // Se a condição for verdadeira, o operador retorna falso.
    // Se a condição for falsa, o operador retorna verdadeiro.

    int a = 0; // Inicializando a com 0 (falso)
    
    // Verificando se a é falso (!a será verdadeiro se a for 0)
    if (!a) { // Como a é 0, !a será verdadeiro
        printf("O valor original de a é 0 (falso).\n"); // Resultado: O valor original de a é 0 (falso).
        printf("Com o operador !, o valor lógico de a foi invertido para 1 (verdadeiro).\n"); // Resultado: Com o operador !, o valor lógico de a foi invertido para 1 (verdadeiro).
    } else {
        printf("O valor original de a é diferente de 0 (verdadeiro).\n"); // Não será executado neste caso.
        printf("Com o operador !, o valor lógico de a foi invertido para 0 (falso).\n"); // Não será executado neste caso.
    }

    // Alterando o valor de a para 1 (verdadeiro)
    a = 1;

    // Verificando novamente com o operador !
    if (!a) { // Como a é 1, !a será falso
        printf("O valor original de a é 1 (verdadeiro).\n"); // Não será executado neste caso.
        printf("Com o operador !, o valor lógico de a foi invertido para 0 (falso).\n"); // Não será executado neste caso.
    } else {
        printf("O valor original de a é diferente de 0 (verdadeiro).\n"); // Resultado: O valor original de a é diferente de 0 (verdadeiro).
        printf("Com o operador !, o valor lógico de a foi invertido para 0 (falso).\n"); // Resultado: Com o operador !, o valor lógico de a foi invertido para 0 (falso).
    }

    return 0;
}