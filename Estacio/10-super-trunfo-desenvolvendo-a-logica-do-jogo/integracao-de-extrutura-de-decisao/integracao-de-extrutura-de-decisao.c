#include <stdio.h> 

int main () {

    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes.\n");
    printf("1- Calcular media.\n");
    printf("2- Determinar Status.\n");
    printf("3- Sair.\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
                media = (nota1 + nota2) / 2;
                printf("A media é: %.2f\n", media);
            } else {
                printf("Notas invalidas. As notas devem estar entre 0 e 10.\n");
            }
            break;
        case 2:
            printf("Digite a media: ");
            scanf("%f", &media);
            media >= 5 ? printf("Aprovado.\nMédia do aluno: %.2f\n", media) : printf("Reprovado.\nMédia do aluno: %.2f\n", media);
            break;
        case 3:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}