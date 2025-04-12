#include <stdio.h> 

int main() {
    // Operador lógico OU (||)
    // O operador lógico OU (||) é usado para verificar se pelo menos uma das condições é verdadeira.
    // O resultado será verdadeiro se pelo menos uma das condições forem verdadeiras.
    // O resultado será falso se ambas as condições forem falsas.
    // Exemplo: Se a for maior que 0 ou b for maior que 0, então pelo menos um dos números é verdadeiro.
    // Já se a for menor que 0 e b for menor que 0, então ambos os números são falsos.
    int a = 2, b = 5;

    if (a > 0 || b > 0) { // Vai imprimir verdadeiro.
        printf("a é maior que 0 ou b é maior que 0\nEntão pelo menos um dos números é verdadeiro\n");
    } else if (a < 0 || b > 0) { // Vai imprimir verdadeiro.
        printf("a é menor que 0 ou b é maior que 0\nEntão pelo menos um dos números é verdadeiro\n");
    } else if (a == 0 || b < 0) { // Vai imprimir falso.
        printf("a é igual a 0 ou b é menor que 0\nEntão os dois números são falsos\n");
    }

    return 0;
}