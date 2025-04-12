#include <stdio.h>

int main()
{
    int a = 5;
    int b = -10;
    int c = 1;

    // Exemplo 1
    // a > 0 => Verdadeiro.
    // b > 0 => Falso.
    // Verdadeiro && Falso => Falso.
    if (a > 0 && b > 0) {
        printf("Exemplo 1: A condição é verdadeira\n");
    } else {
        printf("Exemplo 1: A condição é falsa\n");
    }

    // Exemplo 2
    // a > 0 => Verdadeiro.
    // c == 1 => Verdadeiro.
    // Verdadeiro || Verdadeiro => Verdadeiro.
    if (a > 0 || c == 1) {
        printf("Exemplo 2: A condição é verdadeira\n");
    } else {
        printf("Exemplo 2: A condição é falsa\n");
    }

    // Exemplo 3
    // !(b < 0) => Falso.
    // c != 0 => Verdadeiro.
    // Falso && Verdadeiro => Falso.
    if (!(b < 0) && c != 0) {
        printf("Exemplo 3: A condição é verdadeira\n");
    } else {
        printf("Exemplo 3: A condição é falsa\n");
    }

    // Exemplo 4
    // a == 5 => Verdadeiro.
    // b + c > 0 => Falso.
    // Verdadeiro || Falso => Verdadeiro.
    if (a == 5 || b + c > 0) {
        printf("Exemplo 4: A condição é verdadeira\n");
    } else {
        printf("Exemplo 4: A condição é falsa\n");
    }

    // Exemplo 5
    // a < 0 => Falso.
    // b < 0 => Verdadeiro.
    // Falso && Verdadeiro => Falso.
    // c == 1 => Verdadeiro.
    // Falso || Verdadeiro => Verdadeiro.
    if (a < 0 && b < 0 || c == 1) {
        printf("Exemplo 5: A condição é verdadeira\n");
    } else {
        printf("Exemplo 5: A condição é falsa\n");
    }

    // Altura + Idade

    int idade = 17;
    int altura = 1.75;

    // idade >= 18 +> Falso
    // altura >= 1.70 +> Verdadeiro
    // Falso && Verdadeiro => Falso
    // falso && altura >= 1.70.
    // falso && verdadeiro => falso.

    if (idade >= 18 && idade <= 30 && altura >= 1.70) {
        printf("Você esta na faixa etaria e estende a altura certa.\n");
    } else {
        printf("Você não atende os criterios.\n");
    }

    return 0;
}