#include <stdio.h> 

int main() {

    int idade;

    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    // Estruturas de decisão encadeada
    if (idade < 3) {
        printf("Você é um bebê.");
    } else if (idade >= 3 && idade < 12) {
        printf("Você é uma criança.");
    } else if (idade >= 12 && idade < 18) {
        printf("Você é um adolescente.");
    } else if (idade >= 18 && idade < 60) {
        printf("Você é um adulto.");
    } else {
        printf("Você é um idoso.");
    }

    // Estruturas de decisão encadeada
    float nota;

    printf("\nDigite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 90) {
        printf("Sua nota é A.\n");
    } else if (nota >= 80) {
        printf("Sua nota é B.\n");
    } else if (nota >= 70) {
        printf("Sua nota é C.\n");
    } else if (nota >= 60) {
        printf("Sua nota é D.\n");
    } else {
        printf("Sua nota é F.\n");
    }
}