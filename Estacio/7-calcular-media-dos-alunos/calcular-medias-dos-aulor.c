#include <stdio.h>

int main() {
  float nota1, nota2, nota3, nota4;
  float media; // Usa float para lidar com números decimais

  printf("****** Calculadora da Média em C ******\n");

  // Solicita e lê a entrada de cada nota
  printf("Digite a 1ª nota do aluno: ");
  scanf("%f", &nota1);

  printf("Digite a 2ª nota do aluno: ");
  scanf("%f", &nota2);

  printf("Digite a 3ª nota do aluno: ");
  scanf("%f", &nota3);

  printf("Digite a 4ª nota do aluno: ");
  scanf("%f", &nota4);

  // Calcula a média
  media = (nota1 + nota2 + nota3 + nota4) / 4;
  
  // Exibe as notas e a média calculada
  printf("Notas do aluno:\n");
  printf("1ª nota: %.1f - 2ª nota: %.1f - 3ª nota: %.1f - 4ª nota: %.1f\n", nota1, nota2, nota3, nota4);
  printf("Média do aluno: %.2f\n", media); // %.2f exibe a média com duas casas decimais

  printf("****** Calculadora da Média em C ******\n");

  return 0;
}

// mesmo resultado porem usando o modo implicito

// #include <stdio.h>

// int main() {
//   int nota1, nota2, nota3, nota4; // Notas como inteiros
//   float media; // Variável para armazenar a média com casas decimais

//   printf("****** Calculadora da Média em C ******\n");

//   // Solicita e lê a entrada de cada nota
//   printf("Digite a 1ª nota do aluno: ");
//   scanf("%d", &nota1);

//   printf("Digite a 2ª nota do aluno: ");
//   scanf("%d", &nota2);

//   printf("Digite a 3ª nota do aluno: ");
//   scanf("%d", &nota3);

//   printf("Digite a 4ª nota do aluno: ");
//   scanf("%d", &nota4);

//   // Calcula a média usando conversão implícita
//   media = (float)(nota1 + nota2 + nota3 + nota4) / 4; // O casting (float) converte a soma para float antes da divisão

//   // Exibe as notas e a média calculada
//   printf("Notas do aluno:\n");
//   printf("1ª nota: %d - 2ª nota: %d - 3ª nota: %d - 4ª nota: %d\n", nota1, nota2, nota3, nota4);
//   printf("Média do aluno: %.2f\n", media); // Exibe a média com duas casas decimais

//   printf("****** Calculadora da Média em C ******\n");

//   return 0;
// }
