#include <stdio.h> 

int main () {

    int a = 10, b = 12;

    // Operador lógico E (&&)
    // O operador lógico E (&&) é usado para verificar se duas condições são verdadeiras.
    // O resultado será verdadeiro se ambas as condições forem verdadeiras.
    // O resultado será falso se pelo menos um dos operandos for falso.
    // Exemplo: Se a for maior que 0 e b for maior que 0, então ambos os números são verdadeiros.
    // Já se a for menor que 0 e b for maior que 0, então pelo menos um dos números é falso.
    
    if (a > 0 && b > 0) { // Vai imprimir verdadeiro.
        printf("a é maior que 0 e b é maior que 0\nEntão os dois números são verdadeiros\n");
    } else {
        printf("Pelo menos um dos números é falso.\n");
    }

    if (a < 0 && b > 0) { // Vai imprimir falso.
        printf("a é menor que 0 e b é maior que 0\nEntão os dois números são verdadeiros\n");
    } else {
        printf("Pelo menos um dos números é falso.\n");
    }

    return 0;
}