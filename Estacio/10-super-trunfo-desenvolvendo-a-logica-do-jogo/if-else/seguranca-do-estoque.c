#include <stdio.h> 

int main() { 
    // Declaração de variáveis
    float temperatura, umidade; // Variáveis para armazenar temperatura e umidade
    unsigned int estoque, estoque_minimo = 10000; // Estoque atual e estoque mínimo definido como 10.000
    
    // Entrada da temperatura do estoque
    printf("Digite a temperatura do estoque: ");
    scanf("%f", &temperatura);
        
    // Entrada da umidade do estoque
    printf("Digite a umidade do estoque: ");
    scanf("%f", &umidade);

    // Entrada do valor do estoque
    printf("Digite o estoque: ");
    scanf("%u", &estoque);

    // Verificação da temperatura
    if (temperatura >= 30) {
        printf("A temperatura do estoque esta alta.\n");
    } else if (temperatura < 0) {
        printf("A temperatura do estoque esta baixa.\n");
    } else {
        printf("A temperatura do estoque esta normal.\n");
    }

    // Verificação da umidade
    if (umidade >= 50) {
        printf("A umidade do estoque esta alta.\n");
    } else if (umidade < 30) {
        printf("A umidade do estoque esta baixa.\n");
    } else {
        printf("A umidade do estoque esta normal.\n");
    }

    // Verificação do estoque em relação ao estoque mínimo
    if (estoque > estoque_minimo) {
        printf("O estoque esta bom.\n");
    } else {
        printf("O estoque esta baixo.\n");
    } 

    return 0; // Indica que o programa terminou com sucesso
}