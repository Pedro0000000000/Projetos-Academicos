#include <stdio.h> 

int main() {

    int idade, resultado;
    idade = 19;

    resultado = idade >= 18 ? 1 : 0;
    
    if(resultado == 1) {
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }
    printf("-----------------\n");

    int temperatura;

    temperatura = 28;

    temperatura >= 30 ? printf("Dia quente\n") : printf("Dia frio\n");
    printf("-----------------\n");
    // Outra forma de fazer o mesmo, mas com variavel

    temperatura = temperatura >= 30 ? 1 : 0;

    if(temperatura == 1) {
        printf("Dia quente.\n");
    } else {
        printf("Dia frio.\n");
    }

    printf("-----------------\n");

     float number1, number2, numberMaior;

     number1 = 10.0;
     number2 = 20.0;
    

    number1 > number2 ? (numberMaior = number1) : (numberMaior = number2);
    printf("O maior numero eh: %.2f\n", numberMaior);

    if (number1 > number2) {
        printf("\nO maior numero eh: %.2f\n", number1);
    } else {
        printf("O maior numero eh: %.2f\n", number2);
    }

return 0;

}