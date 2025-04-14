#include <stdio.h>

int main() {

    int idade;
    float renda_mensal;

    // Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda_mensal);

    // Verifica se a pessoa está fora da faixa tributável por idade
    if (idade < 18 || idade >= 60) { 
        // Verifica a faixa de renda
        if (renda_mensal <= 2000) { 
            printf("Você é isento de impostos.\n");
        } else if (renda_mensal > 2000 && renda_mensal <= 5000) { 
            printf("Você paga 10%% de imposto.\n");
        } else { 
            printf("Você paga 20%% de imposto.\n"); 
        }
    } else if (idade >= 18 && idade < 60) { 
        // Verifica a faixa de renda
        if (renda_mensal <= 3000) { 
            printf("Você é isento de impostos.\n");
        } else if (renda_mensal > 3000 && renda_mensal <= 6000) { 
            printf("Você paga 5%% de imposto.\n");
        } else { 
            printf("Você paga 10%% de imposto.\n"); 
        }
    }
    // Caso a idade não se encaixe em nenhuma faixa
    else { 
        printf("Idade inválida.\n"); 
    }

    return 0;
}